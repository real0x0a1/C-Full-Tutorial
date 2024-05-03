## Multi-Threaded Arithmetic Server

### Introduction

This project demonstrates a multi-threaded arithmetic server written in C. The server is capable of handling multiple client requests concurrently using pthreads (POSIX threads) for multithreading. It performs basic arithmetic operations such as addition, subtraction, multiplication, and division.

### Implementation Overview

#### Shared Data and Synchronization

```c
// Shared data
int result;

// Mutex for synchronization
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Semaphore for signaling
sem_t semaphore;
```

- `result`: Shared variable to store the result of arithmetic operations.
- `mutex`: Mutex lock for synchronization to ensure only one thread accesses shared data at a time.
- `semaphore`: Semaphore for signaling between threads.

#### Client Request Structure

```c
// Structure to hold client request data
struct Request {
    int operand1;
    int operand2;
    char operator;
};
```

- `Request`: Structure to hold client request data including two operands and an operator.

#### Handling Client Requests

```c
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
```

- `handleClient`: Thread function to handle client requests.
- `performOperation`: Function to perform arithmetic operations based on the client's request.
- Mutex lock ensures thread safety when updating the shared result variable.
- Semaphore is used to signal the main thread after each client request is processed.

#### Main Function

```c
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
```

- The main function initializes the semaphore and creates an array of client requests.
- Threads are created to handle each client request concurrently.
- After all threads finish execution, the final result is displayed, and synchronization primitives are destroyed to release resources.

### How to Run

To run this program:

1. Make sure you have a C compiler installed on your computer.
2. Copy the code into a file with a `.c` extension, for example, `multi-threadedarithmeticserver.c`.
3. Open a terminal or command prompt and navigate to the directory where your file is located.
4. Compile the program by entering: `gcc multi-threadedarithmeticserver.c -o multi-threadedarithmeticserver`
5. Run the compiled program: `./multi-threadedarithmeticserver`

Or you can run this program also using:

```bash
   make multi-threadedarithmeticserver
```

---
