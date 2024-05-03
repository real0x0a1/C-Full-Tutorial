#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

// Shared data
int counter = 0;
sem_t semaphore;

// Function to be executed by each thread
void *incrementCounter(void *arg) {
    for (int i = 0; i < 100000; i++) {
        // Wait on the semaphore
        sem_wait(&semaphore);

        // Critical section: modify shared data
        counter++;

        // Signal the semaphore
        sem_post(&semaphore);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    // Initialize the semaphore
    sem_init(&semaphore, 0, 1);

    // Create two threads
    pthread_create(&thread1, NULL, incrementCounter, NULL);
    pthread_create(&thread2, NULL, incrementCounter, NULL);

    // Wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Display the final value of the counter
    printf("Final counter value: %d\n", counter);

    // Destroy the semaphore
    sem_destroy(&semaphore);

    return 0;
}
