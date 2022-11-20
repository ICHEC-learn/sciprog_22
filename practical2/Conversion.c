#include <stdio.h>
#include <math.h>

int main(void){
    // delcare the variables
    int i,inum,tmp,numdigits;
    float fnum;
    char binnum[60];

    // initial 4-byte integer
    inum = 5544321;
    // convert to 4-byte float;
    fnum = (float) inum;

    // convert to binary number (string)
    i = 0;
    tmp = inum;
    while(tmp>0){
        sprintf(&binnum[i],"%1d",tmp%2);
        tmp=tmp/2;
        i++;
    }

// terminate the string
    binnum[i] = '\0';

// complete the expression
numdigits = ceil(logf(fnum)/logf(2));
printf("The number of digits is %d\n", numdigits);

printf("inum=%d, fnum=%f, inum in binary=%s\n",inum,fnum,binnum);

}