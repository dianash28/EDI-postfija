#include <stdio.h>
 #define R 10
 #define C 5
 struct  struct_calificacion
 {
    float calificacion;
    char alumno[20];
 };
 typedef struct struct_calificacion  calificacion;

 
 
int main()
{
    calificacion calificacion;

    int cerrado;
    int i;
    float promedio=0;
   
    FILE *calificaciones;
    calificaciones=fopen("ejercicio.txt", "r");
    calificaciones=fopen("ejercicio.txt", "w");//los crea

    

    for (i=0; i<2; i++)
    {
        printf("dame el nombre del alumno");
        scanf("%s",calificacion.alumno);

        printf("dame las calificaciones");
        scanf("%d",&calificacion.calificacion );

        promedio=promedio+calificacion.calificacion;
    
        fprintf(calificaciones, "%s alumno %d  calificacion \n", calificacion.alumno, calificacion.calificacion);
        fprintf(calificaciones,"%f promedio", promedio);

    }
    //cerrado=fclose(calificaciones);

    //for (i=0; i<2; i++)
    //{
      //  fscanf(calificaciones, "%s", calificacion.alumno);
        //fscanf(calificaciones, "%d", &calificacion.calificacion);
    //}

    //promedio=promedio+calificacion.calificacion[i];
    //printf("el promedio final del grupo es:");
    //fscanf(calificaciones,"%f", promedio);
    cerrado=fclose(calificaciones);//es para cerrar

    if (cerrado==EOF)//utilizar para cuando no se cierra correctamente
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