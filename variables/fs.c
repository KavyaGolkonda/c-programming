/************************************************
 
* Name          :Golkonda Kavya
* KM_ID         :KMON20A09
* Date          :07-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	int a1=-3;
	unsigned int a2=3;

	signed short int b1=-4;
	unsigned short int b2=4;

	signed long int c1=-200;
	unsigned long int c2=200;

	char ch1='A';
	unsigned char ch2='5';

	float f=10.56;
	double d=20.3456;
	long double z=30.324748;

	printf("int=%d\n",a1);
	printf("unsigned int=%u\n",a2);

	printf("signed short int=%hd\n",b1);
	printf("unsigned short int=%hu\n",b2);

	printf("signed long int = %ld\n",c1);
	printf("unsigned long int = %lu\n",c2);

	printf("char = %c\n",ch1);
	printf("unsigned char = %c\n",ch2);

	printf("float = %f\n",f);
	printf("double = %lf\n",d);
	printf("long double = %Lf\n",z);

    return 0;
}

