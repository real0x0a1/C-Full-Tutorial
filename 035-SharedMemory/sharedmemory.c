#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

int main() {
    int shmid;
    key_t key = ftok("shared_memory_example", 65);

    // Create a shared memory segment
    shmid = shmget(key, 1024, IPC_CREAT | 0666);
    if (shmid == -1) {
        perror("Shared memory creation failed");
        return 1;
    }

    // Attach the shared memory segment
    char *sharedMemory = (char *)shmat(shmid, NULL, 0);

    // Write data to the shared memory
    sprintf(sharedMemory, "Hello, shared memory!");

    // Detach the shared memory segment
    shmdt(sharedMemory);

    // Reattach the shared memory segment
    sharedMemory = (char *)shmat(shmid, NULL, 0);

    // Read data from the shared memory
    printf("Message from shared memory: %s\n", sharedMemory);

    // Detach the shared memory segment
    shmdt(sharedMemory);

    // Delete the shared memory segment
    shmctl(shmid, IPC_RMID, NULL);

    return 0;
}
