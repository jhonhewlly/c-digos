// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char string[200];
    
    printf("Insira um texto:\n");
    gets(string);
    printf("O texto inserido foi:\n%s\n",string);
    printf("O tamanho do texto é:\n%d\n",strlen(string));
    return 0;
}
