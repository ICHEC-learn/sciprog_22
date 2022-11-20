#include <stdio.h>
#include "matmult.h"

int main(void){
    // Define the matrix structure number
    int n, p, q, i, j, k;



    printf("Please enter your n number: \n");
    scanf("%d",&n);
    printf("Please enter your p number: \n");
    scanf("%d",&p);
    printf("Please enter your p number: \n");
    scanf("%d",&q);

    // Initialise A, B, C matrices
    double A[n][p], B[p][q], C[n][q];
    for(i = 0; i<n; i++){
        for(j=0; j<p;j++){
            A[i][j]= i+j;
        }
    }

    for(i = 0; i<p; i++){
        for(j = 0; j<q; j++){
            B[i][j] = i-j;
        }
    }

    for(i = 0; i<n; i++){
        for(j = 0; j<q; j++){
            C[i][j] = 0.0;
        }
    }
    // Using the matmult function
    matmult(n,p,q,A,B,C);
  
    // Print out the matrices
    printf("\nThis is matrix A: \n");
    for(i=0; i<n; i++){
        for(j=0;j<p;j++){
            printf("%3.0f ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nThis is matrix B: \n");
    for(i=0; i<p; i++){
        for(j=0;j<q;j++){
            printf("%3.0f ", B[i][j]);
        }
        printf("\n");
    }

      printf("\nThis is matrix C: \n");
    for(i=0; i<n; i++){
        for(j=0;j<q;j++){
            printf("%3.0f ", C[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}