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
	int a;
	printf("Enter a 4-digit integer: ");
	scanf("%d",&a);

	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);
	a=a/10;
	printf("%d\n",a%10);

    return 0;
}

