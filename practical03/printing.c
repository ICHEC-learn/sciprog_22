#include <stdio.h>

int main(){
	int i1;
	int i2 = 200;
	float fl1 = 1.11;
	double fl2 = 2.22;

	i1 = 10;
	int i3;
	i3 = i1 + i2;
	printf("two ints %d %d and floats %.2f %.4f \n", i1, i2, fl1, fl2);
	printf("summation of %d %d is %d", i1, i2, i3);
	
	return 0;
	}
