OBJS= main.o 
CO = g++ -o
CC = g++ -c
RM = rm *.o

test: $(OBJS)
	$(CO) test $(OBJS) -lpthread 

main.o : main.cpp
	$(CC) main.cpp


clean:
	$(RM)
