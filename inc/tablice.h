/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

/*! \file
    \brief Self made stack operations on the table

    I do not use any library operating on stack. All functions are made by myself in the aim to practice.
*/

#ifndef tablice_H
#define tablice_H

#define llint int

extern llint top[];    /*! \brief Result table.*/
extern int l1;         /*! \brief the highest index in the list*/
extern llint mem[];    /*! \brief Second table. Cache*/
extern int l2;         /*! \brief the highest index in cache*/
extern int i;          /*! \brief reallocation of memory counter*/           

/*! \brief Push

     Adds element "elem" to the beginning of the list "tab".

     \param **tab - pointer to the list 
     \param elem - inteeger
     \return 0 if success, 1 if not
 */
int push(llint** tab, llint elem);

/*! \brief Pop

     Removes element from the top of the stack and returns it

     \param **tab - pointer to the list 
     \param elem - inteeger
     \return 0 if success, 1 if not
 */
int pop(llint** tab, llint* elem);

/*! \brief Empty

    Checks if the list is empty

     \param *tab - pointer to the list 
     \return 0 if full, 1 if empty
 */
int empty(llint *tab);

/*! \brief Print

    Prints the content of the stack list to the stdout

     \param *tab - pointer to the list 
     \return Nothing
 */
void print(llint *tab);

#endif
