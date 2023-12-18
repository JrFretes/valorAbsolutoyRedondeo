#include <stdio.h>
#include <stdlib.h>


void redondeoArriba(float x){
    float cambio=0;

    cambio=ceil(x);
    printf("Redondeo para Arriba de %.2f es %.2f\n",x,cambio);
}

void valorAbsoluto(float x){
    float cambio=0;

    cambio=fabs(x);
    printf("Valor Absoluto de %.2f es %.2f\n",x,cambio);
}

void redondeoAbajo(float x){
    float cambio=0;

    cambio=floor(x);
    printf("Redondeo para Abajo de %.2f es %.2f\n",x,cambio);
}

void restoDivision(int y,int u){
    int cambio=0;

    cambio=fmod(y,u);
    printf("El resto de la division entre %d y %d es: %d\n",y,u,cambio);
}

void potencia(int y,int u){
    int cambio=0;

    cambio=pow(y,u);
    printf("%d elevaro a %d es igual a %d\n",y,u,cambio);
}

void raizCuadrada(int y){
    int cambio=0;

    cambio=sqrt(y);

    printf("La raiz cuadrada de %d es %d",y,cambio);
}



int main()
{
    float valor;
    int ente1,ente2;

    printf("Ingrese un valor: ");
    scanf("%f",&valor);

    redondeoArriba(valor);
    valorAbsoluto(valor);
    redondeoAbajo(valor);

    printf("Ingrese dos valores: ");
    scanf("%d",&ente1);
    scanf("%d",&ente2);
    restoDivision(ente1,ente2);
    potencia(ente1,ente2);
    raizCuadrada(ente1);

   return 0;
}
