#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "XML";
	char result[] = "XML";
	int j = 0;
	int i = strlen(str) - 1;

	while(i >= 0) {
		result[j++] = str[i]; 
		i--;
	}

	printf("%s\n", result);
   
    return 0;
}