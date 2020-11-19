#include <stdio.h>
int main(void) {
    char controller;
    double num1, num2;
    printf("Insert an Number (+, -, *, /): ");
    scanf("%c", &controller);
    printf("Insert Two Numbers: ");
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
