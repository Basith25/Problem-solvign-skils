#include <stdio.h>
int main() {
  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf("Fibonacci Series: %d, %d, ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return 0;
}

Outou:
Enter the number of terms: 5 
Fibonacci Series: 0, 1, 1, 2, 3, 
Saving session...
...copying shared history...
...saving history...truncating history files...
...completed.

[Process completed]
