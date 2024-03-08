#include <stdio.h>

void menu ();
void moltiplica ();
void dividi ();
void ins_string();


int main () 

{
	char scelta = {'\0'};
	menu ();
	scanf (" %c", &scelta);

	switch (scelta)
	{
		case 'A':
		case 'a':
		moltiplica();
		break;
		case 'B':
		case 'b':
                dividi();
                break;
		case 'C':
		case 'c':
                ins_string();
                break;
    		default:
			printf("Scelta sbagliata, chiusura in corso,\nsi prega di riavviare scegliendo tra le lettere disponibili!\n");
	}

return 0;

}


void menu ()
{
	printf ("Benvenuto, sono un assitente digitale, posso aiutarti a sbrigare alcuni compiti\n");
	printf ("Come posso aiutarti?\n");
	printf ("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");

}


void moltiplica ()
{
	int  a,b = 0;
	printf ("Inserisci i due numeri da moltiplicare:");
	scanf ("%d", &a);
	scanf ("%d", &b);

	int prodotto = a * b;

	printf ("Il prodotto tra %d e %d e': %d\n", a,b,prodotto);
}


void dividi ()
{
        int  a,b = 0;					
        printf ("Inserisci il numeratore:");
        scanf ("%d", &a);				
	printf ("Inserisci il denominatore:");
        scanf ("%d", &b);	
	
	if(b==0){
		printf("Non si può dividere per 0!\n");
}
	else{
		float divisione = (float)a/(float)b; 
		printf ("La divisione tra %d e %d e' : %.2f\n", a, b, divisione);
  
    }

}




void ins_string () 
{
	char stringa[100];
        printf ("Inserisci la stringa: ");
        scanf (" %99[^\n]s", stringa);
	printf("Hai inserito: %s\n", stringa);
}
