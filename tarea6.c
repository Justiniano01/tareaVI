#include <stdio.h>

float suma(float x, float y)
{
    float sum;
    sum=x+y;
    return sum;
}

float resta(float x, float y)
{
    float res;
    res=x-y;
    return res;
}

float mult(float x, float y)
{
    float multiplicacion;
    multiplicacion=x*y;
    return multiplicacion;
}

float div(float x, float y)
{
    float divicion;
    divicion=x/y;
    return divicion;
}

int main()
{
    float valor1,valor2,res1;
    
    printf("Digite un numero : ");
    scanf("%f",&valor1);
    
    printf("Digitee otro numero : ");
    scanf("%f",&valor2);
    
    res1=suma(valor1, valor2);//Llamada de funcion
    printf("\nLa suma de los numeros es %.2f: ",res1);
    
    res1=resta(valor1, valor2);
    printf("\nLa resta de los numeros es %.2f: ",res1);
    
    res1=mult(valor1, valor2);
    printf("\nLa multiplicacion de los numeros es %.2f: ",res1);
    
    res1=div(valor1, valor2);
    printf("\nLa divicion de los numeros es %.2f: ",res1);
    
   
    return 0;
}
