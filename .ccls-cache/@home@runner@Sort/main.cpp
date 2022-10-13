#include <iostream>
using namespace std;


int main() {//5 3 4 1 7 2
int n;
  cin >> n;
  int smalls_Days;
  int u = 0;
  for (int i = 0; i < n; i++)
    {
      int day;
      cin >> day;
      
      if (smalls_Days > day)
      {
        smalls_Days = day;
        u++;
        }
    }
  cout << u;
  
return 0;
  }
