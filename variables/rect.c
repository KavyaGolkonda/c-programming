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
	int l,b;
	int perimeter,area;
	
	printf("Enter the length and breadth of rectangle: ");
	scanf("%d %d",&l,&b);

	perimeter=2*(l+b);
	area=l*b;

	printf("Perimeter of the Rectangle = %d\nArea of the Rectangle = %d\n",perimeter,area);

    return 0;
}

