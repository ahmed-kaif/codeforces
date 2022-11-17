#include <stdio.h>

int main()
{
  int t;
  scanf("%i", &t);
  while(t--)
    {
      int n;
      long long int c, count = 0;
      scanf("%i %lli", &n, &c);
      int a[n];
      for(int i =0; i<n; i++)
        {
          scanf("%i", &a[i]);
          a[i] = a[i]*2; //ith white walker candy
          count = count + a[i];
        }
      if(c >= count) {
        printf("Yes\n");
      }
      else
      {
        printf("No\n");
      }
    }
}
