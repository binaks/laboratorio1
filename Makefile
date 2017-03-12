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
DOC_DIR=./doc
TEST_DIR=./test

# Opções de compilação
CPPFLAGS = -O0 -g -Wall -ansi -pedantic

# Garante que os alvos desta lista não sejam confundidos com arquivos do mesmo nome
.PHONY: all clean doxy cleanexec

# Variavel para nome do alvo principal
PROG = calculadora

# Variavel para objetos
OBJ = ./build/main.o ./build/area.o ./build/calcarea.o ./build/perimetro.o ./build/calcperimetro.o ./build/volume.o ./build/calcvolume.o  

# Alvo para a compilação completa
# Define main.o calcarea.o area.o perimetro.o calcperimetro.o volume.o calcvolume.o como dependencia
$(PROG) : $(OBJ)
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CPPFLAGS) -o $(BIN_DIR)/$(PROG) $(OBJ)
	@echo "+++ [Executavel calculadora criado em $(BIN_DIR)] +++"
	@echo "============="

# Alvo para a construçao do objeto main.o
# Define o arquivo main.cpp como dependencia
$(OBJ_DIR)/main.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/main.cpp -o $@ $<

# Alvo para a construçao do objeto calcarea.o
# Define o arquivo calcarea.cpp como dependencia
$(OBJ_DIR)/calcarea.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcarea.cpp -o $@ $<

# Alvo para a construçao do objeto area.o
# Define o arquivo area.cpp como dependencia
$(OBJ_DIR)/area.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/area.cpp -o $@ $<

# Alvo para a construçao do objeto perimetro.o
# Define o arquivo perimetro.cpp como dependencia
$(OBJ_DIR)/perimetro.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/perimetro.cpp -o $@ $<

# Alvo para a construçao do objeto calcperimetro.o
# Define o arquivo calcperimetro.cpp como dependencia
$(OBJ_DIR)/calcperimetro.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcperimetro.cpp -o $@ $<

# Alvo para a construçao do objeto volume.o
# Define o arquivo volume.cpp como dependencia
$(OBJ_DIR)/volume.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/volume.cpp -o $@ $<

# Alvo para a construçao do objeto calcvolume.o
# Define o arquivo calcvolume.cpp como dependencia
$(OBJ_DIR)/calcvolume.o:
	$(CC) $(CPPFLAGS) -c $(SRC_DIR)/calcvolume.cpp -o $@ $<

# Alvo para a geração automatica de documentacao usando o Doxygen.
# Sempre remove a documentacao anterior (caso exista) e gera uma nova.
doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile
	 
# Alvo para limpar arquivos .o gerados apos compilação	 
clean:
	$(RM) $(OBJ_DIR)/*

# Alvo para limpar o executavel
cleanexec:
	$(RM) $(BIN_DIR)/*