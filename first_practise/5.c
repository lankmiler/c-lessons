#include <stdio.h>

int main()
{
	int height = 7;
	int width = 5;

	int perimeter = height * 2 + width * 2;
	int area = height * width;

	printf("perimeter is: %d inches\n", perimeter);
	printf("area is: %d inches\n", area);
   
    return 0;
}