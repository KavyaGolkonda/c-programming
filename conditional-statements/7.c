/************************************************
* Name          :Golkonda Kavya
* Date          :13-10-26
* Program       :
* Sample Input  :
* Sample Output :
*
*************************************************/

//7.Simple Calculator

#include <stdio.h>

int main()
{
	int a,b;
	char op;
	printf("Please enter 2 numbers and an operator(+,-,*,/,%%) : ");
	scanf("%d %d %c",&a,&b,&op);
	
	if(op=='+') {
		printf("%d + %d = %d\n",a,b,a+b);
	}
	else if(op=='-') {
		printf("%d - %d = %d\n",a,b,a-b);
	}
	else if(op=='*') {
		printf("%d * %d = %d\n",a,b,a*b);
	}
	else if(op=='/') {
		if(b!=0) {
			printf("%d / %d = %d\n",a,b,a/b);
		}
		else {
			printf("Division with denominator zero is not possible\n");
		}
	}
	else if(op=='%') {
		if(b!=0) {
			printf("%d %% %d = %d\n",a,b,a%b);
		}
		else {
			printf("Modulus with denominator zero is not possible\n");
		}
	}
	else {
		printf("Invalid Operator. Enter a correct operator.");
	}

    return 0;
}

