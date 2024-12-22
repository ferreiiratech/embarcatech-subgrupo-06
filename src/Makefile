CC = gcc
CFLAGS = -Wall -Wextra -g3
TARGET = main
SRC = main.c size_conversion.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) -o $@ $^

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    del $(OBJ) $(TARGET).exe

run: all
    .\$(TARGET).exe
