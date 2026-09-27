#include <stdio.h>

// Function using pointers
void swapPointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Without pointers
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping WITHOUT pointers:\n");
    printf("a = %d, b = %d\n", a, b);

    // Swap back using pointers
    swapPointer(&a, &b);

    printf("\nAfter swapping USING pointers:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
