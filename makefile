CC = gcc
CFLAGS = -Wall -Wextra -I./src

TARGET = app

SRC = src/main.c src/math_utils.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)