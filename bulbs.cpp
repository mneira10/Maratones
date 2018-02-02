#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n,m;
        cin>>n>>m;

        vector<bool> b(m);
        for(int i=0; i<b.size(); ++i) {
                b[i] = false;
        }
        int numb;
        for(int i = 0; i<  n; i++) {
                cin>>numb;
                int n1;
                while(numb--) {
                        cin>>n1;
                        b[n1-1] = true;
                }
        }
        bool ans = true;
        for(int i = 0; i<b.size()&& ans; i++) {
                if(b[i]!=true) {
                        ans = false;
                }
        }
        ans ? cout<<"YES" : cout<<"NO";

        return 0;
}
