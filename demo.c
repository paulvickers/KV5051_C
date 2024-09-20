#include <stdio.h>
#include <math.h>

float bookPrice = 9.99;
int intBookPrice;

int main () {
	intBookPrice = bookPrice * 100 ;

	printf ("Hello, World!\n");
	printf ("Price of book is %2d.%2d\n", intBookPrice / 100, intBookPrice % 100);

	bookPrice = 15.99;

	intBookPrice = bookPrice * 100 ;

	printf ("Price of book is %2d.%2d\n", intBookPrice / 100, intBookPrice % 100);


	return 0;
}

