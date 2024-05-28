#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    // Запрос первого числа
    printf("Введите первое число: ");
    scanf("%f", &num1);

    // Запрос второго числа
    printf("Введите второе число: ");
    scanf("%f", &num2);

    // Запрос операции
    printf("Введите операцию (+, -, *, /): ");
    scanf(" %c", &operation);

    // Выполнение операции и вывод результата
    switch(operation) {
        case '+':
            result = num1 + num2;
            printf("Результат: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Результат: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Результат: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Результат: %.2f\n", result);
            } else {
                printf("Ошибка: деление на ноль.\n");
            }
            break;
        default:
            printf("Ошибка: некорректная операция.\n");
    }

    return 0;
}