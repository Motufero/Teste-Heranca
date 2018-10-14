#include <iostream>
#include <string>

#include "pessoa.h"
#include "veiculo.h"
#include "carro.h"

int main(){
	Pessoa P1;
 
	Carro meuCarro ("vermelho", "fusca", "1998", "placa", P1, 25);

	meuCarro.ligar();
	meuCarro.andar();
	meuCarro.andar();

	meuCarro.printAll();
}
