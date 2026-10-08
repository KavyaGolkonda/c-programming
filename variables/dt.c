/************************************************
* Name          :Golkonda Kavya
* Date          : 07-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	int a1;
	unsigned int a2;
	signed short int b1;
	unsigned short int b2;
	signed long int c1;
	unsigned long int c2;
	char ch1;
	unsigned char ch2;
	float f;
	double d;
	long double z;
	
	printf("enter a1 and a2:");
	scanf("%d %u",&a1,&a2);
	printf("enter b1 and b2:");
	scanf("%hd %hu",&b1,&b2);
	printf("enter c1 and c2:");
	scanf("%ld %lu",&c1,&c2);
	printf("enter ch1 and ch2:");
	scanf(" %c %c",&ch1,&ch2);
	printf("enter values of f,d and z:");
	scanf("%f %lf %Lf",&f,&d,&z);

	printf("The values are: \n");
	printf("a1=%d, a2=%u, b1=%hd, b2=%hu, c1=%ld, c2=%lu, ch1=%c, ch2=%c, f=%f, d=%f, z=%Lf\n",a1,a2,b1,b2,c1,c2,ch1,ch2,f,d,z);

    return 0;
}

