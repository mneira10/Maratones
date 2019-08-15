#include <iostream>
#include <math.h>

int main(int argc, char const *argv[])
{
  float h, u, d, f;
  while (scanf("%f %f %f %f", &h, &u, &d, &f), (h != 0))
  {
    float dist = 0.0;
    float cont = 1.0;
    
    float fatigueDist = (f/100)*u;
    while (true)
    {
      
      float goUp =  u- fatigueDist*(cont-1);
      if(goUp < 0){
        goUp = 0;
      }

      dist += goUp;
      if(dist>h){
        break;
      } 
      
      dist -= d;
      if(dist<0){
        break;
      }
      
      cont++;
      
      
    }

    if (dist > 0.0)
    {
      printf("success on day %d\n", (int)cont);
    }
    else
    {
      printf("failure on day %d\n", (int)cont);
    }
  }
  return 0;
}
