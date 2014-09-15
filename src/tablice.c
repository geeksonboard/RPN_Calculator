/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

#include<stdio.h>
#include<stdlib.h>
#include"../inc/tablice.h"

llint top[]=malloc(sizeof(llint)*5);   /*main table*/
llint mem[]=malloc(sizeof(llint)*5);   /*second table (cache)*/
int l1=0;                              /*table indeks*/
nt i=1;                                /*counter of elements in the main table and the number of reallocations*/


/* Push */
int push(llint *tab[], llint elem) {

  /*Adding new element to the list*/
  *tab[l1]=elem;
  /*moving the first-element pointer*/
  if(l1=(i-1)*5+4) {
     if(tab[]=realloc(sizeof(llint)*5*(i+1))==NULL) {
        printf("Error of table reallocation! Adding element not possible...\n";
        return 1;
     }
     i++;
  }
  else {
    l1++;
  }

  return 0;
}

/* Pop */
int pop(llint *tab[], llint *elem) {
  
  /* check unless the list is empty */
  if(empty(*tab) == 1) {
    printf("Error: Not possible to use element. List is empty\n");
    return 1;
  }

  /*taking the value*/
  *elem = *tab[--li];

  return 0;
}

/* Empty */
int empty(llint tab[]) {

  return l1==0;

}

/* Print */
void print(llint tab[]) {

  while(l1 != 0) {
    printf("= %-3d\n", tab[--i1]);
  }
}

