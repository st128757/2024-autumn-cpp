#include<cstdio>

int main(int argc, char* argv)
{
	int i = 0;
	scanf_s("%d", &i);

	int f10 = 0;
	int f11 = 1;
	int mem1 = 0;

	if (i == 0)
	{
		mem1 = 0;
	}
	else if (i == 1)
	{
		mem1 = 1;
	}
	else
	{
		for (int s = 1; s < i; ++s)
		{
			mem1 = f10 + f11;
			f10 = f11;
			f11 = mem1;
		}
	}

	int j = 0;
	scanf_s("%d", &j);

	int f20 = 0;
	int f21 = 1;
	int mem2 = 0;

	if (j == 0)
	{
		mem2 = 0;
	}
	else if (j == 1)
	{
		mem2 = 1;
	}
	else
	{
		for (int s = 1; s < j; ++s)
		{
			mem2 = f20 + f21;
			f20 = f21;
			f21 = mem2;
		}
	}

	printf("%d %d\n", mem1, mem2);

	if (mem1 > mem2)
	{
		int c = 0;
		c = mem2;
		mem2 = mem1;
		mem1 = c;
	}
	else if (mem1 = mem2)
	{
		mem1 = 2 * mem2;
	}

	printf("%d", gcd % 1000000000);

	return 0;
}