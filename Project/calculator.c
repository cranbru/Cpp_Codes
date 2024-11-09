#include <stdio.h>

double calc(double num1 ,double num2,char operator){
    double result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            return result;
            break;

        case '-':
            result = num1 - num2;
            return result;
            break;

        case '*':
            result = num1 * num2;
            return result;
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                return result;
            } else {
                printf("Error! Division by zero.\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
            break;
    }
}

int main() {
    double num1 , num2, ans;
    char operator;

    // Taking inputs from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    ans = calc(num1,num2,operator);

    printf("%.1lf %c %.1lf = %.2lf",num1,operator,num2,ans);
    return 0;
}


























