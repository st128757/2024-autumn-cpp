#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int a = 0;
	int b = 0;
	int amount = 0;

	for (int s = 0; s < n; ++s)
	{
		int c = 0;
		scanf_s("%d", &c);

		for (int s1 = 1; s1 < n; ++s1)
		{
			int c1 = 0;
			scanf_s("%d", &c1);

			if (c1 == 1)
			{
				++b;
			}
		}

		if (c == 1)
		{
			++a;
		}
	}

	amount = a + b;
	printf("%d", amount / 2);

	return 0;
}