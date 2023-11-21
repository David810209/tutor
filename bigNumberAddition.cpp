#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    cin.tie(0), ios::sync_with_stdio(0);

    int a[5], b[5];
    int ans[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    int n = 5;
    int carry = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans[i] = a[i] + b[i] + carry;
        if (ans[i] >= 10)
        {
            carry = 1;
            ans[i] -= 10;
        }
        else
            carry = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", ans[i]);
    }
}
/*
1 3 4 9 8
2 6 5 8 4



*/
