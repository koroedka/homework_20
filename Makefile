TARGET = home2
OBJS = home2.o home2_func.o
CC = gcc
CFLAGS = -Wall -Wextra -g

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

home2.o: home2.c home2_head.h
	$(CC) $(CFLAGS) -c home2.c

home2_func.o: home2_func.c home2_head.h
	$(CC) $(CFLAGS) -c home2_func.c

clean:
	del /Q $(OBJS) $(TARGET).exe 2>NUL