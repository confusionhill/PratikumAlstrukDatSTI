#include <stdio.h>
#include <stdlib.h>


int main() {
   int n = -1;
   int i = 0;
   int res = 0;
   scanf("%d", &n);
   if (!(n>=1 && n<=1000000)) {
      return 0;
   }
   for (i = 1; i <= n; i++){
      if (n%i == 0){
         res += i;
      }
   }
   printf("%d\n", res);
   return 0;
}