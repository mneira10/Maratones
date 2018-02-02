#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int xr,yr,xw,yw;
        cin>>xr>>yr>>xw>>yw;
        int res = xr*xr + yr*yr -  xw*xw - yw*yw;
        if(res==0){
          cout<<"Empate";
        }else{
          res>0 ? cout<<"Wil" : cout<<"Russo";
        }



        return 0;
}
