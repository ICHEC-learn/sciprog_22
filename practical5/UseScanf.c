#include<stdio.h>

//read user input using scanf
int main(void) {
  	int i,ierr,flag = 0;
  	double a;

	//Enter information from user
   	while(flag != 3){ //Loop for 3 times
   		printf("Enter an int and double\n");
   		ierr = scanf("%d %lf",&i,&a);// read int and double values
   		if(ierr == 2){
			flag = 3;
    			printf("Read successfull\n");
   		}
   		if(ierr != 2) 
   		{
     			printf("Error in read statement, please try again\n");
     			flag = flag+1;
   		}
  	}
	return 0;
}

