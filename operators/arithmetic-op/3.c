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
	int x,y,z,temp;
	printf("Enter 3 integer values: ");
	scanf("%d %d %d",&x,&y,&z);
	
	printf("Before Rotating Values: x=%d, y=%d, z=%d\n",x,y,z);

	temp=x;
	x=y;
	y=z;
	z=temp;

	printf("After Rotating Values: x=%d,y=%d,z=%d\n",x,y,z);

    return 0;
}

