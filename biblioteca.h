int contarVocales(char palabra[]);//Incluir este fichero aquí y en el main/Incluir este arquivo aqui e no main/Include this file here and in main

//Crear estructura en el mismo lugar en donde se implementan las funciones.
///Create structure in the same place where the functions are implemented.
//Criar estrutura no mesmo local onde as funções são implementadas.
typedef struct vec
{
    int cantVoc;
    char palCon[6][15];

} v_palabra;

//Inicializamos vector
//We initialize vector
// Inicializamos o vetor
void inicializarVectorNumero(v_palabra V[])
{
    int i;
        for(i=0; i<10; i++)
    {
        V[i].cantVoc=i;

    }
};
//Inicializamos vector con *
//We initialize vector with *
// Inicializamos o vetor con *
void inicializarVectorLetra(v_palabra V[])
{
    int i, j;
    for(i=0; i<10; i++)
    {

        for(j=0; j<6; j++)
        {
            strcpy(V[i].palCon[j], "*");
        }
    }
};

void leerArchivo(v_palabra v[], FILE *F, char *nombreArchivo)
{
    char palabra[15]="";
    int cantidad=0, posicion;

    F=fopen(nombreArchivo,"r");
    if(F!=NULL)
    {
        while(!feof(F))
        {

            // 1)Leer archivo
            // Read the FILE
            //Ler o ARQUIVO
            fgets(palabra,15,F);

            // 2) Buscar vocales
            //Search vowels
            // Buscar vogais
            cantidad= contarVocales(palabra);
            // 3)Hallar posicion libre
            // Find free space/position in string vector
            // Encontra espaço/posição livre no vetor de string
            posicion=checkPosicion(v,cantidad);
            // 4) Cargar vector
            //Load Vector
            // Carregar vetor
            strcpy(v[cantidad].palCon[posicion],palabra);
        }

        fclose(F);
    }
    else printf("Error al abrir archivo");
};


//Función que busca posición libre en vector de strings
////Função que busca posição livre em vetor de strings
///Function that searches for free position in array of strings
int checkPosicion(v_palabra v[], int indice)
{
    int i;

    for(i=0; i<6; i++)
    {
        if(strcmp(v[indice].palCon[i],"*")==0)

          return i;

    }
};
// Print Structure Array
// Mostrar por consola el vector de estructura
//// Imprime Array da Estrutura
void mostrarVector(v_palabra V[])
{
    int i, j;
    for(i=0; i<10; i++)
    {
        if(strcmp(V[i].palCon[0],"*")==0) printf("\n Vector %d vacio\n ", i);//Vetor vazio //Empty structure

        else{
            printf("Vector de %d vocales tiene las siguientes palabras\n ", i);//O vetor de X vogais tem as seguintes palavras//Vector of X vocals have the following words
            for(j=0;j<6;j++)
            {
                if(strcmp(V[i].palCon[j],"*")!=0) printf(" %s ", V[i].palCon[j]);
            }
        }
        }
    };

