// programme that evaluates an expression
// expression is evaluated left to right (no operator takes precedence over another)
// + - * /

#include <stdio.h>

int main(void) {
    float num, result;
    char ch;

    printf("Enter an expression: ");
    scanf("%f", &result);
    
    while((ch = getchar()) != '\n') {
        switch (ch) {
            case '+': 
                scanf("%f", &num);
                result += num;
                break;
            case '-':
                scanf("%f", &num);
                result -= num;
                break;
            case '*':
                scanf("%f", &num);
                result *= num;
                break;
            case '/':
                scanf("%f", &num);
                result /= num;
                break;
            default:
                printf("Invalid input");
                break;
        }
    }
    printf("Value of expression: %.1f\n", result);
    return 0;
}