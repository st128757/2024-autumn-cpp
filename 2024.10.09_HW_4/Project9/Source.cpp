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

	int h = 0;
	scanf_s("%d", &h);
	int memi = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] >= h && h > a[i + 1])
		{
			memi = i;
		}
	}

	if (a[n - 1] > h)
	{
		memi = n - 1;
	}

	printf("%d", memi + 2);

	return 0;
}