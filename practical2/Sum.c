#include <stdio.h>

int main(void){
    // declare the variables
    int i;
    float sum1, sum2, diff1,diff2;

    // The first sum
    sum1 = 0.0;
    for (i = 1; i < 1000; i++)
    {
        sum1 = sum1+1.0/(float)i;
    }

    // The second sum
    sum2 = 0.0;
    for (i=1000;i>0;i--){
        sum2 = sum2+1.0/(float)i;
    }

    printf(" Sum1=%f\n",sum1);
    printf(" Sum2=%f\n",sum2);

    // Find the differences
    diff1 = sum1-sum2;
    diff2 = sum2-sum1;

    printf("The difference between the two sum functions (sum1-sum2) is %f\n",diff1);
    printf("The difference between the two sum functions (sum2-sum1) is %f\n",diff2);
    
}