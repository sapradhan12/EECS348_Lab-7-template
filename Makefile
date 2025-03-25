CC = gcc

CFLAGS = -Wall -Wextra -std=c11

TARGET = football

OBJS = football_main.o football.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

football_main.o: football_main.c football.h
	$(CC) $(CFLAGS) -c football_main.c

football.o: football.c football.h
	$(CC) $(CFLAGS) -c football.c

clean:
	rm -f $(TARGET) $(OBJS)
