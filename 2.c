#include <stdio.h>

int main() {
    int num = 0, a = 0, b = 1, temp = 0;

    printf("Digite um número para verificar se pertence à sequência de Fibonacci: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
        return 0;
    }

    while (b < num) {
        temp = a + b;
        a = b;
        b = temp;
    }

    if (b == num) {
        printf("%d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
