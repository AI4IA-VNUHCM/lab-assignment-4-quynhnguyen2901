/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
   for (int i=0;i<n;i++){
	   for(int j=0;j<i;j++){
		   if(i==0 || i==n){
			   printf("1");
		   }
		   if (i==1){
			   printf("%d",&n);
		   }
		   return Ex1(n-1,n-1)+Ex1(n,n-1);
	   }
   }
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	return 0;
}
