#include<stdio.h>
#include<stdlib.h>

//Generate Fibonacci Series upto n
void fibo(int *a,int *b); //Declare function

int main(void){
  	int f0=0,f1=1;//Initialise first two numbers of fibonacci series
	int n; 
  	int ierr,i;
  	printf("Enter the number of terms to be printed:(n>0) \n ");
  	ierr = scanf("%d",&n); //read the number of required terms
  	if ((ierr != 1)||n<1){
      	printf("\nPlease enter \n");
      	exit(1);
  	}
  	printf("Fibonacci series upto given terms is %d, %d, ",f0,f1);
  	for(i=2;i<n;i=i+1){
		fibo(&f0,&f1);
        	printf("%d",f1);
		if(i!=n-1) 
			printf(", "); //print "," after all terms except last term
        	if(i==n-1) 
			printf("\n\n");
        	if(i%10==0) 
			printf("\n"); //new line after every 10 terms
   	}
   	return 0;
}

void fibo(int *a, int *b){	
	int temp; //temp variable to swap values
	temp = *a + *b;        
	*a = *b;
	*b = temp;
}
