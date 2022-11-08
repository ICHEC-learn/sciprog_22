/*
iterative and recursive versions of Euclid's algorithm
*/

# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int iterativeGCD(int a, int b);
int recursiveGCD(int a, int b);

int main(){

    int a, b, ierror;
    clock_t start, end;

    // printf("Please input two positive integers:\n");
    // ierror = scanf("%d %d", &a, &b);
    // if(ierror != 2){
    //     printf("Please enter two integers\n");
    // }

    // if(a <= 0 || b <= 0){
    //     printf("These numbers are not positive.\n");
    //     return 1;
    // }

    srand(time(NULL));
    a = (rand()%12) + 1;
    b = (rand()%12) + 1;    
    // call the functions
    start = clock();
    printf("IterativeGCD(%d, %d) = %d\n",a,b, iterativeGCD(a,b));
    printf("recursiveGCD(%d, %d) = %d\n",a,b, recursiveGCD(a,b));
    end = clock();
    printf("Total time : %f s\n", (double)(end - start)/CLOCKS_PER_SEC);
    return 0;
}

int iterativeGCD(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int recursiveGCD(int a, int b){
    if(b == 0){
        return a;
    }
    else{
        return(recursiveGCD(b, a%b));
    }
}