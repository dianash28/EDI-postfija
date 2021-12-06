#include <stdio.h>
#include <string.h>

typedef struct 
{
    float calificaciones;
    char alumnos[20];
    float prome;
}Promedio;

int main ()
{
    FILE *calificacion;
    int valor=10;
    int valorRegreso;
    Promedio promedio, calificacionLeido;
    float promed[5];

    int i;
    float prom;
    calificacion=fopen("ejercicio.dat", "wb");//los crea


    for (i=0; i<5; i++)
    {
        printf("dame el nombre de un alumno");
        scanf ("%s", promedio.alumnos);
        printf("dame la calificacion");
        scanf("%f", &promedio.calificaciones);

        fwrite(&promedio, sizeof(Promedio), 1, calificacion );

    }

    fclose(calificacion);
    

    calificacion=fopen("ejercicio.dat", "ab");
    promedio.calificaciones=(prom+promedio.calificaciones)/5;;
    fwrite (&promedio, sizeof (Promedio), 1,calificacion );

    fclose(calificacion);
    calificacion=fopen("ejercicio.dat", "rb");

    while(!feof(calificacion))
    {
        fread(&calificacionLeido,sizeof (Promedio),1,calificacion);
        printf ("%s-%f",calificacionLeido.alumnos,calificacionLeido.calificaciones);
    }
    

    fclose(calificacion);

    
    

    calificacion=fopen("ejercicio.dat","rb+");
    

    fseek(calificacion,sizeof(Promedio),SEEK_SET);//para leer solo un nombre 
    fread(&calificacionLeido, sizeof(Promedio),1,calificacion);
    fwrite(&calificacion,sizeof(Promedio),1,calificacion);
    fclose(calificacion);

    promed[i]=promedio.calificaciones;

    for (i=0; i<5; i++)
    {
        prom=(prom+promedio.calificaciones)/5;
        printf("%f", prom);
    }


    

     fclose(calificacion);
    fflush(stdin);
    getchar();
  return 0;
}