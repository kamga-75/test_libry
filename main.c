#include <stdio.h>
#include <stdlib.h>
#include "libry.c"
int main( void ) {
 int result = power( 5, 2 );
 printf( "2³ == %d\n", result );
 result = fact( 8 );
 printf( "6! == %d\n", result );
 return EXIT_SUCCESS;
}
