#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, f;
    cin >> n >> f;
    vector<int> values;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        values.push_back(temp);
    }

    sort(values.begin(), values.end(),greater<int>());
    int cont = 0 ;
    for (int i = 0; i < n && f>0; i++)
    {
        f-=values[i];
        cont ++ ;
    }
    cout<<cont;
    return 0;
}
