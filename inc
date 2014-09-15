/* 
   GeeksOnBoard
   20.01.2014
   RPN Calculator
*/

/*! \file
    \brief Program description

    File contains desctiption of program usage.
*/

/*! \brief main.c
     Program call: ./RPN

     PRE:
        None.
     POST:
        Function interprets the command line, calls apropriate operations of
        stack and calculator working on integers.
        Returns 0 when quitted correctly or 1 in case of interruption.
     COMMENTS:
        If help is called program doesn't quit.
        Calculator recognizes 'e' and 'pi' symbols and interprets them as 3.
*/


/* TESTS available only in Polish language:

Testy prowadzone sa zarowno dla wersji ze stosem jak i z tablica. Nie znaleziono roznic.

Lp.  Cel                        Wejscie         Przewidywane wyjscie     Wyjscie          Wynik testu
----------------------------------------------------------------------------------------------------------------------------------------------------
1.   prawidlowe dane            1 +2 3 * + ?    5                        5                pozytywny. Program poprawnie
                                9 4 / ?         2                        2                wykonuje wszystkie zaprogramowane
                                1 8 2 ^ - ?     -63                      -63              dzialania. Wynikiem jest zawsze
                                1 -2 + ?        -1                       -1               liczba calkowita.
                                +6 2 s ?        2                        2                '?' poprawnie wyswietla dane.
                                5 3 % ?         2                        2                
                                4 2 L ?         2                        2                program jest niewrazliwy na male i
                                5 2 l ?         2                        2                duze litery.
                                1 e l ?         0                        0                program rozpoznaje 'e' i 'pi' jako 3.
                                0 E + ?         3                        3
                                2 pi - ?        -1                       -1
                                pI & ?          3 3                      3 3              duplikowanie elementu dziala.
                                2 3 ? # ?       2 3 2                    2 3 2            '#' poprawnie usuwa dane.
                                2 3 ? $ ?       2 3 3 2                  2 3 3 2          '$' poprawnie zamienia 2 argumentu miejscami.
                                help                                                      pomoc dziala i nie konczy pracy programu.
                                3 M 5 C + ?     8                        8                'M' poprawnie zapamietuje dane w pamieci podrecznej,
                                                                                          'C' reprezentuje pierwsza wartosc z pamieci podr.

2.  usuwanie elementow          #               blad                     blad             pozytywny. Program wypisuje blad ale nie
    z pustego stosu.                                                                      konczy dzialania.

3.  zamiana miejscami jednego   2 $             blad                     blad             jw.
    elementu

4.  operacje na zbyt malej      e *             blad                     blad             jw. !!Program pozostawia 'e' nietkniete!!
    liczbie operandow.
                                12 M c + ?      blad i 12                blad i 12.       12 przechodzi do pamieci podrecznej, ale operacja
                                                                                          sie niewykonuje.

5.  losowa rzecz na wejsciu     ukhwu 3 + ?     3                        3                przewidywany. Program traktuje losowe ciagi
                                                                                          znakow jako '0'.
                                eksh 3 + ?      6                        6                chyba ze zaczynaja sie od znakow sterujacych.
                                q5kfd 8 - ?     zakonczenie programu     zakonczenie

6.  przepelnienie zakresu       3456789765456 ? -658907824               -658907824       Przewidywany.

7.  przepelnienie stosu         proba nieudana. blad i zakonczenie       brak mozliwosci  Przewidywany.
                                                pracy programu.          weryfikacji.

8.  odwolanie sie do pustej     8 C + ?         blad                     blad             Pozytywny. Program nie konczy pracy.
    pamieci podrecznej




*/

/* WNIOSKI:
     1. Program dziala poprawnie dla zakresu int. Mozna to latwo zmienic, modyfikujac makrodefinicje w plikach naglowkowych.
     2. Znaki nie bedace cyframi ani znakami sterujacymi sa wczytywane do kalkulatora jako '0'.
     3. Jezeli operacja sie nie powiedzie, program oddaje pobrane operatory spowrotem na stos operacyjny (nawet te pobrane z
        pamieci podrecznej).

*/
