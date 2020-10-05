#include <stdio.h>

main()
{
    int  V1, V2, V3 , prom;
    printf ("Promediar tres calificaciones apartir de un sistema de letras. Recordando que despues de G  no se suma la calificacion\n");
    scanf("%d %d %d", &V1, &V2, &V3);


    prom=(V1+V2+V3)/3;

    if (prom<=5)
     printf ("Calificacion Reprobatoria\n");
 if (prom>=11)
     printf ("Calificacion Herronea\n");
else

{
printf("Calificacion Aprobatoria");
printf( "\n\n   Su calificacion es: %d", prom );

}


    }









