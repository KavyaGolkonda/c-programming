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
	int r;
    float perimeter,area;
	float PI=3.14;

	printf("Enter the radius: ");
	scanf("%d",&r);

	perimeter=2*PI*r;
	area=PI*r*r;

	printf("Perimeter of the Circle = %.2f\nArea of the Circle = %.2f\n",perimeter,area);


    return 0;
}

