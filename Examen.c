//Construir un programa que tenga 3 opciones 1ingresardatos (Informacion del producto(codigo del producto, nombre del produtos, marca, cantidad,presio de compra)), 2 mostrardatos(mostrar los datos en pantalla), 3salir

#include <stdio.h>

struct producto {
    char codigo [25];
    char nombreProd [50];
    char descProd [50];
    int cantidad ;
    float precioCompra;
};

int main() {
    int opcion;
    struct producto p;
    FILE *archivo;

    do {
        printf("\n1. Ingresar datos\n2. Mostrar datos\n3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                
                break;

            case 2:
                printf("Mostrando datos...\n");
              
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida\n");
        }
    } while (opcion != 3);

    return 0;
}