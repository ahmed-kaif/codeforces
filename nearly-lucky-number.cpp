#include<bits/stdc++.h>
using namespace std;

long long int n;

int main()
{
  
long long int i,lcount =0;
  cin >> n;  
  while(n > 0)
    {
      if(n%10 == 4 || n%10 == 7) 
      {
       lcount++; // number of lucky digits in n
        i++;
        n = n/10;
      }
      else{
        n = n/10;
      }
    }
  
  while(i){
    if(lcount%10 == 4 | lcount%10 == 7)
    {
      lcount--;
    }
    i--;
  }

  if(lcount == 0) cout << "YES\n";
  else cout << "NO\n";
  
  return 0;

}
