CC = g++
CFLAGS = -std=c++11

ALL : test_LoopsClass

test_LoopsClass : test_LoopsClass.cpp LoopsClass.o
	$(CC) $(CFLAGS) -o test_LoopsClass test_LoopsClass.cpp LoopsClass.o

LoopsClass.o : LoopsClass.cpp
	$(CC) $(CFLAGS) -c LoopsClass.cpp

.PHONY : clean
clean :
	$(RM) *.o test_LoopsClass
