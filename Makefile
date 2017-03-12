# Comandos do sistema operacional
RM = rm -rf

# Compilador
CC=g++

# Variáveis para os subdiretórios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./doc
TEST_DIR=./test

# Opções de compilação
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

# Garante que os alvos desta lista não sejam confundidos com arquivos do mesmo nome
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilação completa
# Define o alvo geometrica como dependência
# Ao final da compilação, remove os arquivos objeto
all: geometrica

debug: CFLAGS += -g -O0
debug: geometrica

# Alvo (target) para a construção do executável geometrica
# Define os arquivos main.o, calcarea.o, calcvol.o, calcperimetro.o, area.o, volume.o e perimetro.o como dependências
geometrica: $(OBJ_DIR)/main.o $(OBJ_DIR)/calcarea.o $(OBJ_DIR)/calcvol.o $(OBJ_DIR)/alcperimetro.o $(OBJ_DIR)/area.o $(OBJ_DIR)/volume.o $(OBJ_DIR)/perimetro.o
		@echo "============="
		@echo "Ligando o alvo $@"
		@echo "============="
		$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
		@echo "+++ [Executavel geometrica criado em $(BIN_DIR)] +++"
		@echo "============="