
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
#include <stdio.h>
int an(int a1, int n, int d) {
   return (a1 + (n - 1) * d);
}
int main() {
   int a1 = 4;
   int d = 1;
   int n = 6;
   printf("%dtý člen aritmetrické posloupnosti je:%d\n", n, an(a1,n,d));
   return 0;
}

