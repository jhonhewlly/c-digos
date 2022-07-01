// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void leg(char *texto, int *vet){
printf("%d\n",vet[2]);
}
int main() {
    char string[200];
    int vetor[]={0,0,0};
    printf("Insira um texto:\n");
    gets(string);
    
    leg(string,vetor);
    
    return 0;
}
