#include<stdio.h>
#include<stdlib.h>

// Allocate the array
int *allocatearray(int n){
    int *p;
    p = (int *) malloc((n)*sizeof(int));
    if (p==NULL){printf("error allocating memory");}
    return p;
}

// Fill with ones
void fillwithones(int *array, int n){
    int i;
    for(i = 0; i<n; i++){
        array[i] = 1;
    }
}

// Print the array
void printarray(int *array, int n){
    int i;
    for(i = 0; i<n;i++){
        printf("a[%d]=%d\n", i, array[i]);
    }
}

//Deallocate
void freearray(int *array){
    free(array);
}

int main(){
    int len, *a;
    printf(" enter the size of the array:");
    scanf("%d",&len);
    a = allocatearray(len);
    fillwithones(a, len);
    printarray(a, len);
    freearray(a);
    a=NULL;
    return 0;
}