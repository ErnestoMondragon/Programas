#include<stdio.h>
#include<math.h>

int main(int argc, char** args){
    float a, b, c, dc, s1, s2, xi, xr;

    printf("\n\t\tSolucion de una ecuacion cuadratica\n\n");
    printf("\n Escribe el valor de a: ");
    scanf("%f", &a);
    while(a==0){
    printf("\n El valor de a no puede ser 0 ingrese el valor de nuevo:");
    scanf("%f", &a);
    }
    printf("\n Escribe el valor de b: ");
    scanf("%f", &b);
     while(b==0){
    printf("\n El valor de b no puede ser 0 ingrese el valor de nuevo:");
    scanf("%f", &b);
    }
    printf("\n Escribe el valor de c: ");
    scanf("%f", &c);
     while(c==0){
    printf("\n El valor de c no puede ser 0 ingrese el valor de nuevo:");
    scanf("%f", &c);
    }
    dc=pow(b, 2.0)-4*a*c;
    if(dc>0.0){
        printf("\n\t\t\tLas dos raices son reales");
        s1=((-b+sqrt(dc))/(2.0*a));
        s2=((-b-sqrt(dc))/(2.0*a));
        printf("\n\t\t\tx1=%.2f   x2=%.2f", s1, s2);
    }
    else{
        if(dc==0.0){
            s1=(-b)/(2.0*a);
            printf("\n\t\t\tLa ecuacion solo tiene una raiz %.2f", s1);
        }
        else{
            xr=(-b/(2.0*a));
            xi=(sqrt(-dc)/(2.0*a));
            printf("\n\t\tLa raiz real es %.2f y la imaginaria es %.2f", xr, xi);
        }
    }
    return 0;
}
