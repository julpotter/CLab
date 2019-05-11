#include <math.h>
#include <stdio.h>

/*
typedef struct abcd{
	int aTry;
	int bTry;
	int cTry;
	int dTry;
}
*/

//int cubeSumCheck(int a, int b, int c, int d);

int cubeSumCheck(int* a, int* b, int* c, int* d){
	// compare a^3 + b^3 to c^3 + d^3
	// Does a^3 + b^3 = c^3 + d^3 ? Where a!=c or a!=d or b!=c
	int aval = *a;
	int bval = *b;
	int cval = *c;
	int dval = *d;

	printf(".");
	if(a != c || a != d || b != c || b != d){
		if(aval*aval*aval + bval*bval*bval == cval*cval*cval + dval*dval*dval){
			int smallestNumber = aval*aval*aval + bval*bval*bval;
			printf("%d\n", smallestNumber);
			return smallestNumber;

		}
	}
}

void returnToBase(int* a, int* b, int* c, int* d, int* base){
	*a = *base;
	*b = *base;
	*c = *base;
	*d = *base;
}

//Loops through every possibility of a, b, c, d, performing cubeSumCheck on the way
int cubeIncrementSolve(int* a, int* b, int* c, int* d, int* z){
	int base = 1;
	while(base <= *z){
		while(*a<=*z){
			*a++;
			cubeSumCheck(&a, &b, &c, &d);
		}
		returnToBase(&a, &b, &c, &d, &base);
		while(b<=z){
			*b++;
			cubeSumCheck(&a,&b,&c,&d);
		}
		returnToBase(&a, &b, &c, &d, &base);
		while(*c<=*z){
			*c++;
			cubeSumCheck(&a,&b,&c,&d);
		}
		returnToBase(&a, &b, &c, &d, &base);
		while(*d<=*z){
			*d++;
			cubeSumCheck(&a, &b, &c, &d);
		}
		base++;
	}
}
				



int main(void){

	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;

	int z = 2;

// compare a^3 + b^3 to c^3 + d^3
// Does a^3 + b^3 = c^3 + d^3 ? Where a!=c or a!=d or b!=c
  //int* memo;
	//int z = 2;

  while(a<=z && b<=z && c <= z && d <= z){
		int x = cubeIncrementSolve(&a,&b,&c,&d,&z);
		//printf("The smallest number that can be written as the sum of two cubes in two different ways is %d\n", x);
		z++;
	}
/*
		while(a<=z){
			cubeSumCheck(a,b,c,d); //checks if the sum is a sum of different cubes
		}
*/

/*
    if(a != c || a != d || b != c || b != d){
			
			if(pow(a,3) + pow(b,3) == pow(c,3) + pow(d,3)){
				int smallestNumber = pow(a,3) + pow(b,3);
				printf("The smallest number that can be written as the sum of two cubes in two different ways is %d\n", smallestNumber);
			}else
				//ensure that a new combination is tried each time
				//memoize the combination
				

		
    }
	}
*/
	return 0;
}
