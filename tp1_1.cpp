#include <stdio.h>

int main(){
    printf("Hola Mundo");
    
    //Variable y Puntero
    int var = 1, *p_var;
    p_var = &var;

    //Mostrar Resultados
    printf("\nEl contenido del puntero es: %d", *p_var);
    printf("\nLa direccion de memoria almacenada por el puntero es: %d", &p_var);
    printf("\nLa direccion de memoria de la variable es: %d", &var);
    printf("\nLa direccion de memoria del puntero es: %d", &p_var);
    printf("\nEl tamano de memoria utilizado por esa variable es: %d", sizeof(var));
    
    return 0;
}