#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n];
	int m = 0;
	std::cin >> m;
	int* b = new int[m];


	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}
	for (int g = 0; g < n - 1; ++g)
	{
		for (int i = 0; i < n - 1; ++i)
		{
			if (*(a + i) > *(a + i + 1))
			{
				int c = *(a + i);
				*(a + i) = *(a + i + 1);
				*(a + i + 1) = c;
			}
		}
	}

	for (int j = 0; j < m; ++j)
	{
		std::cin >> b[j];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i] == b[j] && a[i] != -1)
			{
				std::cout << a[i] << " ";
				for (int g = 0; g < n; ++g)
				{
					if (b[j] == a[g])
					{
						a[g] = -1;
					}
				}
				a[i] = -1;
				b[j] = -1;
			}
		}
	}

	return EXIT_SUCCESS;
}