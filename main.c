#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void mostrarresult(float peso);
float pesoideal(char gen, float alt);
float leiaalt();
char leiagenero();
void apresentacao();
int main()
{
    apresentacao();
    float gen = leiagenero();
    float alt = leiaalt();
    float peso = pesoideal(gen, alt);
    mostrarresult(peso);
    return 0;
}
void apresentacao()
{
    printf("vamos calcular seu peso ideal!");
}
char leiagenero()
{
    char gen;
    bool erro;
    do{
        printf("\nescreva seu genero com M ou F, maiusculo por favor:");
        scanf(" %c",&gen);
        erro = (gen != 'M' && gen != 'F');
        if (erro){
            printf("\nletra invalida");
        }
    }while (erro);
    return gen;
}
float leiaalt()
{
    float alt;
    bool erro;
    do{
        printf("\nescreva sua altura:");
        scanf("%f",&alt);
        erro = alt <=0;
        if(erro){
            printf("altura invalida");
        }
    }while (erro);
    return alt;
}
float pesoideal(char gen, float alt)
{
    float peso;
    if (gen = 'M') {
        peso = (72.7 * alt) - 58;
    }
    else{
        peso = (62.1 * alt) - 44.7;
    }
    return peso;
}
void mostrarresult(float peso)
{
    printf("o seu peso ideal eh: %f", peso);
}
