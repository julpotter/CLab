//lab1D.c
#include <stdio.h>

void click(int *a, int *b){
	printf("Reached the click\n");

	if(*a>*b){
		printf("Entered ap>bp if");
		*a = *a - *b;
		printf("Subtracted a - b\n");
		printf("a = %d\n", *a);
	}
	else if(*b>*a){
		printf("Entered bp>ap if\n");
		*b = *b - *a;
		printf("Subtracted b - a\n");
		printf("a = %d\n", *b);
	}
}

int main(void){
	int a = 8192371;
	int b = 193274;
	int count = 0;

	while(a != b){
		printf("a = %d\n", a);
		printf("b = %d\n", b);
		click(&a, &b);
		count++;
		printf("Passed the click\n");
	}
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("Final count: %d\n", count);
	//It takes 78 clicks.

}
