#include<stdio.h>
#include<math.h>

//Using function and array to find the area by trapezoidal rule
float deg_to_rad(float deg){		        
	return (deg*M_PI)/180.0; //convert degree to radian and return the value
}

float trap_rule(int N, float array[N+1]){
	int i;
	float area;
	area = array[0] + array[N];

	for(i=1;i<N;i++){
		area += 2*array[i];
	}
	area = (deg_to_rad(60)/(2*N))*area;          
	printf("\nThe approximate area is %f and the actual area is %f\n", area, log(2.0));
	return area; //return the caluculated area
}

int main(void){                                 
	int i,N =12; //declare variables
	float arr[N+1];
	for (i=0;i<=12;i++){
		arr[i] = tan(deg_to_rad(5*i));
	}
	trap_rule(N, arr); //approximate value is returned
	return 0;
}
