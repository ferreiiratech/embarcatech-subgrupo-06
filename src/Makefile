CC = gcc

CFLAGS = -Wall

TARGET = main
SRC = main.c
HEADERS = main.h

build: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

run:
	./main
