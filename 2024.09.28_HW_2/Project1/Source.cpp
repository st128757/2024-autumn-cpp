#include<cstdio>
#include<cmath>

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	int a1 = 0;
	int b1 = 0;
	scanf_s("%d", &a1);
	scanf_s("%d", &b1);

	if (a == a1)
	{
		printf("YES");
	}
	else if (b == b1)
	{
		printf("YES");
	}
	else if (fabs(a - a1) == fabs(b - b1))
	{
		printf("YES");
	}
	else if (a > 8 || b > 8 || a1 > 8 || b1 > 8)
	{
		printf("NO");
	}
	else
	{
		printf("NO");
	}

	return 0;
}