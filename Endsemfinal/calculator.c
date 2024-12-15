#include <stdio.h>

int main() {
char Continue = 'y';

while (Continue == 'y' || Continue == 'Y') { char operator;
float num1, num2, result;

printf("Simple Calculator\n"); printf("Enter an operator (+, -, *, /): "); scanf(" %c", &operator);

printf("Enter two numbers: "); scanf("%f %f", &num1, &num2);

switch (operator) { case '+':
result = num1 + num2;
printf("%.2f + %.2f = %.2f\n", num1, num2, result); break;
case '-':
result = num1 - num2;
printf("%.2f - %.2f = %.2f\n", num1, num2, result); break;
case '*':
result = num1 * num2;
printf("%.2f * %.2f = %.2f\n", num1, num2, result); break;
case '/':
if (num2 != 0) {
result = num1 / num2;
printf("%.2f / %.2f = %.2f\n", num1, num2, result);
} else {
printf("Error: Division by zero is not defined.\n");
}
break; default:
printf("Error: Invalid operator.\n"); break;
}

printf("Do you want to use it again? (y/n): "); scanf(" %c", &Continue);
}
printf("Thank you for using the calculator. Cya ;) \n"); return 0;
}
