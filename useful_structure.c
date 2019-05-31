#include <stdio.h>

int main() {
  typedef struct {
     int a;
     int b;
   } hello;

  hello x;
  x.a = 10;
  x.b = 20;

  printf("The structure contains two integers; %d and %d\n",x.a,x.b);
}
