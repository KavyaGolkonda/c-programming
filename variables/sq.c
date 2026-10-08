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
	int s;
	int perimeter,area;
	printf("Enter the side of the square: ");
	scanf("%d",&s);

	perimeter=4*s;
	area=s*s;

	printf("Perimeter of the square = %d\nArea of the square = %d\n",perimeter,area);

    return 0;
}

