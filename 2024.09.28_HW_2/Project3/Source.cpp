#include<cstdio>
#include <cmath>

int main(int argc, char* argv)
{
	int x1 = 0;
	int y1 = 0;
	int r1 = 0;
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &r1);

	int x2 = 0;
	int y2 = 0;
	int r2 = 0;
	scanf_s("%d", &x2);
	scanf_s("%d", &y2);
	scanf_s("%d", &r2);

	int d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);

	if (((sqrt(d) + r1 < r2) || (sqrt(d) + r2 < r1)))
	{
		printf("NO");
	}
	else if (d <= (r1 + r2) * (r1 + r2))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}