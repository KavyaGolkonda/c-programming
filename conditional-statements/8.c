/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

// 8.Alphabet Check

#include <stdio.h>

int main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c",&ch);

	if(ch>='a') {
		if(ch<='z') {
			printf("%c is an alphabet\n",ch);
		}
		else {
			printf("Not an alphabet\n");
		}
	}
	else if(ch>='A') {
		if(ch<='Z') {
			printf("%c is an alphabet\n",ch);
		}
		else {
			printf("Not an alphabet\n");
		}
	}

    return 0;
}

