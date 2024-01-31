#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include <semaphore.h>

// Shared data
int result;

// Mutex for synchronization
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Semaphore for signaling
sem_t semaphore;

// Structure to hold client request data
struct Request {
    int operand1;
    int operand2;
    char operator;
};

// Function to perform arithmetic operations
int performOperation(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else
                return 0; // Division by zero
        default:
            return 0; // Invalid operator
    }
}

// Function to handle client requests
void *handleClient(void *arg) {
    struct Request *request = (struct Request *)arg;
    int result;

    // Perform arithmetic operation
    result = performOperation(request->operand1, request->operand2, request->operator);

    // Acquire the mutex before updating shared data
    pthread_mutex_lock(&mutex);

    // Update the shared result variable
    result += result;

    // Release the mutex after updating shared data
    pthread_mutex_unlock(&mutex);

    // Signal the semaphore to notify the main thread
    sem_post(&semaphore);

    pthread_exit(NULL);
}

int main() {
    // Initialize the semaphore
    sem_init(&semaphore, 0, 0);

    // Create an array of client requests
    struct Request requests[] = {
        {5, 3, '+'},
        {10, 2, '*'},
        {8, 4, '/'},
        {20, 5, '-'},
    };

    // Create an array of threads
    pthread_t threads[sizeof(requests) / sizeof(requests[0])];

    // Process client requests using threads
    for (int i = 0; i < sizeof(requests) / sizeof(requests[0]); i++) {
        pthread_create(&threads[i], NULL, handleClient, (void *)&requests[i]);
    }

    // Wait for all threads to finish
    for (int i = 0; i < sizeof(requests) / sizeof(requests[0]); i++) {
        pthread_join(threads[i], NULL);
    }

    // Display the final result
    sem_wait(&semaphore);
    printf("Final result: %d\n", result);

    // Destroy the semaphore and mutex
    sem_destroy(&semaphore);
    pthread_mutex_destroy(&mutex);

    return 0;
}
