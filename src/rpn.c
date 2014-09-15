/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include"../inc/rpn.h"

/*addition*/
llint add(llint a, llint b) {
  return a+b;
}

/*subtraction*/
llint subtract(llint a, llint b) {
  return a-b;
}

/*multiplication*/
llint multiply(llint a, llint b) {
  return a*b;
}

/*division*/
llint divide(llint a, llint b){
  if(b==0) {
    printf("Division domain invaded. Corn dumped.\n");
    exit(1);
  }
  return a/b;
}

/*exponentiation*/
llint power(llint a, llint b) {
  return (llint)pow((double)a, (double)b);
}

/*roots*/
llint roots(llint a, llint b) {
  if(a<0) {
    printf("Roots domain invaded. Corn dumped.\n");
    exit(1);
  }
  return (llint)pow((double)a, 1.0/(double)b);
}

/*modulo*/
llint modulo(llint a, llint b){
  return a%b;
}

/*logarithms*/
llint logarithm(llint a, llint b) {
  if(a<=0 || b<=0 || a==1) {
    printf("Logarithms domain invaded. Corn dumped.\n");
    exit(1);
  }
  return (llint)(log((double)a) / log((double)b));
}

/*help*/
void help(void) {
  char polecenie[10];
  strcpy(polecenie,"less ");
  strcat(polecenie,"help");  
  system(polecenie);
}
