#include <iostream>
using namespace std;
int main()
{
  int  m, n, tinggi;
  cout << "Program Membuat Segitiga Bintang\n";
  cout << "Masukkan tinggi Segitiga:  ";
  cin >> tinggi;
  for (m = 1; m <= tinggi; m++)
  {
    for (n = 1; n <= m; n++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
}
