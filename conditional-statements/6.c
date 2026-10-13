/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

// 6.Biggest of Three numbers

#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d %d %d",&a,&b,&c);

	if(a>b) {
		if(a>c) {
			printf("%d is the biggest of the given numbers\n",a);
		}
		else {
			printf("%d is the biggest of the given numbers\n",c);
		}
	}
	
	else {
		if(b>c) {
			printf("%d is the biggest of the given numbers\n",b);
		}
		else {
			printf("%d is the biggest of the given numbers\n",c);
		}
	}

    return 0;
}

