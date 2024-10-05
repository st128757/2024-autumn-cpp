#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int gerb = 0;
	int reshka = 0;

		for (int s = 0; s < n; ++s)
		{
			int a = 0;
			scanf_s("%d", &a);

			if (a == 0)
			{
				++reshka;
			}
			else if (a == 1)
			{
				++gerb;
			}
		}

		if (reshka >= gerb)
		{
			printf("%d", gerb);
		}		
		else if (reshka < gerb)
		{
			printf("%d", reshka);
		}

	return 0;
}