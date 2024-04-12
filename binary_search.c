#include <stdio.h>

int binary_search(int a[], int n, int l, int r);
int main(void)
{
    int index;
    int array[] = {1, 2, 3, 6, 7, 9, 19, 54, 76, 93};

    index = binary_search(array, 3, 0, 9);
    printf("%d", index);
}

int binary_search(int a[], int n, int l, int r)
{
    int mid = l + (r - l) / 2;

    if (n == a[mid]) return mid;
    if (l > r) return -1;
    if (n > a[mid])
        return binary_search(a, n, mid + 1, r);
    if (n < a[mid])
        return binary_search(a, n, l, mid - 1);
    return 0;
}