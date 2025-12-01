#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    pid_t pid1, pid2;
    pid_t mypid;

    printf("Start\n");

    pid1 = fork();
    if (pid1 == -1) {
        perror("fork");
        exit(1);
    }
    printf("A\n");
    pid2 = fork();
    if (pid2 == -1) {
        perror("fork");
        exit(1);
    }

    mypid = getpid();
    printf("B\n");
    printf("End");

    return 0;
}
