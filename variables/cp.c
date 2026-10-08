/************************************************
* Name          :Golkonda Kavya
* Date          :07-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	int n,sp,cp,profit;  //n=numberof items,sp=selling price,cp=cost price

	printf("Enter number of items,selling price of all items,profit: ");
	scanf("%d %d %d",&n,&sp,&profit);
	
	cp=(sp-profit)/n;
	
	printf("Cost Price of each item: %d\n",cp);

    return 0;
}

