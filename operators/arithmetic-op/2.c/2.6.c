/************************************************
* Name          :Golkonda Kavya
* Date          : 13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	int a;
	printf("Enter a 4 digit number:"); //4532
	scanf("%d",&a);
	//   2
	//  3
	// 5
	//4
	printf("\t\t\t%d\n",a%10);
	printf("\t\t%d\n",(a/10)%10);
	printf("\t%d\n",(a/100)%10);
	printf("%d\n",(a/1000));

    return 0;
}

