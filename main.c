#include <stdio.h>
#include <stdlib.h>

// Variabili globali
int i = 0; //lunghezza valore decimale
int c = 1;
double sotto = 3;
double numeratore=-1;
/*short*/ int risposta=0;
double PI=1;

//Funzioni

void InputLunghezzaDecimali();
void CalcoloPigreco();
void OutputPigreco();

int main()
{
    InputLunghezzaDecimali();
    CalcoloPigreco();
    printf("\n\n\n Calcolo Terminato");
    return 0;
}

void InputLunghezzaDecimali()
{
    do
    {
        printf("Inserire la precisione con cui calcolare il pi greco: ");
        scanf("%d", &i);
        printf("\n Inserito %d, confermare?(1 per si 2 per no): ", i);
        scanf("%d", &risposta);
    }while(risposta != 1);
}

void CalcoloPigreco()
{
    while(c<=i)
    {
        PI = PI + (numeratore/sotto);
        OutputPigreco();
        c++;
        sotto+=2;
        numeratore=-numeratore;
    }
}

void OutputPigreco()
{
    printf("\n Valore attuale del Pi Greco con una precisione di %d :      %.16f", c, 4*PI);
}
