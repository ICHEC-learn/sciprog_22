#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//To find the Inverse hyperbolic function using Maclaurin series and natural log

double maclaurin(const double x, const double delta);
double log_sum(const double x);

int main(void)
{
	int length,ierr,i;
  	double delta,x;
  	length =1000;						  
  	double sum_mc[length],sum_log[length];
  	printf("Enter the precision for Mac Laurian series\n");
  	ierr = scanf("%lf",&delta); //read delta value to use for stopping
  	if(ierr!=1||delta<0){         
     		printf("Please enter positive numeric value for delta, try again\n");
     		exit(1);
    	} 
   	x = -0.9;
   	i = 0;
   	while(x<=0.9&&i<length){
      	sum_mc[i] = maclaurin(x,delta);
      	sum_log[i] = log_sum(x);
      	printf("The difference for x = %lf in the sum approximation is %.10lf\n",x,fabs(sum_mc[i]-sum_log[i]));
      	x = x+0.01;
      	i = i+1;
      }
  	return 0;
}

//To calculate using maclauin sum
double maclaurin(const double x,const double delta)
{ 
   	int p=0;
   	double val,elem;
   	double mc_sum =0;
   	do { 
		val = 2*p +1;
        	elem = pow(x,val)/val;
        	mc_sum = mc_sum+ elem;
      	p = p+1; 
      } while(fabs(elem)>=delta);
   	return mc_sum;  
}

//To calculate sum using log	
double log_sum(const double x) 
{
 	return (log(1+x)-log(1-x))/2;
}
