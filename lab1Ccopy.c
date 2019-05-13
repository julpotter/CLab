#include <math.h>
#include <stdio.h>



int main(void){

	int amain = 1;
	int bmain = 1;
	int cmain = 1;
	int dmain = 1;

	int z = 1;

// compare a^3 + b^3 to c^3 + d^3
// Does a^3 + b^3 = c^3 + d^3 ? Where a!=c or a!=d or b!=c


while(1){

  while(amain<=z && bmain<=z && cmain <= z && dmain <= z){
		printf("z is %d\n", z);
		int base = 1;
		while(base <= z){
			while(amain<=z){
				amain++;
				if(amain != cmain || amain != dmain || bmain != cmain || bmain != dmain){
					if(amain*amain*amain + bmain*bmain*bmain == cmain*cmain*cmain + dmain*dmain*dmain){
						int smallestNumber = amain*amain*amain + bmain*bmain*bmain;
						printf("%d\n", smallestNumber);
						break;
					
			}
		}
	}
			amain = base;
			bmain = base;
			cmain = base;
			dmain = base;

			while(bmain<=z){
				bmain++;
				if(amain != cmain || amain != dmain || bmain != cmain || bmain != dmain){
					if(amain*amain*amain + bmain*bmain*bmain == cmain*cmain*cmain + dmain*dmain*dmain){
						int smallestNumber = amain*amain*amain + bmain*bmain*bmain;
						printf("%d\n", smallestNumber);
						break;
					
			}
		}
	}
			amain = base;
			bmain = base;
			cmain = base;
			dmain = base;

			while(cmain<=z){
				cmain++;
				if(amain != cmain || amain != dmain || bmain != cmain || bmain != dmain){
					if(amain*amain*amain + bmain*bmain*bmain == cmain*cmain*cmain + dmain*dmain*dmain){
						int smallestNumber = amain*amain*amain + bmain*bmain*bmain;
						printf("%d\n", smallestNumber);
						break;
					
			}
		}
	}

			amain = base;
			bmain = base;
			cmain = base;
			dmain = base;

			while(dmain<=z){
				dmain++;
				if(amain != cmain || amain != dmain || bmain != cmain || bmain != dmain){
					if(amain*amain*amain + bmain*bmain*bmain == cmain*cmain*cmain + dmain*dmain*dmain){
						int smallestNumber = amain*amain*amain + bmain*bmain*bmain;
						printf("%d\n", smallestNumber);
						break;
					
			}
		}
	}

			base++;

}

	z++;
	printf("z is %d\n", z);
}

	return 0;
}
}
