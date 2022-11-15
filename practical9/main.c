#include <stdio.h>
#include <stdlib.h>
#include "magic_square.h"
#define MAX_FILE_NAME 100

int get_num_lines(char filename[MAX_FILE_NAME]){ // Read the file
    FILE *fp;
    fp = fopen(filename,"r");
    int ch_read;
    int count = 0;
    while((ch_read = fgetc(fp)) != EOF){ // count the line number until reading the file at the end line,
        if(ch_read == '\n'){
            count++;
        }
    }
    printf("Number of lines is %d\n",count); // print the line number
    fclose(fp); // close the file
    return count;
}

int main(void){
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name please: "); // input the file name and read it
    scanf("%s",filename);

    // get number of lines
    int n = get_num_lines(filename);

    f = fopen(filename,"r");

    int i;
    int **magicsquare = malloc(n*sizeof(int *)); // allocate the memory size
    for(i =0;i<n;i++){
        magicsquare[i] = malloc(n*sizeof(int));
    }

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fscanf(f,"%d",&magicsquare[i][j]);
        }

    }
    int flag = isMagicSquare(magicsquare,n);
    if(flag==1){
        printf("This square is magic!\n");
    }else{
        printf("This square is not magic!\n");
    }

    for(i = 0;i<n;i++){
        free(magicsquare[i]);
    }
    free(magicsquare);
    fclose(f);
    return 0;
}