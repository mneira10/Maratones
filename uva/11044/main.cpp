#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n ;
  float a,b;
  cin >> n;

  while(n--){
    
    scanf("%f %f", &a, &b); 
    int ans = ceil((a-2)/3.0) * ceil((b-2)/3.0);
    printf("%d\n", ans ); 
  }

  return 0;
}
