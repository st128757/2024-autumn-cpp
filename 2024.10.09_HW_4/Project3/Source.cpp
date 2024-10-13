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

	int mx_ind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[mx_ind] < a[i])
		{
			mx_ind = i;
		}
	}
	int mx_num = a[mx_ind];

	int mn_ind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[mn_ind] > a[i])
		{
			mn_ind = i;
		}
	}
	int mn_num = a[mn_ind];

	for (int i = 0; i < n; ++i)
	{
		if (a[i] == mx_num)
		{
			printf("%d ", mn_num);
		}
		else
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}