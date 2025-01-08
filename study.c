#include <stdio.h>

int main(int argc, char* argv[]) {
    // Check if at least one argument is passed (argv[0] is always the program name)
    if (argc > 1) {
        printf("First argument: %s\n", argv[1]);
    } else {
        printf("No arguments passed.\n");
    }
    return 0;
}
