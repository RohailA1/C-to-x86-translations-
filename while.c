#include <stdio.h>

int main() {

   int x = 0; 
   while (x < 10) {
      x++;

      if (x % 2 == 0) {
         continue;
      }

      printf("%d is odd.\n",x);
   }
}


