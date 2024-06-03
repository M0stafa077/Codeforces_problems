CC = gcc
CFLAGS = -Iinc -Itest/unity
SRC = testing.c ../Unity/src/unity.c
TARGET = test_runner

all: 
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean: 
	rm -f $(TARGET)