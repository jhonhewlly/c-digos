// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char string[200];
    int Letra=0,palavra=0,frase=0;
    
    printf("Insira um texto:\n");
    gets(string);
    for(int i=0; i <= strlen(string);i++){
       if(string[i]==' ') palavra++;
       else if(string[i]=='.'||string[i]==',') frase++;
       else Letra++;
           
       printf("%c\n",string[i]);
    }
    palavra++;
    Letra--;
    printf("%d palavras!\n%d frases!\n%d Letras!\n",palavra,frase,Letra);
    return 0;
}
