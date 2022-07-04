// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char nome[50],saida[]="Olá! ";
    printf("Insira seu Nome:\n");
    gets(nome);
    strcat(saida,nome);
    puts(saida);
    return 0;
}
