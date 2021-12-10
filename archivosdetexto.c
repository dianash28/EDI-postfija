#include <stdio.h>
 #define R 10
 #define C 5
 struct  struct_calificacion
 {
    float calificacion;
    char alumno[20];
    float promedio;

 };
 typedef struct struct_calificacion  calificacion;

 
 
int main()
{
    calificacion calificacion;

    int cerrado;
    int i;
    float sumapromedio=0;
   int alumnos;
    FILE *calificaciones;
    calificaciones=fopen("ejercicio.txt", "r");
    calificaciones=fopen("ejercicio.txt", "w");//los crea

    

    for (i=0; i<2; i++)
    {
        printf("dame el nombre del alumno");
        scanf("%s",calificacion.alumno);
        alumnos++;

        printf("dame las calificaciones");
        scanf("%d",&calificacion.calificacion );

        sumapromedio=sumapromedio+calificacion.calificacion;

    
        

    }
        calificacion.promedio=alumnos/sumapromedio;
        fprintf(calificaciones, "%s alumno %d  calificacion \n", calificacion.alumno, calificacion.calificacion);
        fprintf(calificaciones,"%f promedio", calificacion.promedio);

    cerrado=fclose(calificaciones);

    

    cerrado=fclose(calificaciones);

    if (cerrado==EOF)
    {
        printf("el archivo no cerro con exito");
    }



    
    fflush(stdin);
    getchar();
    return 0;
}
/*void imprimir()
 {
    int i;
    printf("nombre calificacion \n");
    for (i=0; i<10 ; i++ )
    {
        printf("%d\t",calificacion.calificacion[i] );
        printf("%s\t",calificacion.alumnos);
        
    }
 }*/

/*void ingresarcalificaciones(calificacion *c)
{
    for (i=0; i<5; i++)
    {
        printf("dame el nombre del alumno");
        scanf("%s",calificacion.alumno);

        printf("dame las calificaciones");
        scanf("%d",&calificacion.calificacion  );
    
        fprintf(archivo, "%s %d \n", calificacion.alumno, calificacion.calificacion);

    }
}*/