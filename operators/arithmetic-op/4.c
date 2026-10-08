/************************************************
* Name          :Golkonda Kavya
* Date          : 08-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

#include <stdio.h>

int main()
{
	char a,b,c;
	printf("Enter 3 digits: ");
	scanf("%c %c %c",&a,&b,&c);   //a='3',b='4',c='5'

	a=a-'0';
	b=b-'0';
	c=c-'0';

	int i=printf("%d%d%d\n",a,b,c);  //o/p: 342
	printf("integer i=%d\n",i);     //o/p:

    return 0;
}

