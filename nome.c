#include <stdio.h>

int main() {
    char name[100];

    printf("Digite seu nome ");
    scanf("%s", name);

    printf("Olá %s.\n", name);

    return 0;
}