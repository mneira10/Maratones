#include <iostream>
using namespace std;

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int num;
        cin >> num;

        long long ans = 1;

        if(num >= 13){
            ans = 8092;
            ans = ans << num-13;
        }
        else{
            ans = ans << num;
        }
    
        

        cout << ans ;

        return 0;
}
