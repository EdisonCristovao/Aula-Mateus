#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cin >> n;

  int tab[n];
  int ret[n];

  // iniciando tab com 0 ou 1
  for (i = 0; i < n; i++)
  {
    cin >> tab[i];
  }
  cout << endl;
  //criar tab com numero de bombas
  for (i = 0; i < n; i++)
  {
    int bomb = 0;
    // quando existe celula apenas na direita
    if (i == 0)
    {
      if (tab[i] == 1)
      {
        bomb = bomb + 1;
      }
      if (tab[i + 1] == 1)
      {
        bomb = bomb + 1;
      }
    }

    // quando existe celula apenas na esquerda
    else if (i == n - 1)
    {
      if (tab[i] == 1)
      {
        bomb = bomb + 1;
      }
      if (tab[i - 1] == 1)
        bomb = bomb + 1;
    }

    // quando estou no meio
    else
    {
      if (tab[i] == 1)
      {
        bomb = bomb + 1;
      }
      if (tab[i - 1] == 1)
      {
        bomb = bomb + 1;
      }

      if (tab[i + 1] == 1)
      {
        bomb = bomb + 1;
      }
    }
    cout << bomb << endl;
  }

  //  for (i = 0; i < n; i++)
  // {
  //  cout << tab[i];
  //}

  return 0;
}