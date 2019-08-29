#include <bits/stdc++.h>

using namespace std;

#define _DEBUG

long long dp[15][205][25];
int arr[205];
int D;

int f(int x, int y)
{
    int temp = (x - y) % D;
    if (temp < 0)
        return temp + D;
    return temp;
}

int main()
{

#ifdef _DEBUG
    freopen("input.txt", "r", stdin);

#endif
    int N, Q;
    int set = 1;
    while (scanf("%d %d", &N, &Q), N && Q)
    {
        // cout << "N: " << N << " Q: " << Q << endl;

        // cin >> N >> Q;
        for (int i = 0; i < N; i++)
        {
            // cout << i << endl;
            int num;
            cin >> num;
            arr[i] = num;
        }
        // cout << "Done reading array" << endl;

        int M;
        for (int q = 0; q < Q; q++)
        {
            cin >> D >> M;
            // cout << "D: " << D << " M: " << M << endl;

            for (int i = 0; i <= M; i++)
                for (int j = 0; j <= N; j++)
                    for (int k = 0; k <= D; k++)
                        dp[i][j][k] = 0;
            // cout << "init array" << endl;

            for (int j = 0; j <= N; j++)
                dp[0][j][0] = 1;
            // cout << "ones" << endl;

            for (int i = 1; i <= M; i++)
            {

                for (int j = 1; j <= N; j++)
                {

                    for (int k = 0; k < D; k++)
                    {

                        dp[i][j][k] = dp[i][j - 1][k] + dp[i - 1][j - 1][f(k, arr[j-1] % D)];
                        // cout<<i<<" "<<j<<" "<<k<<" "<<dp[i][j][k]<<endl;
                        // cout << i << "," << j << "," << k << endl;
                    }
                }
            }

            if(q==0)
                cout << "SET " << set << ":" << endl;
            cout << "QUERY " << q + 1 << ": " << dp[M][N][0] << endl;
        }

        set++;
    }
}