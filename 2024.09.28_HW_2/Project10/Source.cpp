#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;

	scanf_s("%d", &n);

	if ((n % 5) % 3 == 0)
	{
		printf("%d %d", n / 5, (n % 5) / 3);
	}
	else if ((n % 5 + 5) % 3 == 0)
	{
		printf("%d %d", n / 5 - 1, (n % 5 + 5) / 3);
	}
	else if ((n % 5 + 10) % 3 == 0)
	{
		printf("%d %d", n / 5 - 2, (n % 5 + 10) / 3);
	}

	return 0;
}