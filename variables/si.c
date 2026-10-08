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
	int p,n;  //p=principle, n=duration in months
	float r,si,m;  //r=rate of interest, si=simple interest, m=duration in years

	printf("Please enter principle,time in months and rate of interest: ");
	scanf("%d %d %f",&p,&n,&r);

	m=n/12.0;
	si=(p*m*r)/100;

	printf("Simple interest = %.3f\n",si);

    return 0;
}

