#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h[105];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &h[i]) l
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (h[i] == 0)
        {
            if (i == 0)
            {
                ans += h[1];
            }
            else if (i == n - 1)
            {
                ans += h[n - 2];
            }
            else
            {
                if (h[i - 1] >= h[i + 1])
                {
                    ans += h[i + 1];
                }
                else
                {
                    ans += h[i - 1];
                }
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
