#include <stdio.h>
#include <pthread.h>

// Function to be executed by each thread
void *printMessage(void *arg) {
    char *message = (char *)arg;
    printf("%s\n", message);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    // Create two threads
    pthread_create(&thread1, NULL, printMessage, (void *)"Thread 1");
    pthread_create(&thread2, NULL, printMessage, (void *)"Thread 2");

    // Wait for the threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
