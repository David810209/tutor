#include <bits/stdc++.h>
using namespace std;
int find_biggest(int a1, int b1, int c1, int a2, int b2, int c2, int n)
{
    int ans = -1;
    for (int i = 0; i <= n; i++)
    {
        int x1 = i, x2 = n - i;
        int y1 = a1 * x1 * x1 + b1 * x1 + c1;
        int y2 = a2 * x2 * x2 + b2 * x2 + c2;
        int y = y1 + y2;
        if (y > ans)
        {
            ans = y; // 找最大值
        }
    }

    return ans;
}
int main()
{
    int a1, b1, c1, a2, b2, c2, n;

    scanf("%d %d %d %d %d %d %d", &a1, &b1, &c1, &a2, &b2, &c2, &n);
    int result = find_biggest(a1, b1, c1, a2, b2, c2, n);
    printf("%d\n", result);

    return 0;
}
