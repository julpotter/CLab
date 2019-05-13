#include <math.h>
#include <stdio.h>


int cubeSumCheck(int* w, int* x, int* y, int* z){
	// compare a^3 + b^3 to c^3 + d^3
	// Does a^3 + b^3 = c^3 + d^3 ? Where a!=c or a!=d or b!=c
	int aval = *w;
	int bval = *x;
	int cval = *y;
	int dval = *z;

	if(aval != cval || aval != dval || bval != cval || bval != dval){
		if(aval*aval*aval + bval*bval*bval == cval*cval*cval + dval*dval*dval){
			int smallestNumber = aval*aval*aval + bval*bval*bval;
			printf("Smallest is %d\n", smallestNumber);

		}
	}
}

void returnToBase(int* valA, int* valB, int* valC, int* valD, int baseFunc){
	*valA = baseFunc;
	*valB = baseFunc;
	*valC = baseFunc;
	*valD = baseFunc;
}

//Loops through every possibility of a, b, c, d, performing cubeSumCheck on the way
int cubeIncrementSolve(int* a, int* b, int* c, int* d, int* z){
	//printf("Entered cubeIncrementSolve\n");
	int base = 1;
	while(base <= *z){
		while(*a<=*z){
			*a++;
			//printf("Value of a is %d\n", *a);
			cubeSumCheck(a, b, c, d);
		}
		returnToBase(a, b, c, d, base);
		while(*b<=*z){
			*b++;
			cubeSumCheck(a,b,c,d);
		}
		returnToBase(a, b, c, d, base);
		while(*c<=*z){
			*c++;
			cubeSumCheck(a,b,c,d);
		}
		returnToBase(a, b, c, d, base);
		while(*d<=*z){
			*d++;
			cubeSumCheck(a, b, c, d);
		}
		//printf("Value of base is %d\n", base);
		base++;
		//printf("Value of base is %d\n", base);
	}
}
				
int main(void){

	int amain = 1;
	int bmain = 1;
	int cmain = 1;
	int dmain = 1;
	int zmain = 1;

// compare a^3 + b^3 to c^3 + d^3
// Does a^3 + b^3 = c^3 + d^3 ? Where a!=c or a!=d or b!=c

  while(amain<=zmain && bmain<=zmain && cmain <= zmain && dmain <= zmain){
	//for(int i = 0; i<=2; i++){
		
		cubeIncrementSolve(&amain,&bmain,&cmain,&dmain,&zmain);
		//printf("The smallest number that can be written as the sum of two cubes in two different ways is %d\n", x);
		zmain++;
		//printf("%d\n", zmain);
	}

	return 0;
}
