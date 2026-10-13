/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

//2.Even or Odd

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num%2==0) {
		printf("%d is the even number\n",num);
	}
	else {
		printf("%d is an odd number\n",num);
	}

	return 0;
}

