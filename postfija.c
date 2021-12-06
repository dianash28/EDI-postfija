#include <stdio.h>

#include "pila.h"

#define MAX 100
struct struct_postfija
{
    char arregloInfija[MAX];
    char arregloPostfija[MAX];
    int tam;
};

typedef struct struct_postija arreglo;

int main()
{
    arreglo infija;
    arreglo postfija;
   
    int dato;
   /* infija.arregloInfija[0]=(;
    infija.arregloInfija[1]=6;
    infija.arregloInfija[2]=+;
    infija.arregloInfija[3]=4;
    infija.arregloInfija[4]=);
    infija.arregloInfija[5]=*;
    infija.arregloInfija[6]=3;*/



}

int infijaapostfija(arreglo a, arreglo arre)
{
    if (a==1 || a==1 || a==2 || a==3 ||a==4 || a ==5 || a ==6 || a ==7 || a ==8 || a== 9 || a==0)
    {
        a[MAX]=arre[MAX];
    }
    if (a=="/"||a=="+"|| a=="-"|| a =="*")
    {
        apilar(&p, a);
    }
}
int prioridad_infija(arreglo in  )
{
    int prioin;
    if(in=='^')
        prioin= 4;
    if( in=='*')
        prioin=2;
    if( in=='/')
         prioin= 2;
    if( in=='+')
        prioin= 1;
    if( in=='-')
        prioin=1;
    if(in=='(')
        prioin= 5;

  return prioin;
}