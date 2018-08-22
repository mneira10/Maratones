#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int ans = 1;
    string seq = "";
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp==ans){
            ans +=1;
            seq += to_string(2000+i+1)+" ";
        }
    }
    if(ans-1==0){
        cout<<0;
    }
    else{
        cout<<ans-1<<"\n";
        cout<<seq;
    }

    return 0;
}
