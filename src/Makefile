CC = gcc

CFLAGS = -Wall

TARGET = main
SRC = main.c size_conversion.c mass_conversion.c shared.c volume_conversion.c storage_conversion.c speed_conversion.c potencia_conversion.c area_conversion.c time_conversion.c temperature_conversion.c
HEADERS = main.h

build: $(TARGET)

$(TARGET): $(SRC) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	del $(TARGET).exe

run:
	.\$(TARGET).exe
