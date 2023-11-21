#include <bits/stdc++.h>

using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[i + 1] > arr[i])
            {                      // 5 6
                int temp = arr[i]; // 5
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void solve(int arr[], int n)
{
    int pass_low = -1, fail_high = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 60)
        {
            pass_low = arr[i];
            fail_high = arr[i - 1];
            break;
        }
    }
    printf("%d\n%d\n", fail_high, pass_low);
}

int main()
{

    int arr[25];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubble_sort(arr, n);

    if (arr[0] >= 60)
    {
        printf("best case\n");
        printf("%d\n", a[0]);
    }

    else if (arr[n - 1] < 60)
    {
        printf("%d\n", a[n - 1]);
        printf("worst case\n");
    }

    else
    {
        solve(arr, n);
    }
    return 0;
}
/*
1 3 4 9 8
2 6 5 8 4



*/
