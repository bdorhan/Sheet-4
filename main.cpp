
#include <iostream>
#include "Polynomial.h"

int main(int argc, char** argv) {
	int* poly_a = new int[4];
	poly_a[0]=5;
	poly_a[1]=4;
	poly_a[2]=6;
	poly_a[3]=3;
	int* poly_b = new int[3];
	poly_b[0]=100;
	poly_b[1]=500;
	poly_b[2]=2;
	
	polynomial a(4,poly_a);
	polynomial b(3,poly_b);

	a.display();
	
	
}
