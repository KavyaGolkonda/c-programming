/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

//Mobile Billing Program 

#include <stdio.h>

int main()
{
	int calls;
	float total_bill;
	printf("Enter number of calls: ");
	scanf("%d",&calls);

	if(calls<=100) {
		printf("Bill amount = 250\n");
	}
	else {
		total_bill=250+(calls-100)*1.25;
		printf("Bill amount = %.2f\n",total_bill);
	}

    return 0;
}

