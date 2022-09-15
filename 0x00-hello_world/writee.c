#include <unistd.h>
#include <stdio.h>
int main()
{
	int n;
	n=write(2, "My name is Edemialem, work hard never give up\n", 49);
	printf("value of nn is %d\n", n); 
}
