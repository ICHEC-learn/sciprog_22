#include<stdio.h>

//To find the greatest common divisor using Euclidean algorithm

int iterativeGCD(int a, int b); //This function declaration is for calculating gcd by iteration
int recursiveGCD(int a, int b); //This function declaration is for recursive

int main(void){
  	int a,b,ierr;

  	printf("Please enter two integers for gcd calculation\n");
  
	ierr = scanf("%d %d",&a,&b);
	if(ierr!= 2)  //check return type of scanf
    	{
		printf("There has been an error in reading, make sure to input integers next time.\n");
		return(1);	
    	}
   	else
   	{
       	if(a<=0||b<=0) //for positive gcd
       	{
			printf("Positive integers should be input . Try again next time.\n");
       	}
       	else
 		{
	  		printf("For ite %d  \n For rec %d\n ",iterativeGCD(a,b), recursiveGCD(a,b));
		}
   	}
	return 0;
}

int iterativeGCD(int a, int b)
{
  	int temp;
  	while(b!=0)
  	{
		temp = b; //temp variable to store value of b
        	b = a%b;
        	a = temp;
  	}
	return a;
}

int recursiveGCD(int a, int b)
{
 	if (b==0) 
		return a;
 	else 
		return(recursiveGCD(b,a%b)) ;
}


