#include<cstdio>

int main(int argc, char* argv[])
{
	long long a = 0;
	scanf_s("%lld", &a);
	long long b = 0;
	scanf_s("%lld", &b);
	long long c = 0;
	scanf_s("%lld", &c);
	long long d = 0;
	scanf_s("%lld", &d);

	for (long long x = -100; x <= 100; ++x)
	{
		if ((a * x * x * x + b * x * x + c * x + d) == 0)
		{
			printf("%lld ", x);
		}
	}

	return 0;
}