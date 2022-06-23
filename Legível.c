// Online C compiler to run C program online
#include <stdio.h>
int textv(char string[200],float *w);
int main() {
    float vetor[3];
    char str[200];
    textv(str)
    printf("Hello world");
    
   return 0;
}
int textv(char string[200],float *w) {
    
    int Letra=0,palavra=0,frase=0;
    
    for(int i=0; i <= strlen(string);i++){
       if(string[i]==' ') palavra++;
       else if(string[i]=='.'||string[i]==',') frase++;
       else Letra++;
           
    }
    palavra++;
    Letra--;
    w[0]=Letra;
    w[1]=palavra;
    w[2]=frase;
    return 0;
}
