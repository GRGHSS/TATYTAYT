 #include <stdio.h>


 int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d", &a, &b);

	c = a;
	a = b;
	b = c;

	printf("%d\n%d\n", a, b);

	return 0;
}

