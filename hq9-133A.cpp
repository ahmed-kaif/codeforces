#include <bits/stdc++.h>
using namespace std;

int main ()
{
  string p;

  getline(cin, p);

  for(int i = 0; i < p.size(); i++)
    {
      if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9')
      {
        cout << "YES" << "\n";
        return 0;
      }
      else continue;
    }
  cout << "NO";


  return 0;
}
