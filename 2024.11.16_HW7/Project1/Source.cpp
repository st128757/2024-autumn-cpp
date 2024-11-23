#include<cstdio>
#include<cstdlib>
#include<ctime>

int* initIntArray(int len)
{
	int* res = nullptr;
	res = (int*)malloc(sizeof(int) * len);
	for (int i = 0; res != nullptr && i < len; ++i)
	{
		*(res + i) = 0;
	}
	return res;
}

void printIntArray(int* a, int len)
{
	for (int i = 0; a != nullptr && i < len; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void randomizeIntArray(int* a, int len, int min = 0, int max = 9)
{
	if (a != nullptr)
	{
		for (int i = 0; i < len; ++i)
		{
			a[i] = rand() % (max - min + 1) + min;
		}
	}
}

void expandIntArrayMinus(int** a, int *len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			*(newArray + i + 1) = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}

void expandIntArrayPlus(int** a, int* len)
{
	int* newArray = initIntArray(*len + 1);
	if (newArray != nullptr)
	{
		for (int i = 0; i < *len; ++i)
		{
			newArray[i] = (*a)[i];
		}
		free(*a);
		*a = newArray;
		(*len)++;
	}
}

void addElementToEnd(int** a, int* len, int element)
{
	expandIntArrayPlus(a, len);
	(*a)[*len - 1] = element;
}

void addElementToFront(int** a, int* len, int element)
{
	expandIntArrayMinus(a, len);
	(*a)[0] = element;
}

void printMenu()
{
	printf("0 - exit\n");
	printf("1 - print array\n");
	printf("2 - add to front\n");
	printf("3 - add to end\n");
}

int main(int argc, char* argv[])
{
	srand(time(0));
	int len = 0;
	scanf_s("%d", &len);
	int* a = initIntArray(len);
	randomizeIntArray(a, len);

	bool flag = true;
	while (flag)
	{
		printMenu();
		int choice = 0;
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 0:
		{
			flag = false;
			break;
		}
		case 1:
		{
			printIntArray(a, len);
			break;
		}
		case 2:
		{
			int el = 0;
			scanf_s("%d", &el);
			addElementToFront(&a, &len, el);
			break;
		}
		case 3:
		{
			int el = 0;
			scanf_s("%d", &el);
			addElementToEnd(&a, &len, el);
			break;
		}
		}
	}

	return 0;
}
