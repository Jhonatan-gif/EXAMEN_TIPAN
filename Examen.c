//Construir un programa que tenga 3 opciones 1ingresardatos (Informacion del producto(codigo del producto, nombre del produtos, marca, cantidad,presio de compra)), 2 mostrardatos(mostrar los datos en pantalla), 3salir

#include <stdio.h>

struct producto {
    char codigo[25];
    char nombreProd[50];
    char marca[50];
    int cantidad;
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

            //Crear archivo y escribir en el archivo .txt
            case 1:
                archivo = fopen("productos.txt", "a");
                
                printf("Ingrese el codigo del producto: ");
                scanf("%s", p.codigo);
                fprintf(archivo, "%s\t    \t\t", p.codigo);
                    
                printf("Ingrese el nombre del producto: ");
                scanf("%s", p.nombreProd);
                fprintf(archivo, "\t%s\t    \t\t", p.nombreProd);
                    
                printf("Ingrese la marca: ");
                scanf("%s", p.marca);
                fprintf(archivo, "\t%s\t    \t\t", p.marca);
                    
                printf("Ingrese la cantidad: ");
                scanf("%d", &p.cantidad);
                fprintf(archivo, "\t%d\t     \t\t", p.cantidad);
                    
                printf("Ingrese el precio de compra: ");
                scanf("%f", &p.precioCompra);
                fprintf(archivo, "\t%.2f\n", p.precioCompra);
                    
                fclose(archivo);
                printf("Datos guardados en el archivo productos.txt\n");
               
                break;

            case 2:
                printf("Mostrando datos\n");
                
                break;

            case 3:
                printf("Saliendo del programa\n");
                break;

            default:
                printf("Opcion no valida\n");
        }
    } while (opcion != 3);

    return 0;
}