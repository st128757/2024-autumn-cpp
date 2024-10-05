#include<cstdio>

int main(int argo, char* argv[])
{
	int n = 0;
	int m = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);

	a = n;
	b = m;

	while (a != 0 && b != 0)
	{
		if (a > b) 
		{
			a %= b;
		}
		else 
		{
			b %= a;
		}
	}

	m = b + a;

	printf("%d", n / m);

	return 0;
}