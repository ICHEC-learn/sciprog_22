#include <stdio.h>
#include <math.h> 

// predifining the functions for calculation
double geo1(int n, float a, float r);
double geo2(int n, float a, float r);


int main(void){
    int i = 0;

    /*looping through 0,1,2, which represents different case index, and 
    different set of parameter will be implemented as per case number*/

    for (i; i < 3; i++){
        int n;
        float a, r;
        switch (i){
            case 0:
                n = 10000;
                a = 2.0, r = 0.01;
                break;

            case 1:
                n = 500;
                a = 0.01, r = 1.1;
                break;

            case 2:
                n = 100;
                a = 0.0001, r = 2.0;
                break;
        }
        // perform the calculation for two equations, and compare them.
        double S1 = geo1(n, a, r);
        double S2 = geo2(n, a, r);
        double diff = fabs(S1-S2);
        double relative = diff/S1; // the relative difference comparing to formula 1

        // print out the results
        printf("\nparameter combo: n = %d, a = %f, r = %f\n", n, a, r);
        printf("The summation from equation of the left handside is %2f\n,\
        The summation from equation of the right handside is %2f\n,\
        The difference between the two rules is %2f\n, which is relatively %2f\n, \
        ", S1, S2, diff, relative);

    }
    printf(" Final comment: the difference between the two reults is rather small and neglectable comparing to the scale of the result.");
    return 0;
}

// function one: calculating the summation of the serious
double geo1(int n, float a, float r){
    int i = 0;
    double summation = 0.0;
    for (i; i <= n; i++){
        double new_term = a*pow(r, i);
        summation += new_term;
    }
    return summation;
}

// function two, calculate the right hand side equation
double geo2(int n, float a, float r){
    double power1, result;
    power1 = pow(r,n+1);
    result = a*((1 - power1)/(1-r));
    return result;
}
