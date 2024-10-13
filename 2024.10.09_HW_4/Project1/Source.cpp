#include<cstdio>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d ", &a[i]);
	}

	int x = 0;
	scanf_s("%d", &x);

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (x == a[i])
		{
			++count;
		}
	}
	printf("%d", count);

	return 0;
}