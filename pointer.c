#include <stdio.h>

int main() {

   int x = 20;
   int * pointer_x = &x;

   if(*pointer_x > 15) {
      return x;
   } 
   else {
      return 12;
   }
}
