#include <cstdio>

int main() 
{
    int a[1000] = { 0 };
    int n = 0;
    scanf_s("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf_s("%d", &a[i]);
    }

    int l = 0, r = 0;
    scanf_s("%d %d", &l, &r);

    --l;
    --r;

    int max_value = a[l];
    int max_index = l;

    for (int i = l; i <= r; ++i)
    {
        if (a[i] > max_value)
        {
            max_value = a[i];
            max_index = i;
        }
    }

    printf("%d %d", max_value, max_index + 1);

    return 0;
}