#include <stdio.h>
#include <unistd.h>

int main() {
    int pipeFD[2];
    pid_t childPID;
    char buffer[20];

    // Create a pipe
    if (pipe(pipeFD) == -1) {
        perror("Pipe creation failed");
        return 1;
    }

    // Create a child process
    childPID = fork();

    if (childPID == -1) {
        perror("Forking failed");
        return 1;
    }

    if (childPID == 0) {
        // Child process (writes to the pipe)
        close(pipeFD[0]);  // Close the reading end of the pipe

        char message[] = "Hello, parent!";
        write(pipeFD[1], message, sizeof(message));
        close(pipeFD[1]);  // Close the writing end of the pipe
    } else {
        // Parent process (reads from the pipe)
        close(pipeFD[1]);  // Close the writing end of the pipe

        read(pipeFD[0], buffer, sizeof(buffer));
        printf("Message from child: %s\n", buffer);
        close(pipeFD[0]);  // Close the reading end of the pipe
    }

    return 0;
}
