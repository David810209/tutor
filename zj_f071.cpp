#include <bits/stdc++.h>
using namespace std;
int count_money(int A[], int B[], int a, int b, int c)
{
    int money = 0;
    int third = 0;
    for (int i = 0; i < 5; i++)
    {
        if (a == A[i])
        {
            money += B[i];
        }
        if (b == A[i])
        {
            money += B[i];
        }
        if (c == A[i])
        {
            money -= B[i];
            third = 1;
        }
    }
    if (third == 0)
    {
        money *= 2;
    }
    if (money < 0)
    {
        money = 0;
    }
    return money;
}

int main()
{
    int a, b, c;
    int A[5], B[5];

    scanf("%d %d %d", &a, &b, &c);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &B[i]);
    }
    printf("%d\n", count_money(A, B, a, b, c));

    return 0;
}
