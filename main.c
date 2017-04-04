#include <stdio.h>

void switchCase(int, int);

int main() {

    int a,b;

    printf("Enter the value of two numbers.");
    scanf("%d%d", a,b);

    switchCase(a,b);
    return 0;
}

void switchCase(int a, int b)
{
    int input;

    printf("Enter the operation number you want to perform. 1 for Addition, 2 for subtraction, 3 for multiplication and 4 for division.");
    scanf("%d", input);

    switch(input) {
            //fixed break and continue

        case 1:
            printf("%d + %d is %d", a, b, a+b);
            break;
        case 2:
            printf("%d - %d is %d", a, b, a-b);
            break;
        case 3:
            printf("%d * %d is %d", a,b, a*b);
             break;
        case 4:
            printf("%d / %d is %d", a,b, a/b);
             break;
        default:
            printf("Wrong choice!");
            switchCase(a, b);
            continue;
    }


}
