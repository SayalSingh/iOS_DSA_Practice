#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    printf("Enter first char: ");
    scanf("%d", &a);
    printf("Enter second char: ");
    scanf(" %d", &b); // Note the space before %c to consume any leftover newline character
    printf("You entered: %d and %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a-b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}