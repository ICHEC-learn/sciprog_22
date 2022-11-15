#include<stdio.h>
#include<stdlib.h>


void hanoi(int n, int source, int destination, int inter){
    //base cases
    if (n == 1){
        printf("Move disc from %d to %d\n",source, destination);
    }
    else{
        //move n-1 from rod 1 to rod 2 using rod 3 as intermediary
        hanoi(n-1, source, inter, destination);
        printf("Move disc from %d to %d\n",source, destination);
        // move n-1 discs from rod 2 to rod 3 using rod 1 as intermediary
        hanoi(n-1, inter, destination, source);

    }
}

int main(void){
    int h = 5;
    printf("solution for %d discs\n", h);

    // our goal is to move discs from rod 1 to rod 3 using rod 2 as intermediary
    hanoi(h,1,3,2);
    return 0;
}