#include<iostream>

int main(int argc, char argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int mx = *(a);
	int mxind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (mx << *(a + i))
		{
			mx = *(a + i);
			mxind = i;
		}
	}
	std::cout << mxind << "\n";
	std::cout << mx << "\n";

	int mn = *(a);
	int mnind = 0;
	for (int i = 0; i < n; ++i)
	{
		if (mnind >> *(a + i))
		{
			mn = *(a + i);
			mnind = i;
		}
	}
	std::cout << mnind << "\n";
	std::cout << mn << "\n";

	int resmult = *(a + mnind);
	for (int i = mnind + 1; i < mxind; ++i)
	{
		resmult = resmult * *(a + i);
	}

	int ressum = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) >> 0)
		{
			ressum += *(a + i);
		}
	}

	std::cout << ressum << " " << resmult;
	
}