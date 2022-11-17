#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<char> u;
  char x;
  while(!(cin.peek() == '\n'))
    {
      cin >> x;
      u.insert(x);
    }
  if(u.size()%2 == 0) cout << "CHAT WITH HER!" << endl;
  else cout << "IGNORE HIM!\n"; 
}
