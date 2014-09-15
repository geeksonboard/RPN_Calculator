# GeeksOnBoard
# 2014
# Makefile

CC=gcc
CFLAGS= -c -Wall --pedantic
LFLAGS=-lm
PLIKI=obj/main.o obj/stos.o obj/rpn.o
INCLUDY= inc/stos.h inc/rpn.h
ZRODLA=src/
OBIEKTY=obj/
INC=inc/
BIN=RPN

.PHONY: clean

$(BIN): $(PLIKI)
	$(CC) $^ -o $@ $(LFLAGS)

clean:
	rm -f $(OBIEKTY)*o 

$(OBIEKTY)main.o: $(ZRODLA)main.c $(INCLUDY)
	$(CC) $< -o $@ $(CFLAGS)

$(OBIEKTY)stos.o: $(ZRODLA)stos.c $(INC)stos.h
	$(CC) $< -o $@ $(CFLAGS)

$(OBIEKTY)rpn.o: $(ZRODLA)rpn.c $(INC)rpn.h
	$(CC) $< -o $@ $(CFLAGS)

