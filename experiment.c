#include<stdio.h>
int c = 5;
int i = 3;
switch (i){
    case 3:
        c = 5;
        printf("c is %d",c);
    case 2:
        printf("others");
}
printf("%d",c);