# Nome do executável e diretório de saída
TARGET_DIR = ../output
TARGET = $(TARGET_DIR)/main.exe

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -g3

# Arquivos fonte e objeto
SRC = main.c volume_conversion.c
OBJ = $(SRC:.c=.o)

<<<<<<< HEAD
# Regra padrão
all: $(TARGET)
=======
TARGET = main
SRC = main.c size_conversion.c mass_conversion.c shared.c volume_conversion.c storage_conversion.c speed_conversion.c
HEADERS = main.h
>>>>>>> 39b8879f52ff61797ec7fcd9ffe6ee5e57f0bd88

# Regra para criar o diretório e compilar
$(TARGET): $(OBJ)
	mkdir -p $(TARGET_DIR) # Cria o diretório output, se não existir
	$(CC) $(CFLAGS) -o $@ $^

# Compilar os arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
<<<<<<< HEAD
	rm -f $(OBJ) $(TARGET)

# Limpeza completa, incluindo a pasta de saída
cleanall: clean
	rm -rf $(TARGET_DIR)
=======
	rm -r main

run:
	./main
>>>>>>> 39b8879f52ff61797ec7fcd9ffe6ee5e57f0bd88
