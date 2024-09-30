#include<iostream>

int main(int argc, char* argv)
{
	int x = 0;
	int y = 0;
	int z = 0;
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	scanf_s("%d", &z);

	int x1 = 0;
	int y1 = 0;
	int z1 = 0;
	scanf_s("%d", &x1);
	scanf_s("%d", &y1);
	scanf_s("%d", &z1);

	if (x < y)
	{
		int t = 0;
		t = x;
		x = y;
		y = t;
	}
	
	if (x < z)
	{
		int t = 0;
		t = x;
		x = z;
		z = t;
	}

    if (y < z)
	{
		int t = 0;
		t = z;
		z = y;
		y = t;
	}

	if (x1 < y1)
	{
		int t = 0;
		t = x1;
		x1 = y1;
		y1 = t;
	}

	if (x1 < z1)
	{
		int t = 0;
		t = x1;
		x1 = z1;
		z1 = t;
	}
	
	if (y1 < z1)
	{
		int t = 0;
		t = z1;
		z1 = y1;
		y1 = t;

	}

	if (x == x1 && y == y1 && z == z1)
	{
		printf("Boxes are equal");
	}
	else if (x > x1 && y >= y1 && z >= z1 || x >= x1 && y > y1 && z >= z1 || x >= x1 && y >= y1 && z > z1)
	{
		printf("The first box is larger than the second one");
	}
	else if (x < x1 && y <= y1 && z <= z1 || x <= x1 && y < y1 && z <= z1 || x <= x1 && y <= y1 && z < z1)
	{
		printf("The first box is smaller than the second one");
	}
	else if (x < x1 && y >= y1 && z > z1)
	{
		printf("Boxes are incomparable");
	}

	return 0;
}