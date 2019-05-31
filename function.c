#include <stdio.h>

int x(int y);

int main() {
   printf("x is %d\n", x(3));
}

int x(int y) {

   return y * 7;
}

