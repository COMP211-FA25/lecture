#include <stdio.h>
#include <unistd.h>

int main() {
    char* argv[2] = {"simple", NULL};
    if (execvp("./simple", argv) < 0) {
        fprintf(stderr, "error executing the simple program!\n");
    }
    printf("done!\n");
}
