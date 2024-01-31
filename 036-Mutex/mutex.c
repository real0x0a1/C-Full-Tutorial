#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Shared data
int counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Function to be executed by each thread
void *incrementCounter(void *arg) {
    for (int i = 0; i < 100000; i++) {
        // Acquire the mutex before modifying shared data
        pthread_mutex_lock(&mutex);
        counter++;
        // Release the mutex after modifying shared data
        pthread_mutex_unlock(&mutex);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    // Create two threads
    pthread_create(&thread1, NULL, incrementCounter, NULL);
    pthread_create(&thread2, NULL, incrementCounter, NULL);

    // Wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Display the final value of the counter
    printf("Final counter value: %d\n", counter);

    return 0;
}
