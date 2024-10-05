#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

		for (int s = 0; s < n; ++s)
		{
			int h = 0;
			scanf_s("%d", &h);

			if (h <= 437)
			{
				printf("Crash %d", s + 1);
				return 0;
			}
		}
		printf("No crash");

	return 0;
}