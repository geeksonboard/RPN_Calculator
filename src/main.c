/* 
   GeeksOnBoard
   20.01.2014
   kalkulator RPN
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include"../inc/stos.h" /*#include"../inc/tablice.c"*/
#include"../inc/rpn.h"


int main(void) {

  llint elem0, elem1, elem2;   /* elements to be put in/out the stack */
  char znak[10];               /* orders table */

  /*user interfejs*/
  printf("\n * RPN Calculator"
         "\n * operates on numbers in range from %d to %d"
         "\n * in order to learn available options type \"help\"\n", INT_MIN, INT_MAX);

  while(1) {
    scanf(" %s", znak);

    if(!strcmp(znak, "help")) {
      help();
      continue;
    }

    switch(znak[0]) {
       case '+':
         if(znak[1]=='\0') {
           /*addition*/
           /*taking 2 top elements from the stack */
           if(pop(&top, &elem2)==1) break;
           if(pop(&top, &elem1)==1) {
             push(&top, elem2); /*returning the first element*/
             break;
           }
           /*counting result and putting on the stack*/
           elem0=add(elem1, elem2);
           if(push(&top, elem0)==1) return 1;
         }
         else {
           /*positive number*/
           elem0=atoi(znak);
           /*adding element to the top of the stack */
           if(push(&top, elem0)==1) return 1;
         }
         break;
       case '-':
         if(znak[1]=='\0') {
           /*subtraction*/
           if(pop(&top, &elem2)==1) break;
           if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
           }
           elem0=subtract(elem1, elem2);
           if(push(&top, elem0)==1) return 1;
         }
         else{
           /*negative number*/
           elem1=atoi(znak);
           if(push(&top, elem1)==1) return 1;
         }
         break;
       case '*':
         /*multiplication*/
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=multiply(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case '/':
         /*division*/
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=divide(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case '^':
         /*exponentiation*/
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=power(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case 's':
         /*roots*/
       case 'S':
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=roots(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case '%':
         /*modulo*/
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=modulo(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case 'l':
         /*logarythms*/
       case 'L':
         if(pop(&top, &elem2)==1) break;
         if(pop(&top, &elem1)==1) {
             push(&top, elem2);
             break;
         }
         elem0=logarithm(elem1, elem2);
         if(push(&top, elem0)==1) return 1;
         break;
       case 'M':
         /*memorising*/
       case 'm':
         if(pop(&top, &elem0)==1) break;
         if(push(&mem, elem0)==1) return 1;
         break;
       case 'C':
         /*"ummemorising liczby" - giving it back to operation memory*/
       case 'c':
         if(pop(&mem, &elem0)==1) break;
         if(push(&top, elem0)==1) return 1;
         break;
       case '#':
         /*deleting the last element*/
         if(pop(&top, &elem0)==1) break;
         break;
       case '$':
         /*last 2 arguments change places*/
         if(pop(&top, &elem1)==1) break;
         if(pop(&top, &elem2)==1) {
             push(&top, elem2);
             break;
         }
         if(push(&top, elem1)==1) return 1;
         if(push(&top, elem2)==1) return 1;
         break;
       case '?':
         /*printing the stack*/
         print(top);
         break;
       case '&':
         if(pop(&top, &elem0)==1) break;
         if(push(&top, elem0)==1) return 1;
         if(push(&top, elem0)==1) return 1;
         break;
       case 'P':
       case 'p':
         if(!(znak[1]=='i' || znak[1]=='I')) break;
       case 'e':
       case 'E':
         elem0=3;
         if(push(&top, elem0)==1) return 1;
         break;
       case 'q':
       case 'Q':
         return 0;
       default:
         elem0=atoi(znak);
         /*adding element to the top of the stack */
         if(push(&top, elem0)==1) return 1;
         break;
    }
  }


}
