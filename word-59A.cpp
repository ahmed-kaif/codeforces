#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{

  string s;
  cin >> s;

  int up = 0 ,low = 0;
  for(int i= 0; i < s.size(); i++)
  {
    if(isupper(s[i])) up++;
    else if(islower(s[i])) low++;
  }

  if(up > low){
    for(int i =0; i < s.size(); i++) s[i] = toupper(s[i]);
  }
  else
  {
    for(int i =0; i < s.size(); i++) s[i] = tolower(s[i]);
  }
  cout << s;
  
  return 0;

}
