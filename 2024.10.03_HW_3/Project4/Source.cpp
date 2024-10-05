#include <cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int b = 0;
	int c = 0;

	for (int a = 0; a < n; ++a)
	{
		int v = 0;
		scanf_s("%d", &v);
		int s = 0;
		scanf_s("%d", &s);

		if (s == 1 && v > b)
		{
			b = v;
			c = a + 1;
		}
	}

	if (b != 0)
	{
		printf("%d", c);
	}
	else if (b == 0)
	{
		printf("%d", -1);
	}

	return 0;
}