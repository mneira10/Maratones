#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>    // std::min
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n;
        cin>>n;
        vector<long> nums;
        while(n--) {
                int temp;
                cin>>temp;
                nums.push_back(temp);
        }
        long pmin = 0;
        long pmax = 0;
        long min = nums[0];

        for(int i = 0; i<nums.size(); i++) {
                if(nums[i]<min) {
                        min = nums[i];
                        pmin = pmax = i;
                }
                else if(nums[i]==min) {
                        pmax = i;
                }
        }
        long c = nums.size() & INT_MAX;
        long a;
          a = std::min((long)(pmax-pmin),(long)(c-(pmax-pmin)));
        if((long)(pmax-pmin)>=(long)(nums.size()-1)) {
              // cout<<"entras";
              a =(long) pmax-pmin;
        }

        // cout<<a<<"\n"<<pmin<<"\n"<<pmax<<"\n"<<pmax-pmin<<"\n";

        cout<< (long long) (min+1)*nums.size() - (a+1);


        return 0;
}
