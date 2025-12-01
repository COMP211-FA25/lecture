#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    // 1. TODO: Set up the argument list for execvp() to run the program
    // "simple"
    char* argv[] = {};

    // 2. TODO: Create a child process.
    pid_t pid = ;
    if (pid < 0) {
        perror("fork");
        exit(1);
    }

    if (pid == 0) {
        // ───── CHILD PROCESS ─────

        // 3. TODO: Replace the child process image with the "simple" program
        //       by using execvp().  If execvp succeeds, it does NOT return.

        // If execvp() returns, it means an error occurred.
        perror("execvp");
        _exit(1);  // Ensure the child exits immediately on error.

    } else {
        // ───── PARENT PROCESS ─────

        // 4. TODO: Wait for the child process to finish executing.
        //       Use wait().
        if () {
            perror("wait");
            exit(1);
        }
    }

    // Print a message after the child process has completed.
    printf("done!\n");

    return 0;
}