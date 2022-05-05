// Malcolm Case
// COSC-1437
// Professor McMillan
// Built 05/04/2022
// This program solves the Towers of Hanoi problem

#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, int a, int b, int c)
{
  if (n == 0)
  {
    return;
  }
  else
  {
    towerOfHanoi(n - 1, a, c, b);
    cout << "Move piece #" << n;
    cout << " from peg " << a;
    cout << " to peg " << b << endl;
    towerOfHanoi(n - 1, c, b, a);
  }
}

int main()
{
  int n;
  cout << "Please enter number of rods for Tower of Hanoi\n";
  cin >> n;
  cout << endl;
  towerOfHanoi(n, 1, 3, 2);

  //Recursion is when a function calls itself within the same function...
  //Examples include the towerOfHanoi and recursion functions above...
  
  return 0;
}