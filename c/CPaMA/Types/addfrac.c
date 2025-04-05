// Adds two fractions

#include <stdio.h>

int main(void) {
    int num1, denom1, num2, denom2, result_num, result_denom;
    char ch;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d /%d %c%d /%d", &num1, &denom1, &ch, &num2, &denom2);
    
    if (ch == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The result is %d/%d\n", result_num, result_denom);
    } else if (ch == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
        printf("The result is %d/%d\n", result_num, result_denom);
    } else if (ch == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
        printf("The result is %d/%d\n", result_num, result_denom);
    } else if (ch == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
        printf("The result is %d/%d\n", result_num, result_denom);
    } else {
        printf("Invalid operator entered");
    }

    return 0;
}


// 1/4 + 1/2
//Allows spaces before and after the / and +