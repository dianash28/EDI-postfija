#include <stdio.h>
#include <string.h>
typedef struct
{
   
    int denominador1;
    int numerador1;
    int denominador2;
    int numerador2;
    int denominador;
    int sumanumerador;
    int restanumerador;
    int num1;
    int num2;
    int nume1;
    int nume2;
}Fracciones;

void pedirfraccionesalusuario(Fracciones *fraccionn);
void calculardenominador(Fracciones *fraccionn, Fracciones fracciones);
void calcularnumerador(Fracciones *fraccionn, Fracciones fracciones);
void imprimirsuma(Fracciones fraccionn);
void restadefracciones(Fracciones *fraccionn, Fracciones fracciones);
void imprimirResta(Fracciones fracciones);

int main()
{
    FILE *FraccionesSuma;

    Fracciones fraccionn;
    int cerrado;
    FraccionesSuma=fopen("SumadeFracciones.txt", "r"); 
    FraccionesSuma=fopen("SumadeFracciones.txt", "w"); 
     
    pedirfraccionesalusuario(&fraccionn);
    fprintf(FraccionesSuma," %d",fraccionn.numerador1);
    fprintf(FraccionesSuma,"%d",fraccionn.denominador1);
    fprintf(FraccionesSuma,"%d",fraccionn.numerador2);
    fprintf(FraccionesSuma,"%d\n",fraccionn.denominador2);
    

    if(fraccionn.denominador1>0)
    {
        calculardenominador(&fraccionn, fraccionn);
        calcularnumerador(&fraccionn,  fraccionn);
        imprimirsuma(fraccionn);
        fprintf(FraccionesSuma,"la suma de la fraccion es:  %d/%d",fraccionn.sumanumerador  , fraccionn.denominador);

    }
    else 
    {
        calculardenominador(&fraccionn, fraccionn);
        restadefracciones(&fraccionn, fraccionn);
        imprimirResta(fraccionn);
        fscanf(FraccionesSuma,"%d /   %d  ",fraccionn.restanumerador , fraccionn.denominador);

    }
    

    //FraccionesSuma=fopen("SumadeFracciones.txt", "r");

    cerrado=fclose(FraccionesSuma);

    if (cerrado==EOF)
    {
        printf("el archivo no cerro con exito");
    }

    fflush(stdin);
    getchar();

return 0;

}

void imprimirResta(Fracciones fracciones)
{
    printf("%d / %d", fracciones.restanumerador, fracciones.denominador);

}

void restadefracciones(Fracciones *fraccionn, Fracciones fracciones)
{
    fraccionn->nume1=fracciones.numerador1*fracciones.denominador2;
    fraccionn->nume2=fracciones.numerador2*fracciones.denominador1;
    fraccionn->restanumerador=fraccionn->nume1-fraccionn->nume2;

}

void imprimirsuma(Fracciones fraccionn)
{
    printf("%d / %d", fraccionn.sumanumerador, fraccionn.denominador);

}


void calcularnumerador(Fracciones *fraccionn, Fracciones fracciones)
{
    
    fraccionn->num1=fracciones.numerador1 *fracciones.denominador2;
    fraccionn->num2=fracciones.numerador2  *fracciones.denominador1;
    fraccionn->sumanumerador=fraccionn->num1+fraccionn->num2;
}

void calculardenominador(Fracciones *fraccionn, Fracciones fracciones)
{
    fraccionn->denominador=fracciones.denominador1*fracciones.denominador2;
}

void pedirfraccionesalusuario(Fracciones *fraccionn)
{
   
    printf("dame el numerador 1:");
    scanf("%d", &fraccionn->numerador1);
    printf("dame el denominador 1:");
    scanf("%d", &fraccionn->denominador1);
    
    printf("dame el numerador 2:");
    scanf("%d", &fraccionn->numerador2);
    
    printf("dame el denominador 2:");
    scanf("%d", &fraccionn->denominador2);

}