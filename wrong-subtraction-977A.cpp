#include<bits/stdc++.h>
using namespace std;

long long int n;
int k;

int main()
{
  cin >> n >> k;
  for(int i = 0; i < k; i++)
    {
      if(n%10 == 0) n = n / 10;
      else n = n - 1;
    }
  cout << n;
  return 0;

}
