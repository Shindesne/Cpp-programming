#include<iostream>
using namespace std;
  
class GFG{
      
public:
int fib(int n)
{
    // case, n = 0 
    int f[n + 2]; 
    int i; 
    // series are 0 and 1
    f[0] = 0;
    f[1] = 1;
  
    for(i = 2; i <= n; i++)
    {
          
       //Add the previous 2 numbers 
       // in the series and store it
       f[i] = f[i - 1] + f[i - 2];
    }
    return f[n];
    }
};
  
// Driver code
int main ()
{
    GFG g;
    int n = 9;
      
    cout << g.fib(n);
    return 0;
}
