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
	int num,last_digit;
	printf("Enter an integer value: ");
	scanf("%d",&num);

	last_digit=num%10;

	printf("The last digit of integer %d is %d\n",num,last_digit);

    return 0;
}

