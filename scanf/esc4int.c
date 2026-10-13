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
	printf("Output-1:\n");
	printf("%d\b\b\b   \n",n);
	printf("%d\b\b  \n",n);
	printf("%d\b \n",n);
	printf("%d\n",n);
	
	printf("\nOutput-2:\n");
	printf("%d\n",n/1000);
	printf("\t%d\n",(n/100)%10);
	printf("\t\t%d\n",(n/10)%10);
	printf("\t\t\t%d\n",n%10);

    return 0;
}

