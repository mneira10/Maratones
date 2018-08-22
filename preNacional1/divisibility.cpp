#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long double k, a, b;
    cin >> k >> a >> b;

    cout<<  floor(b/k)-floor((a-1)/k) ;

    return 0;
}