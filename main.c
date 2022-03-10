/// Librerías
#include "Otro.h"


/// Declaraciónd e variables
Uint VariableMainC = 2022;
Uint ValSwitch=1;
AleatorioStr Aleatorio;
Doble VarDouble=87.9;
Doble VarDoubleAux=0;
Uint ValorTern=0;
StructCasteo Casteo;
VarFuncStr VarFunct;
DesplazamientoStr Desplazamiento;
MacroStruct Macro;
PuntoStr Punto[3];

DatosUnionStruct DatosUnion;


char *CadenaCaracteres = "Hola como estas?";


/// Constantes
const Uint ValorMaxAleatorio = 100;



int main(void){

    goto EtiquetaGoto;
    goto EtiquetaCateo;
    goto Funcion1;
    goto EstructurasStr;
    goto EtiquetaDesplazamiento;

    printf("\nValor de la variable de Otro.c: %d", VariableOtroC);
    FuncStaticVar();
    /// Static
    printf("\nContador usando static en una variable\n");
    Contador();
    Contador();
    Contador();
    switch(ValSwitch/**switch - case*/){
        case 0:case 1:
            printf("\nCasos 0 y 1");
            break;
        case 2:
            printf("\nCaso 2");
            break;}

    printf("\nValores aleatorios\n");
    srand(time(NULL));
    for(Aleatorio.i=0;Aleatorio.i<MaxNumAleatorios;Aleatorio.i++)
            Aleatorio.Numero[Aleatorio.i] = rand() % ValorMaxAleatorio + 1;

    for(Aleatorio.i=0;Aleatorio.i<MaxNumAleatorios;Aleatorio.i++)
        printf("\nValor %d : %d", Aleatorio.i, Aleatorio.Numero[Aleatorio.i]);
    printf("\n");
    printf("\n");

    VarDoubleAux=VarDouble;
    VarDoubleAux+=200.5;
    printf("\nValor de la variable doble: %0.2f, Valor sumado con 200.5: %0.2f", VarDouble, VarDoubleAux);

EtiquetaDesplazamiento:
    printf("\n\nDesplazamiento\n");

    Desplazamiento.ValorEntero = 1298755172;

    Desplazamiento.Valor4 = Desplazamiento.ValorEntero & 255;
    Desplazamiento.Valor3 = (Desplazamiento.ValorEntero & 65280) >> 8;
    Desplazamiento.Valor2 = (Desplazamiento.ValorEntero & 16711680) >> 16;
    Desplazamiento.Valor1 = (Desplazamiento.ValorEntero & 4278190080) >> 24;

    printf("\nValor de entrada: %d", Desplazamiento.ValorEntero);
    printf("\nValor de caracter 1: %c", Desplazamiento.Valor1);
    printf("\nValor de caracter 2: %c", Desplazamiento.Valor2);
    printf("\nValor de caracter 3: %c", Desplazamiento.Valor3);
    printf("\nValor de caracter 4: %c", Desplazamiento.Valor4);

    /// CONSTANTE
    printf("\nConstante\n");

    const Uint ConstA = 97;
    const Uint ConstB = 45;
    const Uint *const ptrConst = &ConstA;

    ///ptrConst = &ConstB;
    printf("\nValor del puntero constante: %d\n\n", *ptrConst);

    printf("\n\nStructs\n");


///    for(ValSwitch=0;ValSwitch<1;ValSwitch++){

EstructurasStr:

    Punto[0].Nombre[0]='C';
    Punto[0].Nombre[1]='e';
    Punto[0].Nombre[2]='s';
    Punto[0].Nombre[3]='a';
    Punto[0].Nombre[4]='r';
    Punto[0].Modulo=97;
    Punto[0].Coordenadas.x=1;
    Punto[0].Coordenadas.y=2;

    Punto[1].Nombre[0]='D';
    Punto[1].Nombre[1]='a';
    Punto[1].Nombre[2]='n';
    Punto[1].Nombre[3]='y';
    Punto[1].Modulo=49;
    Punto[1].Coordenadas.x=321;
    Punto[1].Coordenadas.y=65;

    ValSwitch=0;

    for(ValSwitch=0;ValSwitch<2;ValSwitch++){
        printf("\nNombre: %s", Punto[ValSwitch].Nombre);
        printf("\nValor del modulo: %d", Punto[ValSwitch].Modulo);
        printf("\nValor de la coordenada x es: %d", Punto[ValSwitch].Coordenadas.x);
        printf("\nValor de la coordenada y es: %d", Punto[ValSwitch].Coordenadas.y);
        printf("\n\n");}


    printf("\nOperador ternario\n");

    ValorTern = (Punto[1].Coordenadas.y >= Punto[0].Coordenadas.y) ? 845 : 9;
    printf("\nValor de la cariable: %d", ValorTern);

Funcion1:
    printf("\n\nEscribe una oracion: ");
    scanf("%[^\n]s", VarFunct.Txt);

    ModificarText(&VarFunct.Txt[0], &VarFunct.CantNumeros, &VarFunct.CantMayusculas, &VarFunct.CantMinusculas, &VarFunct.CantCaracteresOtros);
    printf("\nCantidad de numeros en el texto: %d", VarFunct.CantNumeros);
    printf("\nCantidad de minusculas en el texto: %d", VarFunct.CantMinusculas);
    printf("\nCantidad de mayusculas en el texto: %d", VarFunct.CantMayusculas);
    printf("\nCantidad de otros caracteres en el texto: %d", VarFunct.CantCaracteresOtros);

EtiquetaCateo:
    printf("\n\nCasteo\n");
    Casteo.a = 8;
    Casteo.b = 9;
    Casteo.c = Casteo.a / (Doble)Casteo.b;
    printf("\nValor de la variable c: %0.2f", Casteo.c);

    ///**************************************
    printf("\n\nPuntero como arreglo de caracteres\n");
    printf("\n%c", *(CadenaCaracteres+1));


    printf("\n\n#define como Macro\n");
    Macro.N1=2;
    Macro.N2=18;
    Macro.N3=200;
    printf("\nSumar 3 numeros: %d + %d + %d = %d", Macro.N1, Macro.N2, Macro.N3, Suma3Numeros(Macro.N1, Macro.N2, Macro.N3));

    printf("\n\nTamanio de un arreglo");
    for(Macro.i=0;Macro.i<20;Macro.i++)
        Macro.Arreglo[Macro.i]=Macro.i;

    printf("\nTamano del arreglo: %d", sizeof(Macro.Arreglo)/sizeof(Uint));


    printf("\nPuntero vacio\n");

    Uint VarEntero = 97;
    Doble VarDoble = 37.5;
    void *PtrVoid;

    PtrVoid = &VarEntero;
    printf("\nValor de la variable Entera: %d", *(Uint*)PtrVoid);
    PtrVoid = &VarDoble;
    printf("\nValor de la variable Doble: %0.2f", *(Doble*)PtrVoid);



    printf("\nBreak");
    Uint Cont=0;

    while(Cont<10){
        printf("\nContador en while: %d", Cont);
        Cont++;

        if(Cont>=5)
            break;}
    printf("\n\n");

    for(Cont=0;Cont<10;Cont++){

        printf("\nContador en for: %d", Cont);
        if(Cont==4)
            break;}

    printf("\n\n");
    Cont=0;
    while(Cont<10){

        Cont++;
        if(Cont==5)
            continue;
        else
            printf("\nContinue - Contador: %d", Cont);}


    Funcion1();

    Uint Sal = Funcion2();
    printf("\nValor de salida de la funcion 2: %d", Sal);

    printf("\n\nUniones");
    DatosUnion.Nombre[0] = 'M';
    DatosUnion.Nombre[1] = 'i';
    DatosUnion.Nombre[2] = 'n';
    DatosUnion.Nombre[3] = 'd';

    printf("\nTexto: %s", DatosUnion.Nombre);
    printf("\nInicial: %c", DatosUnion.Inicial);
    printf("\nEntero: %d", DatosUnion.ValorEntero);


EtiquetaGoto:

    ///*Punteros dobles
    printf("\nPunteros dobles");

    Uint Var1=5;
    Uint Var2=8;
    Uint TamArreglo=10;
    Uint *p;
    Uint **pp;

    /**
    p = &Var1;
    pp = &p;
    *pp = &Var2;
    */

    printf("\n\n");
    printf("\nValor de la variable: %d", *p);

    printf("\n\nArreglo dinamico");

    /**
    p = malloc(TamArreglo*(sizeof(Uint)));
    for(Var1=0;Var1<TamArreglo;Var1++)
        p[Var1] = Var1+1;

    for(Var1=0;Var1<TamArreglo;Var1++)
        printf("\nValor guardado: %d", p[Var1]);
    */

    printf("\n\n");
    AsignarMemoria(&p, TamArreglo);

    for(Var1=0;Var1<TamArreglo;Var1++)
        p[Var1]=Var1;

    for(Var1=0;Var1<TamArreglo;Var1++)
        printf("\nValor de la variable: %d", p[Var1]);

    free(p);




}   /// Main
