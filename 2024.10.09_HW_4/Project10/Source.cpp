#include <cstdio>


int main(int argc, char* argv[])
{
	int a[1000]{ 0 };
	int n = 0;
	scanf_s("%d", &n);
	int aa = 0;
	scanf_s("%d", &aa);
	int b = 0;
	scanf_s("%d", &b);
	int c = 0;
	scanf_s("%d", &c);
	int d = 0;
	scanf_s("%d", &d);

	for (int i = 0; i < n; ++i)
	{
		a[i] = i + 1;
	}

	int g = 1;
	for (int i = aa - 1; i < aa + (b - aa) / 2; ++i)
	{
		int c = a[b - g];
		a[b - g] = a[i];
		a[i] = c;
		++g;
	}

	g = 1;
	for (int i = c - 1; i < c + (d - c) / 2; ++i)
	{
		int c = a[d - g];
		a[d - g] = a[i];
		a[i] = c;
		++g;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}

	return 0;
}