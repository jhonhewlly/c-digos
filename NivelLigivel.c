// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void leg(char *texto, int *vet){
 for(int i=0; texto[i]!= '\0';i++){
     if (texto[i]==' ') vet[1]++;
     else if(texto[i]=='.'||texto[i]==',') vet[2]++;
     else vet[0]++;
 }
 vet[0]--;
 vet[1]++;
}
int main() {
    char string[200];
    int vetor[]={0,0,0};
    printf("Insira um texto:\n");
    gets(string);
    
    leg(string,vetor);
    
    return 0;
}
