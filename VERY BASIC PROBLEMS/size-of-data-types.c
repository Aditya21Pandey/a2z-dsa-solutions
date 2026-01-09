#include <stdio.h>

//size of a variable
int main() {
    // Using sizeof operator
    printf("Size of long int: %lu bytes\n", sizeof(long int));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of double: %lu bytes\n", sizeof(double));

    // Without using sizeof for int
    int a;
    char ptr1 = (char)&a;
    char ptr2 = (char)(&a + 1);
    printf("Size of int without sizeof: %ld bytes\n", ptr2 - ptr1);

    // Without using sizeof for double
    double d;
    char ptr3 = (char)&d;
    char ptr4 = (char)(&d + 1);
    printf("Size of double without sizeof: %ld bytes\n", ptr4 - ptr3);

    return 0;
}

