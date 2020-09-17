// Author: Kyle Kroboth kjk5884@psu.edu
// Section: 2

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n){
  if (n==0){
    ;
  }
  else{
    return (n % 10 + digit_sum(n/10));
  }
  return 0;
}
int main(void) {
  int num = atof(readline("Enter an int: "));
  printf("sum is %d.\n", digit_sum(num));
  return 0;
}