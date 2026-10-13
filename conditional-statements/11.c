/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

// 11.Biggest of Four Numbers

#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("Enter 4 numbers: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a>=b) {
		if(a>=c) {
			if(a>=d) {
				printf("%d is the biggest\n",a);
			}
			else {
				printf("%d is the biggest\n",d);
			}
		}
		else {
			if(c>=d) {
				printf("%d is the biggest\n",c);
			}
			else {
				printf("%d is the biggest\n",d);
			}
		}
	}
	
	else {
		if(b>=c) {
			if(b>=d) {
				printf("%d is the biggest\n",b);
			}
			else {
				printf("%d is the biggest\n",d);
			}
		}
		else {
			if(c>=d) {
				printf("%d is the biggest\n",c);
			}
			else {
				printf("%d is the biggest\n",d);
			}
		}
	}
    return 0;
}

