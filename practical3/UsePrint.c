#include <stdio.h> 
  
int main() {
	int i1=20;
	int i2=i1+30;
 	printf("Two ints are %d and %d\n",i1,i2); //print two int values
	
	float f1 = 10.9752;
	float f2=f1/2; 
   	printf("Two float values are %f and %f\n", f1,f2); //print float value 
   	printf("Two scientific values are %e and %e\n", f1,f2); //print in scientific notation

   	char ch1 = 'A';
	char ch2 = 'C';
   	printf("Two characters are: %c\t %c \n", ch1,ch2);  //print character
    
   	char str[] = "Practical";
	char str2[]= "3 code"; 
   	printf("%s %s\n", str,str2); //print string
   	return 0; 
}