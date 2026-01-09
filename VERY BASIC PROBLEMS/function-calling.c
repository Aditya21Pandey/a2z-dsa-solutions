#include <stdio.h>
// Function for call by value
void cbv(int a,int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("\nInside call by value function: a = %d, b = %d", a, b);
}
// Function for call by reference (using pointers)
void cbr(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("\nInside call by reference function: a = %d, b = %d", *a, *b);
}
int main() {
    int x = 10, y = 20;
    printf("Before function calls: x = %d, y = %d", x, y);
    // Call by value
    cbv(x,y);
    printf("\nAfter callByValue: x = %d, y = %d", x, y);
    // Call by reference
    cbr(&x,&y);
    printf("\nAfter callByReference: x = %d, y = %d\n", x, y);
    return 0;
}

