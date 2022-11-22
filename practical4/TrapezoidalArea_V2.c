#include<stdio.h>
#include<math.h>

float degtorad(float degang);
float trap_rule(int N, float TanArr[N+1]);

int main()
{
	int N=12,i;
	float TanArr[N+1],deg,rad;
	
	for(i=0;i<=N;i++)
	{
		deg=i*5.0;
		rad=degtorad(deg); //covert degree to radians
		TanArr[i]=tan(rad);
		printf("TanArr[%d]=%f (f(x) at x=%d)\n",i,TanArr[i],i);
	}
	float area=trap_rule(N,TanArr);

	//Area of Trapezoidal approximated result
	printf("\nTrapezoidal result is %f\n",area);
	//Actual result
	//integral tan is log 2
	printf("The actual result is %f\n",log(2.0));
	return 0;
}

float degtorad(float degang)
{
	return((M_PI*degang)/180.0);
}

float trap_rule(int N, float TanArr[N+1])
{
	float area;
	int i;
	//Find the area by Trapezodial rule
	area=TanArr[0]+TanArr[N];
	
	//calculate area at points x1,x2....x11 and add them using loops
	for(i=1;i<N;i++)
	{
		area=area+2.0*TanArr[i];
	}
	//multiply area by (pi/3)/2(12) after radian conversion
	float mult_rad=degtorad((60.0-0.0)/(2*N));
	area=mult_rad*area;
	return area;
}
