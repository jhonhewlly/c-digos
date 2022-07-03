// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
typedef struct{
    char cidade[100];
    char rua[100];
    int numero;
} endereco;
void addres(endereco *ent){
    
    printf("Insira a Cidade:\n");
    scanf("%s",ent->cidade);
    printf("Insira uma Rua:\n");
    scanf("%s",ent->rua);
    printf("insira um numero:\n");
    scanf("%d",ent->numero);
    
}
 struct pessoa {
    char nome[20];
    int idade;
    float altura;
    endereco local;
} ;
struct pessoa cadastro(){
    struct pessoa x;
    
    char f[3];
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
   endereco xc;
    strcpy(r.nome,"Augusto");
    cadastro();
    addres(&xc);
    // Write C code here
    printf("%s",r.nome);
    
    return 0;
}
