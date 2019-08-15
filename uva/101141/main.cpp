#include <string>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

  int n, p, cont = 1;

  while (scanf("%d %d", &n, &p), n > 0)
  {
    // printf("Case #%d",cont);
    // printf("n: %d p: %d\n", n, p);

    string junk, bestName;

    float bestPrice = 0.0;
    int mostReq = 0;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
      getline(cin, junk);
      // printf("junk: %s\n",junk.c_str());
    }

    for (int pi = 0; pi < p; pi++)
    {

      float price;
      int mr;
      string name;

      getline(cin, name);

      // printf("name: %s\n",name.c_str());

      scanf("%f %d", &price, &mr);
      // printf("price: %f, reqs: %d\n", price, mr);

      cin.ignore();

      for (int i = 0; i < mr; i++)
      {
        getline(cin, junk);
        // printf("junk: %s\n",junk.c_str());
      }

      if (mr > mostReq)
      {
        bestPrice = price;
        bestName = name;
        mostReq = mr;
      }
      else if (mr == mostReq)
      {
        if (price < bestPrice)
        {
          bestPrice = price;
          bestName = name;
          mostReq = mr;
        }
      }
    }

    printf("RFP #%d\n", cont);
    printf("%s\n\n", bestName.c_str());

    cont++;
  }

  return 0;
}
