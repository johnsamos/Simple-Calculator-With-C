#include <stdio.h>
int main(void) {
    char controller;
    double num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &controller);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (controller) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1+num2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1-num2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1*num2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1/num2);
        break;
    default:
        printf("Error! Controller is not correct");
    }

    return 0;
}