#include<cstdio>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int maxsum = a[n - 1] + a[0] + a[1];

	for (int i = 1; i < n; ++i)
	{
		if (maxsum < a[i - 1] + a[i] + a[i + 1])
		{
			maxsum = a[i - 1] + a[i] + a[i + 1];
		}
		else if (maxsum < a[n - 2] + a[n - 1] + a[0])
		{
			maxsum = a[n - 2] + a[n - 1] + a[0];
		}
	}

	printf("%d", maxsum);

	return 0;
}