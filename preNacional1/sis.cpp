#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, h, a, b, k;

    cin >> n >> h >> a >> b >> k;

    for (int i = 0; i < k; i++)
    {
        int ta, fa, tb, fb;
        cin >> ta >> fa >> tb >> fb;
        long long ans = abs(ta - tb);
        int floort = fa;
        if (ta == tb)
        {
            ans += abs(fa - fb);
        }
        else
        {
            if (fa < a)
            {
                ans += a - fa;
                floort = a;
            }
            else if (fa > b)
            {
                ans += fa - b;
                floort = b;
            }
            ans += abs(floort - fb);
        }

        cout << ans << "\n";
    }

    return 0;
}
