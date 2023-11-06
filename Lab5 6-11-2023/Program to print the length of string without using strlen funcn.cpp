#include <stdio.h>
int main()
{
	int n,i;
	char s[] = "hello";
	printf("%d",(sizeof(s)/sizeof(char))-1 );
}
