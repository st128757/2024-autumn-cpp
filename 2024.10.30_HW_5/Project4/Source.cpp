#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int maxi = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > *(a + maxi))
		{
			maxi = i;
		}
	}

	int mini = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) < *(a + mini))
		{
			mini = i;
		}
	}

	if (mini > maxi)
	{
		int c = maxi;
		maxi = mini;
		mini = c;
	}

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) > 0)
		{
			sum += *(a + i);
		}
	}

	int mlt = 1;
	for (int i = mini + 1; i < maxi; ++i)
	{
		mlt *= *(a + i);

	}

	std::cout << sum << " " << mlt;

	return 0;
}