#Makefile for both C files
CC = gcc
CFLAGS = -Wall -Wextra -std=c11

#football variablse
FOOTBALL_TARGET = football
FOOTBALL_OBJS = football_main.o football.o

#temperature variables
TEMP_TARGET = temperature
TEMP_OBJS = temperature_main.o temperature.o

.PHONY: all clean
all: $(FOOTBALL_TARGET) $(TEMP_TARGET)

#football build rules
$(FOOTBALL_TARGET): $(FOOTBALL_OBJS)
	$(CC) $(CFLAGS) -o $(FOOTBALL_TARGET) $(FOOTBALL_OBJS)

football_main.o: football_main.c football.h
	$(CC) $(CFLAGS) -c football_main.c

football.o: football.c football.h
	$(CC) $(CFLAGS) -c football.c

#temperature build rules
$(TEMP_TARGET): $(TEMP_OBJS)
	$(CC) $(CFLAGS) -o $(TEMP_TARGET) $(TEMP_OBJS)

temperature_main.o: temperature_main.c temperature.h
	$(CC) $(CFLAGS) -c temperature_main.c

temperature.o: temperature.c temperature.h
	$(CC) $(CFLAGS) -c temperature.c

#clean all files created
clean:
	rm -f $(FOOTBALL_TARGET) $(FOOTBALL_OBJS) $(TEMP_TARGET) $(TEMP_OBJS)
