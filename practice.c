#include <stdio.h>

int main() {
    int x = 10;
    printf("Address of x: %p\n", (int*)&x); // Use %p for pointer addresses
    return 0;
}
