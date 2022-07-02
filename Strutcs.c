// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
typedef struct{
    char cidade[100];
    char rua[100];
    int numero;
} endereco;
 struct pessoa {
    char nome[20];
    int idade;
    float altura;
    endereco local;
} ;
struct pessoa cadastro(){
    struct pessoa x;
    printf("Ensira o nome:\n");
    scanf("%s",x.nome);
    printf("Ensira a Idade:\n");
    scanf("%d",&x.idade);
    printf("Ensira a altura:\n");
    scanf("%.2f",&x.altura);
    return x;
}
int main() {
   struct pessoa r;
    strcpy(r.nome,"Augusto");
    cadastro();
    // Write C code here
    printf("%s",r.nome);
    
    return 0;
}
