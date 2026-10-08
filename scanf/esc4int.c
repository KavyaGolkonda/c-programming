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
	int n;
	printf("Enter a 4-digit integer: ");
	scanf("%d",&n);
	//input:3467
	//3
	//34
	//346
	//3467
	printf("%d\b\b\b   \n",n);
	printf("%d\b\b  \n",n);
	printf("%d\b \n",n);
	printf("%d\n",n);

    return 0;
}

