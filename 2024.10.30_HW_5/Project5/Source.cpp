#include <iostream>

int main(int argc, int* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		int mx = -9999999;
		for (int j = i; j < n; ++j)
		{
			if (*(a + j) > mx)
			{
				mx = *(a + j);
			}
		}
		s += mx;

	}
	std::cout << s;
	free(a);

	return 0;
}