#include <iostream>

int main(int argc, char* argv[])
{
	int a[1000] = { 0 };
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf_s("%d", &a[i]);
	}

	int m = 0;
	scanf_s("%d", &m);

	for (int i = 0; i < m; ++i)
	{
		int ki = 0;
		scanf_s("%d", &ki);
		int kj = 0;
		scanf_s("%d", &kj);

		for (int s = ki - 1; s < kj; ++s)
		{
			printf("%d ", a[s]);
		}
	}

	return 0;
}