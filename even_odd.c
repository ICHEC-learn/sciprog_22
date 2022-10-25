#include <stdio.h>
#include <stdlib.h> 


void recurs_odd_even(int *n, int *n_1, int *n_2); //declaring a function

int main(){
    int i = 0, length = 1000;
    int n_1 = 0, n_2 = 0;
    int last_three[3];  //define an array of length 3 storing the last 3 elements of the sequence of f(n)
    int n = 4001;

    printf("put input an integar here:\n");
    scanf("%d", &n);

    /* running the f(n) function until stopping criteria is met, 
    and assgining the latest value of the last three numbers of the sequence to array */
    for (i; i < length; i++){
        recurs_odd_even(&n, &n_1, &n_2);
        printf("%d, ", n_1);
        last_three[0] = n_2;
        last_three[1] = n_1;
        last_three[2] = n;
        // printf("\n last three are : %d, %d, %d. \n", last_three[0],last_three[1],last_three[2]);
        if ((last_three[0] == 4) & (last_three[1] == 2) & (last_three[2] == 1)){
            printf("%d, ", n);
            break;
        }

        }
    return 0;
}

void recurs_odd_even(int *n, int *n_1, int *n_2){

    int result = *n;

    // calculate the f(n) function depending on if n is odd or even
    if (result%2 == 0){
        result = result/2;
    }
    else{
        result = 3*result + 1;
    }
    int c;

    // changing the values of the elements of the array
    *n_2 = *n_1;
    *n_1 = *n;
    *n = result;


}