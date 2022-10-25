CC = gcc 
CCFLAGS = -O3
LDFLAGS = -lm

all: matmultc

matmultc: main.o matmul.o
    $(CC) -o $@ $^ $(LDFLAGS)
##$(CC) -o matmultc main.o matmul.o     

matmul.o: matmul.c
    $(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) mm.c

main.o: main.c
    $(CC) -c $(CCFLAGS) $<
##$(CC) -c $(CCFLAGS) main.c

clean:
    rm *.o