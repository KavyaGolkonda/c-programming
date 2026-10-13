/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

//1.Biggest of Two Numbers

#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);

	if(a>b) {
		printf("a=%d is the biggest number.\n",a);
	}
	else {
		printf("b=%d is the biggest number.\n",b);
	}

	return 0;
}

