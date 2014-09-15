/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

/*! \file
    \brief Self made stack operations on one way list

    I do not use any library operating on stack. All functions are made by myself in the aim to practice.
*/

#ifndef stos_H
#define stos_H

#define llint int


/*! \brief Structure describing the node*/
struct stack {
  llint value;
  struct stack *next;
};

extern  struct stack *top;    /*! \brief pointer to the first node of the main list. At the beginning list is empty. */
extern  struct stack *mem;    /*! \brief pointer to the first node of the second list (cache) */

/*! \brief Push

     Adds element "elem" to the beginning of the list "stos".

     \param **stos - pointer to the list 
     \param elem - inteeger
     \return 0 if success, 1 if not
 */
int push(struct stack** stos, llint elem);

/*! \brief Pop

     Removes element from the top of the stack and returns it

     \param **stos - pointer to the list 
     \param *elem - inteeger
     \return 0 if success, 1 if not
 */
int pop(struct stack** stos, llint* elem);

/*! \brief Empty

    Checks if the list is empty

     \param *stos - pointer to the list 
     \return 0 if full, 1 if empty
 */
int empty(struct stack *stos);

/*! \brief Print

    Prints the content of the stack list to the stdout

     \param *stos - pointer to the list 
     \return Nothing
 */
void print(struct stack *stos);

#endif
