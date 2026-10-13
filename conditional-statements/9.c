/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

// 9.Digit Check

#include <stdio.h>

int main() {
	char digit;
	printf("Enter a digit:");
	scanf("%c",&digit);

	if(digit>='0') {
		if(digit<='9') {
			printf("%c is a digit\n",digit);
		}
		else {
			printf("%c is not a digit\n",digit);
		}
	}

    return 0;
}

