#include <stdio.h>

struct producto
{
    char codigo[25];
    char nombreProd[50];
    char marca[50];
    int cantidad;
    float precioCompra;
};

int main()
{
    int opcion;
    struct producto p;
    FILE *archivo;

    do
    {
        printf("\n1. Ingresar datos\n2. Mostrar datos\n3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {

        // Crear archivo y escribir en el archivo .txt
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

        // se imprime los datos del archivo
        case 2:
            printf("Mostrando datos\n");
            archivo = fopen("productos.txt", "r");
            if (archivo == NULL)
            {
                printf("No se pudo abrir el archivo\n");
            }
            else
            {
                while (fscanf(archivo, "%s %s %s %d %f", p.codigo, p.nombreProd, p.marca, &p.cantidad, &p.precioCompra) != EOF)
                {
                    printf("%s\t%s\t%s\t%d\t%.2f\n", p.codigo, p.nombreProd, p.marca, p.cantidad, p.precioCompra);
                }
                fclose(archivo);
            }
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
