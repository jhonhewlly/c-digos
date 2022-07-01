// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
void leg(char *texto, int *vet){
 for(int i=0; texto[i]!= '\0';i++){
     if (texto[i]==' ') vet[1]++;
     else if(texto[i]=='.'||texto[i]==',') vet[2]++;
     else vet[0]++;
 }
 vet[1]++;
}
int main() {
    char string[200];
    int vetor[]={0,0,0};
    float indice,l,s;
    printf("Insira um texto:\n");
    gets(string);
    
    leg(string,vetor);
    l= (float) vetor[0]/(float) vetor[1];
    s= (float) vetor[2]/(float) vetor[1];

    indice=5.88*l-29.6*s-15.8;
    printf("%.2f .. %.2f .. %.2f",l,s,indice);
    return 0;
}
