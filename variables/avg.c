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
	int a,b,c,d,avg;
	printf("Enter 4 integer values: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	avg=(a+b+c+d)/4;

	printf("Average of %d, %d, %d, %d is: %d\n",a,b,c,d,avg);
    return 0;
}

