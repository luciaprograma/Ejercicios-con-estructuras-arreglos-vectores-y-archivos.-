#include <stdio.h>
#include <stdlib.h>
//LIBRERÍAS//LIBRERY//BIBLIOTECA
#include "biblioteca.h"
#include "contarVocales.h"
//FUNCIONES//FUNCTIONS//FUNÇÕES
void leerArchivo(v_palabra v[], FILE *F, char *nombreArchivo);
void inicializarVectorNumero(v_palabra V[]);
void inicializarVectorLetra(v_palabra V[]);
int contarVocales(char palabra[]);
int checkPosicion(v_palabra v[], int indice);
void mostrarVector(v_palabra V[]);


int main()
{

    char nombreFichero;
    FILE *miArchivo;
    v_palabra mi_vector[10];



    //Inicializo vector
    printf("Inicializo Vector con numeros\n");//vetor inicializado com números/array initialized with numbers
    inicializarVectorNumero(mi_vector);
    system("pause");
    system("cls");
    printf("inicializo vecotr con letras\n");//array initialized with *//etor inicializado com *
    inicializarVectorLetra(mi_vector);
    system("pause");
    system("cls");

//Busco archivo por su nombre//Search for file by its name//procurar o arquivo pelo seu nome
 printf("Ingrese nombre del fichero\n");
    fflush(stdin);
    scanf("%s",&nombreFichero);

    //Funcion que lee archivo y cuenta consonantes//Função que lê arquivo e conta consoantes//Function that reads file and counts consonants
    leerArchivo( mi_vector,&miArchivo,&nombreFichero);

    mostrarVector(mi_vector);




}
