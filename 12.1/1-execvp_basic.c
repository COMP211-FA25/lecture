#include <unistd.h>

int main() {
    char* args[] = {"ls", "-l", "/home", NULL};
    execvp("ls", args);
}
