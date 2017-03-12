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

