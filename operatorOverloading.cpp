#include <stdio.h>

int main() {
    int x = 10;
    printf("Address of x: %p\n", (void*)&x); // Use %p for pointer addresses
    return 0;
}