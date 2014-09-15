/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

#include<stdio.h>
#include<stdlib.h>
#include"../inc/stos.h"

struct stack *top = NULL;    /* pointer to the first node of main list. At the beginning list is empty. */
struct stack *mem = NULL;    /* --//-- to the first node of second list (cache) */


/* Push */
int push(struct stack **stos, llint elem) {

  /*new list element*/
  struct stack *new_elem;

  /* memory allocation for the new element */
  new_elem = malloc(sizeof(struct stack));
  if (new_elem == NULL) {
    printf("Error of memory allocation. Addition of new element not possible...\n");
    return 1;
  }
  /* giving value */
  new_elem->value=elem;
  /* placing at the beginning of the stack */
   /* pointer to the previous one */
  new_elem->next=*stos;
   /* "stos" points again to the beginning of the list */
  *stos = new_elem;

  return 0;
}

/* Pop */
int pop(struct stack **stos, llint *elem) {

  struct stack *to_trash; /*helper*/ 
  
  /* check if the list isn't empty */
  if(empty(*stos) == 1) {
    printf("Error: Not possible to use element. Stack is empty\n");
    return 1;
  }

  to_trash = *stos;
  /*taking the elements value*/
  *elem = (*stos)->value;
  /*getting rid of element*/
  *stos = (*stos)->next;
  /*releasing memory*/
  free(to_trash);

  return 0;
}

/* Empty */
int empty(struct stack *stos) {

  return stos == NULL;

}

/* Print */
void print(struct stack *stos) {

  while(stos != NULL) {
    printf("= %-3d\n", stos->value);
    stos=stos->next;
  }
}

