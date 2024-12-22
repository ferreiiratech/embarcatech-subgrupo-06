# Nome do executável e diretório de saída
TARGET_DIR = ../output
TARGET = $(TARGET_DIR)/main.exe

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -g3

# Arquivos fonte e objeto
SRC = main.c volume_conversion.c
OBJ = $(SRC:.c=.o)

# Regra padrão
all: $(TARGET)

# Regra para criar o diretório e compilar
$(TARGET): $(OBJ)
	mkdir -p $(TARGET_DIR) # Cria o diretório output, se não existir
	$(CC) $(CFLAGS) -o $@ $^

# Compilar os arquivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	rm -f $(OBJ) $(TARGET)

# Limpeza completa, incluindo a pasta de saída
cleanall: clean
	rm -rf $(TARGET_DIR)
