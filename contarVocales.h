//Quantify Vowels
//Quatificar vogais
int contarVocales(char palabra[])
{
    char pal[15];
    strcpy(pal,palabra);

    int i=0;
    int contador=0;
    int tam=strlen(pal);

    for(i=0; i<tam; i++)//nunca llega a leer el último caracter//This never gets to read the last character//Isso nunca consegue ler o último caractere
    {
        if(pal[i]=='a' || pal[i]=='e' || pal[i]=='i' || pal[i]=='o' || pal[i]=='u')
        {
            contador++;
        }
    }
    printf("La palabra %s tiene %d vocales \n", pal,contador);//The word has X vowels //A palabra tem X vogais
    return contador;

}
