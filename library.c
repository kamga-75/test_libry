#include <stdio.h>
#include "library.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}

//definition d'une fonction affichage de text .exercise 1
//void afficherBonjour(msg) {
 //printf(msg);
//}


//definition d'une fonction inverse. exercixe 2
int inverser( int n){
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
	}
	
	// definition de la fonction produit. exercice 3
float produit(float a, float b){
	float p = a*b;
	return  p;
}

// definition de la fonction parite exercice 4
char* parite_entier(int n){
	//return ((n % 2 == 0) ? "paire":"impaire");
}

// definition de la fonction de comparaison. exercice 5
/*void compareNmbre (int a, int b){
	printf("%d %s %d \n\n", a, (a==b ? "=" : (a<b ? "<":">")+),b);
}*/

//definition de la fonction  d'ordre exrecice 6
void rangeNombre(int a, int b, int c){
	int tab[3];
	if (a<b && b<c){
		tab[0]=a; tab[1]=b; tab[2]=c;
	}else if (a<c && c<b){
		tab[0]=a; tab[1]=c; tab[2]=b;
	}else if (b<a && a<c){
		tab[0]=b; tab[1]=a; tab[2]=c;
	}else if (b<c && c<a){
		tab[0]=b; tab[1]=c; tab[2]=a;
	}else if (c<a && a<b){
		tab[0]=c; tab[1]=a; tab[2]=b;
	}else if (c<b && b<a){
		tab[0]=c; tab[1]=b; tab[2]=a;
	}
	printf("l'arrangement croissant nous donnes : %d < %d < %d\n\n", tab[0],tab[1],tab[2]);	
}

//definition de la fonction de permutation exercice 16
void permuter(char* *a, char* *b){
	char* temp;
	 temp = *a;
	 *a = *b;
	 *b = temp;
}

//definition de la fonction somme exercice 17
int somme(int a ,int b){
	return a+b;
}



