#include<cstdio>

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);

	int wdays = 0;
	int memory = 0;

	for (int i = 0; i < n; ++i)
	{
		int t = 0;
		scanf_s("%d", &t);
		if (t > 0)
		{
			++wdays;
			if (wdays > memory)
			{
				memory = wdays;
			}
		}
		else
		{
			wdays = 0;
		}
	}

	printf("%d", memory);
	return 0;
}