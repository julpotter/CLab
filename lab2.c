#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Modify code so that it:
1. Stores the name/age records into an array of structures as it reads them
2. Sorts the array of structures according to age, by 
3. Modifying the reccmp function so that it compares records by age
*/

// forward declaration
int reccmp (const void *r1, const void *r2);

typedef struct people{
	int personAge;
	char personName[20];
} people;

int main(int argc, char *argv[]){
  char *infilename = argv[1];

  // Open the file and read it.
  FILE *infile = fopen(infilename, "r");

	int numRecords = 0;
	char name[20];
	int age;


	people peopleList[2000];

  while(fscanf(infile, "%s %d", name, &age) != EOF){
    //printf("%s is %d years old\n", name, age);
		peopleList[numRecords].personAge = age;
		strcpy(peopleList[numRecords].personName, name);

    numRecords++;
  }
  printf("There were %d names\n", numRecords);

  qsort(peopleList, numRecords, sizeof(people), &reccmp);
	for(int i = 0; i < numRecords; i++){
		printf("%s is %d years old\n", peopleList[i].personName, peopleList[i].personAge);
	}
  return 0;
}


int reccmp (const void *person1, const void *person2){
  //printf("comparing %d to %d\n",  *r1, *r2);
  return ((people*)person1)->personAge - ((people*)person2)->personAge;

}

