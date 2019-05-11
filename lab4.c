/*
/*
 * Processes are numbered 0, 1, 2, 3, ...
 * Resources are lettered A, B, C, ...
 */

#include<stdio.h>

#define GET     1
#define RELEASE 2

typedef struct action{
  int process;
  char resource;
  int act;			/* GET or RELEASE */
} action;

// forward declarations
void validateRecords(action *actions);
int lookForDeadlock(action *actions);


int main(int argc, char *argv[]){
  char *infilename = argv[1];

  // Open the file and read it.
  FILE *infile = fopen(infilename, "r");
  action a[1000];		/* More than enough */

  int numRecords = 0;
  while(fscanf(infile, "%d %c %d", 
	       &a[numRecords].process, 
	       &a[numRecords].resource, &a[numRecords].act) != EOF){
    printf("Process %d %s resource %c\n", 
	   a[numRecords].process, 
	   (a[numRecords].act == 1) ? "got" : "released",
	   a[numRecords].resource);
    
    numRecords++;
  }
  printf("Read %d records\n", numRecords);
  
  validateRecords(a);
  int hasCycle = lookForCycle(a);
  if(hasCycle)
    printf("A deadlock occurred on the %dth step\n", hasCycle);
  else
    printf("No deadlock!\n");

  return 0;
}

// Processes cannot release if they didn't already get
void validateRecords(action *actions){

}

// Look for cycles in the RAD
int lookForDeadlock(action *actions){

}

