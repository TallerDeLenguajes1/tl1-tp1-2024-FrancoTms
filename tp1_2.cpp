#include <stdio.h>

//Funciones
int cuadradoNumero(int num);
void cuadradoVoid(int num);
void direcContenido(int num);
void invertir(int a, int b);
void orden(int a, int b);

//Main
int main(){
    //Variables
    int num, resultCuadrado, a, b;
    
    //Ingresar numero
    printf("\n*******Cuadrado de un Numero*******");
    printf("\nIngrese un numero: ");
    scanf("%d", &num);

    //Llamar funciones
    //Funcion Int
    printf("\nFuncion tipo Int Resultado: %d", resultCuadrado = cuadradoNumero(num));

    //Funcion Void
    cuadradoVoid(num);

    //Direccion y contenido
    direcContenido(num);

    //Invertir
    printf("\n\n*******Invertir Numeros*******");
    printf("\nIngrese el numero A: ");
    scanf("%d", &a);
    printf("\nIngrese el numero B: ");
    scanf("%d", &b);
    invertir(a, b);
    
    //Ordenar
    printf("\n\n*******Ordenar*******");
    orden(a, b);
    
    return 0;
}

//Declarar Funciones
int cuadradoNumero(int num){
    int result = num * num;
    return result;
}
void cuadradoVoid(int num){
    int result = num * num;
    printf("\nFuncion tipo Void Resultado: %d", result);
}
void direcContenido(int num){
    printf("\n\n*******Direccion y Contenido*******");
    printf("\nLa direccion de memoria de la variable es: %d", &num);
    printf("\nEl contenido de la variable es: %d", num);
}
void invertir(int a, int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
    printf("\nEl valor de A es: %d", a);
    printf("\nEl valor de B es: %d", b);
}
void orden(int a, int b){
    int mayor, menor, aux;
    aux = a;
    if (a>b)
    {
        a = b;
        b = aux;
        printf("\nEl numero menor es: %d", a);
        printf("\nEl numero mayor es: %d", b);
    }else
    {
        printf("\nEl numero menor es: %d", a);
        printf("\nEl numero mayor es: %d", b);
    }    
}
