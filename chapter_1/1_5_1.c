#include <stdio.h>

main(){
  // must declare c to be a type big enough 
  // to hold any value that getchar returns
  int c;

  c = getchar();
  while(c != EOF) {
    putchar(c);
    c = getchar();
  }
}