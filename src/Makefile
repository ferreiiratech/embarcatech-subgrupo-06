CC = gcc

CFLAGS = -Wall

TARGET = main
SRC = main.c shared.c size_conversion.c mass_conversion.c volume_conversion.c speed_conversion.c
HEADERS = main.h

build: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	del $(TARGET).exe

run:
	.\$(TARGET).exe
