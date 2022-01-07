#include <stdio.h>

#define max(x,y) x>=y?x:y

int main(int argc, char*noargs[]) {
  int I, N, V, S = 0, C = 0, T = 0;
  scanf ("%d", &N);
  for (I = 0; I < N; ++I) {
    scanf ("%d", &V);
    if (V == S) C += 1;
    else {
      T = max(T, C);
      C = 1;
      S = V;
    }
  }
  T = max(T, C);
  printf ("%d\n", T);
  return 0;
}
