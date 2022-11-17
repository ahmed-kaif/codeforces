#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int t;
  cin >> t;
  while(t--)
    {
      int n, zc=0;
      cin >> n;
      int l[n];
      
      for(int i =0; i<n; i++)
        {
          cin >> l[i];
          if(l[i] == 0) zc++;
        }
      if(!zc) cout << 0 << endl;
      else
        { // there is zero/s
          int first, last;
          for(int i = 0; i < n; i++)
            {
              if(l[i] == 0)
              {
                first = i;
                break;
              }
            }
          for(int i = n - 1; i >= 0; i--)
            {
              if(l[i] == 0)
              {
                last = i;
                break;
              }
            }
          cout << (last + 1) - first + 1 << endl;
        }
    }
  return 0;
}
