#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cin >> n;

  int tab[n];
  int pico = 0;

  // iniciando tab com 0 ou 1
  for (i = 0; i < n; i++)
  {
    cin >> tab[i];
  }
  for (i = 1; i < n - 1; i++)
  {
    if (tab[i] < tab[i + 1] && tab[i] < tab[i - 1])
    {
      cout << "S" << endl;
      return 0;
    }
  }
  cout << "N" << endl;

  return 0;
}