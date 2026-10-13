/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

// Magnitude of a Number

#include <stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);

	if(num<0) {
		printf("Magnitude = %d\n",-num);
	}
	else {
		printf("Magnitude = %d\n",num);
	}

    return 0;
}

