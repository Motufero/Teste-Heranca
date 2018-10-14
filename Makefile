CC = g++
OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

PROG = $(BIN)/exec

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/pessoa.o $(OBJ)/veiculo.o $(OBJ)/carro.o $(OBJ)/main.o

all: mkdirs $(PROG)	

mkdirs:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/pessoa.o: $(SRC)/pessoa.cpp $(INC)/pessoa.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/pessoa.cpp -o $(OBJ)/pessoa.o 
	
$(OBJ)/veiculo.o: $(SRC)/veiculo.cpp $(INC)/veiculo.h 
	$(CC) $(CPPFLAGS) -c $(SRC)/veiculo.cpp -o $(OBJ)/veiculo.o

$(OBJ)/carro.o: $(SRC)/carro.cpp $(INC)/carro.h $(OBJ)/veiculo.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/carro.cpp -o $(OBJ)/carro.o 

$(OBJ)/main.o: $(SRC)/main.cpp $(OBJ)/pessoa.o $(OBJ)/veiculo.o $(OBJ)/carro.o 
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o 


clean:
	rm -f $(PROG)/*
	rm -f $(OBJS)/*
