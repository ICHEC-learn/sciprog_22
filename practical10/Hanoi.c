#include <stdio.h>
#include <stdlib.h>
/// @brief 
void hanoi(int n, int source, int destination, int inter){ // construct the move function
    // base cases
    if(n==1){
        printf("Move disc from %d to %d\n",source,destination);
    }else{
        hanoi(n-1,source,inter,destination);
        printf("MOve disc from %d to %d\n",source, destination);
        hanoi(n-1, inter,destination,source);
    }
}

int main(void){
    // modify the h to input a number
    // int h = 2;
    int h;
    // enter the number of rods
    printf("Please enter an integer: "); 
    scanf("%d",&h);
    printf("Solution for %d discs\n",h);
    hanoi(h,1,3,2);
    return 0;
}