#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  for(int i=0; i< t; i++)
    {
      // TODO: Input vector
      vector<int> n(10000);
      while(true)
        {
          int x;
          cin >> n[i];
          if(cin.get() == '\n') break;
          else n.push_back(x);
        }

      for(int i = n.size(); i >=0; i--)
        {
          if(n[i] == 0) continue;
          else{
              cout << n[i]*pow(10,(n.size() - i)) << " ";
            }
        }
      cout << i<< endl;
    }
  return 0;
}
