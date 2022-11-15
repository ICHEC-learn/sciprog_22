#include <stdio.h>
#include <stdlib.h>
#include "magic_square.c"
#define MAX_FILE_NAME 100

// get the number of lines for a file
int get_num_lines(char filename[MAX_FILE_NAME]){
    FILE *fp;
    fp = fopen(filename, "r");
    int ch_read;
    int count = 0;
    while((ch_read = fgetc(fp)) != EOF){
        if (ch_read == '\n'){
            count++;
        }
    }
    printf("number of lines is : %d\n", count);
    fclose(fp);
    return count;
}


int main(void){
    FILE *f;
    char filename[MAX_FILE_NAME];
    printf("Enter file name please:");
    scanf("%s", filename);

    //determine the number of lines in file
    int n = get_num_lines(filename);

    f = fopen(filename, "r");

    int i;
    int **magicsquare = malloc(n*sizeof(int *)); // initialize a 2D-array (ponter to a pointer)
    for (i = 0; i < n; i++){
        magicsquare[i] = malloc(n*sizeof(int));
    }

    // scanning the scream of file and assigning each element of the array 
    int j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            fscanf(f, "%d", &magicsquare[i][j]);
        }      
    }   

    // determine if square is magic or not,
    int flag = isMagicSquare(magicsquare, n);
    if (flag == 1){
        printf("is magic \n");
    }
    else{
        printf("is not magic. \n");
    }

    // freeing the memory
    for (i = 0; i < n; i++){
        free(magicsquare[i]);
    }
    free(magicsquare);
    fclose(f);
    return 0;
}
