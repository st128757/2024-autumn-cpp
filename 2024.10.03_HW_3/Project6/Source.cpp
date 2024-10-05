#include<cstdio>

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int nod = 0;

	for (int d = 1; d <= a && d <= b; ++d)
	{
		if (a % d == 0 && b % d == 0)
		{
			nod = d;
		}
	}

	printf("%d", a * b / nod);

	return 0;
}