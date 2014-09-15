/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

/*! \file
    \brief Calculator Operations

    File contains functions responsible for mathematical operations.
*/

#ifndef rpn_H
#define rpn_H

#define llint int

/*! \brief Addition

    a+b

    \param a inteeger number
    \param b inteeger number
    \return result of a+b.
*/
llint add(llint a, llint b);

/*! \brief Subtraction

    a-b

    \param a inteeger number
    \param b inteeger number
    \return result of a-b.
*/
llint subtract(llint a, llint b);

/*! \brief multiplication

    a*b

    \param a inteeger number
    \param b inteeger number
    \return result of a*b.
*/
llint multiply(llint a, llint b);

/*! \brief Division

    a/b

    \param a inteeger number
    \param b inteeger number
    \return result of a/b.
*/
llint divide(llint a, llint b);

/*! \brief Exponentiation

    a^b

    \param a inteeger number
    \param b inteeger number
    \return result of a^b.
*/
llint power(llint a, llint b);

/*! \brief roots

    sqrt(a) with base b

    \param a inteeger number a>=0
    \param b inteeger number
    \return root of b level from a.
*/
llint roots(llint a, llint b);

/*! \brief modulo

    a|b

    \param a inteeger number
    \param b inteeger number
    \return result of a|b.
       
*/
llint modulo(llint a, llint b);

/*! \brief logarythm

    logatithm form a with the b base

    \param a inteeger number a>0 and a!=1
    \param b inteeger number b>0
    \return inteeger part of logatithm form a with the b base


*/
llint logarithm(llint a, llint b);

/*! \brief help
    Displays available options by program less,
    reffering to external file 'help'. 
*/
void help(void);

#endif
