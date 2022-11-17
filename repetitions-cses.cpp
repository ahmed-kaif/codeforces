#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  int total = 0;
  for (int i = 0; i < n; i++ )
    {
      int count = 0;
     for(int j = i; j < n ; j++)
           {
              if(s[i] == s[j] )
             {
               count++;
             }
              else count = 0;
           }
      if(count > total) total = count;
    }
  cout << total << endl;
// problem time limit excced
}
