/// Librerías
#include "Otro.h"


/// Declaración de jvariables
Uint VariableOtroC = 1994;


/// Funciones
void FuncStaticVar(void){

    printf("\nSuma: %d", VariableMainC-VariableOtroC);}

void Contador(void){
    static Uint Con=0;
    Con++;
    printf("\nValor del contador: %d", Con);}

void ModificarText(Uchar const *Cadena, Uint *CantNum, Uint *CantMay, Uint *CantMin, Uint *CantOtros){
    Uint TamCadena=0, i=0;

    *CantMay=0;*CantMin=0;*CantNum=0;*CantOtros=0;

    while(Cadena[TamCadena]!=NULL)
        TamCadena++;

    for(i=0;i<TamCadena;i++){

        if(Cadena[i]>='a' && Cadena[i]<='z')
            *CantMin += 1;
        else if(Cadena[i]>='A' && Cadena[i]<='Z')
            *CantMay += 1;
        else if(Cadena[i]>='0' && Cadena[i]<='9')
            *CantNum += 1;
        else
            *CantOtros += 1;
    }
}





void Funcion1(void){

    printf("\n");
    printf("\nHola 1");
    printf("\nHola 2");
    return;
    printf("\nHola 3");
    printf("\nHola 4");
}



Uint Funcion2(void){

    printf("\n\n");
    printf("\nHola10");
    printf("\nHola20");
    return 80;
    printf("\nHola30");
    printf("\nHola40");
    return 40;}


void AsignarMemoria(Uint **ptr, Uint Tam){
    Uint i=0;

    *ptr = malloc(Tam*(sizeof(Uint)));
    ///for(i=0;i<Tam;i++)
    ///    *ptr[i]=i+10;

}




