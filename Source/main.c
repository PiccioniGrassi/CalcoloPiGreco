#include <stdio.h>
#include <stdlib.h>

// Variabili globali
int i = 0; //lunghezza valore decimale
int c = 1;
int d = 6; //numeri dopo la virgola
double denominatore = 3;
double numeratore=-1;
char risposta;
long double PI=1L;

//Funzioni
void InizializzazioneProgramma();
void InputNumeroDivisioni();
void InputNumeriDopoVirgola();
void CalcoloPigreco();
void OutputPigreco();

int main()
{
    InizializzazioneProgramma();
    CalcoloPigreco();
    printf("\n\n\n Calcolo Terminato");
    return 0;
}

void InizializzazioneProgramma()
{
    InputNumeroDivisioni();
    InputNumeriDopoVirgola();
}

void InputNumeroDivisioni()
{
    do
    {
        printf("Inserire il numero di frazioni con cui calcolare il pi greco: ");
        scanf("%d", &i);
        printf("\nInserito %d, confermare?(s per si n per no): ", i);
        scanf(" %c", &risposta);
        printf("\n");
    }while(risposta != 's');
}
void InputNumeriDopoVirgola()
{
    printf("Inserire il numero di cifre decimali da visualizzare (Il numero massimo visualizzabile varia da elaboratore ad elaboratore)\n");
    scanf("%d",&d);
}

void CalcoloPigreco()//Forma semplificata della serie di Gregory-Leibniz
{                    //https://it.wikipedia.org/wiki/Formula_di_Leibniz_per_pi
    while(c<=i)
    {
        PI = PI + (numeratore/denominatore);
        OutputPigreco();
        c++;
        denominatore+=2;
        numeratore=-numeratore;
    }
}

void OutputPigreco()
{
    __mingw_printf("\n Valore attuale del Pi Greco con %d frazioni :      %.*Lf", c,d, 4*PI);
}
