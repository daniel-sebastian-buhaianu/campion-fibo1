#include <fstream>
#define VMAX 46337
using namespace std;
int main()
{
	ifstream f("fibo1.in");
  int n;
  f >> n;
	f.close();
  int fib[n+1];
  fib[0] = 0, fib[1] = 1;
  for (int i = 2; i <= n; i++)
    fib[i] = (fib[i-1] + fib[i-2])%VMAX;
	ofstream g("fibo1.out");
  int i, j, rez;
  if (n%2) rez = 1, i = n/2, j = i+1;
  else rez = 0, j = n/2+1, i = j-2;
  g << rez << '\n' << i << ' ' << j << '\n';
  g << fib[i] << '\n' << fib[j] << '\n' << fib[n];
	g.close();
	return 0;
}

