/************************************************
* Name          :Golkonda Kavya
* Date          :08-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	int a,b,temp;
	printf("Enter two integer values: ");
	scanf("%d %d",&a,&b);
	
	printf("Before Swapping: a=%d and b=%d\n",a,b);

	temp=a;
	a=b;
	b=temp;

	printf("After Swapping: a=%d and b=%d\n",a,b);

    return 0;
}

