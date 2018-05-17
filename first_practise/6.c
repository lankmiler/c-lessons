#include <stdio.h>
#define PI 3.14159265358979323846

int main()
{
	double radius = 6;
	
	double perimeter = radius * (PI * 2);
	double area = PI * (radius * radius);

	printf("perimeter is: %f\n", perimeter);
	printf("area is: %f\n", area);
   
    return 0;
}