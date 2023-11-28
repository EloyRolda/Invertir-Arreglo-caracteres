#include <stdio.h>
#include <stdlib.h>

int main()
{
    invertirArreglo();
    return 0;
}


//  ------------------------------------------------
//                  INVERTIR ARREGLO
//  ------------------------------------------------

void invertirArreglo()
{
    char palabra[50] = {'\0'};          //  inicializacion del arreglo (string)
    char * palabraInvertida = NULL;    //  Creacion de arreglo resultante

    printf("* Ingrese Palabra a invertir: \n>: ");
    fflush(stdin);
    gets(palabra);

    int largoPalabra = strlen(palabra); //Obtenemos el largo de la palabra
    palabraInvertida = malloc(sizeof(char) * largoPalabra); //Reserva memoria igual a la palabra allegada
    palabraInvertida[largoPalabra] = '\0';          //Inicializamos en nulo/vacio el ultimo elemento

    for(int i = 0; i < largoPalabra; i++)
    {
        if(palabraInvertida != '\0')
        {
            palabraInvertida[i] = palabra[(largoPalabra-1)-i];
        }
        else
        {
            break;
        }
    }
    //Impresion Por Pantalla
    printf("\n------------------------------------------------------\n");
    printf("Palabra:                %s\n", palabra);
    printf("Palabra Invertida:      %s\n", palabraInvertida);
    printf("------------------------------------------------------\n");
    system("pause");
}


