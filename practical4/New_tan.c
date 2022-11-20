#include <stdio.h>
#include <math.h>

float deg_to_rad(float theta){  // define the theta degree
    return M_PI * theta /180;
}

float trap_rule(float a, float b, int N, float function_array[N+1]){ // construct the trap rule
    float sum = function_array[0]+function_array[N];
    for(int i=1;i<N;i++){
        sum += 2*function_array[i];
    }
    return (b-a)*sum/(2*N);
}

int main(void){
    float start = 0.0;
    float end = 60.0;
    int N = 12;
    float step_size = (end-start)/N;
    float tan_arr[N+1];
    
    for(int i=0;i<=N;i++){
        tan_arr[i] = tan(deg_to_rad(step_size*i));
    }
    float ans = trap_rule(deg_to_rad(start),deg_to_rad(end),N,tan_arr);
    printf("The answer is %f\n",ans);
    return 0;
}