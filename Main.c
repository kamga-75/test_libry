#include <stdio.h>
#include <stdlib.h>
#include "library.h"
int main() {
	  //exercise 1
//afficherBonjour("Bonjour");

//exercice 2
int n;
printf("Enter a number to convert: ");
scanf("%d",&n);
int reversed = inverser(n);
	 printf("%d\n",reversed);
	
//exercice 3
float b1, p;
float a1 ;
	printf("Entree deux nombres "); 
	scanf("%f",&a1);
	printf("Entree deux nombres ");
	scanf("%f",&b1);
	printf("%f %f", a1, b1);
	printf("Le produit de %f et de %f est P = %.3f \n\n", a1,b1,produit(a1, b1));
	
	
//exercice 4
int nombre;
printf("entree un nombre entier;");
scanf("%d", &nombre);
//char* parite = ;
printf("Le nombre %d est %s %d\n\n", nombre, n % 2 == 0 ? "paire":"impaire", n%2);


//exercise 5
/*int nbre1,nbre2 ;
print("\nExercise\n(comparer deux valeurs entiere)\n");
printf("Entrer un nombre : nombre 1 = ");
scanf("%d",&nbre1);
printf("Entree um  nombre : nombre 2 =");
scanf("%d",&nbre2);
compareNombre(nbre1 ,nmbre2)*/

// exercice 6

int nmbre1; int nmbre2; int nmbre3;
printf("Entrer un nombre : nombre 1 =");
scanf("%d", &nmbre1);
printf("Entrer un nombre : nombre 2 =");
scanf("%d", &nmbre2);
printf("Entrer un nombre : nombre 3 =");
scanf("%d", &nmbre3);
rangeNombre(nmbre1, nmbre2, nmbre3);


//exercice 16
char* val1;
char* val2;
printf("entree une chain de caracter\n");
scanf("%s", &val1);
printf("entree une deuxieme chain de caracter\n");
scanf("%s", &val2);
printf("avant permutation: val1= %C, val2 = %c\n", val1, val2);
permuter(&val1, &val2);
printf("apres permutation: val1= %C, val2 = %c\n", val1, val2);

// exercice 17
int x;
int y;
printf("Entrez un nombre\n");
scanf("%d",&x);
printf("Entrez un autre nombre\n");
scanf("%d",&y);
int resultsomme = somme (x,y);
printf("la somme est %d\n:",resultsomme);






 int result = power( 2, 3);
 printf( "2³ == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 
 
 

 
 	return EXIT_SUCCESS;
}
