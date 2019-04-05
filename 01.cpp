#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char s;
	for (s=65; s<=90; s++)
	{
		printf("%c ",s);
	}
	printf("\n");
	for (s=97; s<=122; s++)
	{
		printf("%c ",s);
	}
	printf("\n");
	system ("pause");
	return 0;
}
