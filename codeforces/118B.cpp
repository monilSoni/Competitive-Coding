#include<bits/stdc++.h>
using namespace std;

int main () {
  int n;
  scanf ("%d", &n);
  ++n;
  for (int i = 0; i <= 2 * n - 2; i++) {
    int j = i;
    if (j >= n) j = 2 * n - 2 - i;
    for (int k = 0; k < n - j - 1; k++) printf ("  ");
    if (j) for (int k = 0; k <= j; k++) printf ("%d ", k);
    for (int k = j - 1; k > 0; k--) printf ("%d ", k);
    puts("0");
  }
  return 0;
}

