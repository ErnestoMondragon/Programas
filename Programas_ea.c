#include <stdio.h>
#include <stdlib.h>
void printSerie(int ini, int n, int inc);
int main(){
  int opcion;
    int ok;
    int n;

void clearBuffer(void);
void triangulo1(int n);
void triangulo2(int n);
void triangulo3(int n);
void triangulo4(int n);
double calcularPi(int n);

    do {
        printf("\t\t\tMENU  \n");
        printf("\tSeleccione una opcion \n");
        printf("1.- Figuras \n");
        printf("2.- Valor de Pi \n");
        printf("3.- Series \n");
        printf("4.- Salir\n\n\n");
        printf("Opcion: ");

        ok = scanf("%d",&opcion);
        if(ok != 1)
            opcion = -1;

        switch(opcion) {
            case 1:
                printf("Figuras \n");

                while(1) {
                    clearBuffer();
                    printf("Ingrese el numero de filas del triangulo: ");
                    ok = scanf("%d",&n);
                    if(ok == 1) {
                        if(n > 0)
                            break;
                        else
                            printf("Error. Escriba un  numero entero mayor a 0\n");
                    } else
                        printf("Error. Dato no valido, vuelva a intentarlo\n");
                }
                printf("Triangulo 1:\n");
                triangulo1(n);
                printf("Triangulo 2:\n");
                triangulo2(n);
                printf("Triangulo 3:\n");
                triangulo3(n);
                printf("Triangulo 4:\n");
                triangulo4(n);
                printf("\nPresione ENTER para continuar...");
                getchar();
                break;
            case 2:
                printf("Valor de Pi \n");

                while(1) {
                    clearBuffer();
                    printf("Ingrese un numero entero positivo: ");
                    ok = scanf("%d",&n);
                    if(ok == 1) {
                        if(n > 0)
                            break;
                        else
                            printf("Error. Su entrada debe ser un numero entero mayor a 0, vuelva a intentarlo\n");
                    } else
                        printf("Error. Ingreso un dato no valido, vuelva a intentarlo\n");
                }
                printf("pi: %f\n\n",calcularPi(n));
                printf("Presione ENTER para continuar...");
                getchar();
                break;
            case 3:
                printf("Series \n");
                printSerie(1,7,2);
                printSerie(2,6,3);
                printSerie(30,7,-10);
                printSerie(15,6,8);
                printf("Presione cualquier letra para continuar para continuar...");
                getchar();
                break;
            case 4:
                break;
            default:
                printf("Error. Opcion no valida, vuelva a intentarlo. Presione cualquier letra para continuar...");
                getchar();
                break;
        }
        clearBuffer();
        system("cls");
    } while(opcion != 4);

    return 0;
}


void clearBuffer() {
    while(getchar() != '\n');
}

void triangulo1(int n) {
    int i,j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
}

void triangulo2(int n) {
    int i,j;
    for(i = n; i > 0; --i) {
        for(j = 0; j < i; ++j)
            printf("*");
        printf("\n");
    }
}

void triangulo3(int n) {
    int i,j;
    for(i = n; i > 0; --i) {
        for(j = 0; j < n; ++j) {
          if(j < (n - i))
            printf(" ");
          else
            printf("*");
        }
        printf("\n");
    }
}

void triangulo4(int n) {
    int i,j;
    for(i = 1; i <= n; ++i) {
        for(j = 0; j < n; ++j) {
          if(j < (n - i))
            printf(" ");
          else
            printf("*");
        }
        printf("\n");
    }
}

double calcularPi(int n) {
    int i;
    double pi = 0.0;
    double denominador;

    for(i = 0; i < n; ++i) {
        if((i % 2) == 0)
            denominador = (double) (2*i+1);
        else
            denominador = (double) -(2*i+1);
        pi += 4/denominador;
    }

    return pi;
}

void printSerie(int ini, int n, int inc) {
    int i;

    for(i = 0; i < n; i++) {
        if(i > 0)
        ini += inc;
        printf("%d ",ini);
    }
    printf("\n\n");
}
