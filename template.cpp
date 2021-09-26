#include <bits/stdc++.h>

using namespace std;

#define forn(i, n) for (int i = 0; i < n; ++i)

int const N = 512;

int main() {
  int i = 2; int j = 1; int k = 0; int s = 0;
  while (true) {
    char a;
    cin >> a;
    if (a != '\n') break;
    cout << k + j++ << endl;
    ++s;
    if (s == i) {
      s = 0;
      ++i;
      ++j;
    }
  }
}