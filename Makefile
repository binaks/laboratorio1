# Comandos do sistema operacional
RM = rm -f

# Compilador
CC=g++

# Variáveis para os subdiretórios
LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
TEST_DIR=./test

# Opções de compilação
CPPFLAGS = -O0 -g -Wall -pedantic

# Garante que os alvos desta lista não sejam confundidos com arquivos do mesmo nome
.PHONY: all clean distclean doxy

# Define o alvo (target) para a compilação completa
# Define o alvo calculadora como dependência
# Ao final da compilação, remove os arquivos objeto
PROG = calculadora

OBJ = ./build/main.o ./build/area.o ./build/calcarea.o ./build/perimetro.o ./build/calcperimetro.o ./build/volume.o ./build/calcvolume.o  

$(PROG) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$(PROG) $(OBJ)

$(OBJ_DIR)/main.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/main.cpp -o $@ $<

$(OBJ_DIR)/calcarea.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcarea.cpp -o $@ $<

$(OBJ_DIR)/area.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/area.cpp -o $@ $<

$(OBJ_DIR)/perimetro.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/perimetro.cpp -o $@ $<

$(OBJ_DIR)/calcperimetro.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcperimetro.cpp -o $@ $<

$(OBJ_DIR)/volume.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/volume.cpp -o $@ $<

$(OBJ_DIR)/calcvolume.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcvolume.cpp -o $@ $<
	 
clean:
	$(RM) $(OBJ_DIR)/* 