// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    // Write C code here
    char s[50],c[50],auxc;
    int key,auxi;
    printf("insira a mensagem:\n");
    gets(s);
    printf("insira a chave:\n");
    scanf("%d",&key);
    for(int i=0;i <= strlen(s);i++){
        auxi=(int) s[i];
        auxc= (char) auxi + (auxi+key)%26 ;
        c[i]=auxc;
    }
    c[strlen(s)+1]='\0';
    printf("%s",c);
    return 0;
}
