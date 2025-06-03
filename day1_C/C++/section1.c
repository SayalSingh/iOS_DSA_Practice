#include <stdio.h>
#include <stdlib.h>
/* This is Question 1
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

*/

/* Question 2

#include <stdio.h>
int main() {
    char a;
    printf("Enter Character: ");
    scanf("%c", &a);
    
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("%c is a vowel",a);
    }
    else {
        printf("%c is a consonant", a );
    }
    
    return 0;
}
*/