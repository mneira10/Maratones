#include <iostream>


int main(int argc, char const *argv[])
{
  /* code */
  int T,N,c;
  int cont = 1;
  scanf("%d",&T);
  while(T--){
    int ans = 0;
    scanf("%d",&N);
    while(N--){
      scanf("%d",&c);
      if( c>ans){
        ans = c;
      }
    }
    printf("Case %d: %d\n",cont,ans);
    cont+=1;
    
  }

  return 0;
}
