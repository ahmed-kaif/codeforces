#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  //s.find("string") returns the 1st index of the occurance
  if(s.find("0000000") < s.size() || s.find("1111111") < s.size())
    cout << "YES\n";
  else
    cout << "NO\n";
}
