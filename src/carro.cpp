#include <iostream>
#include <string>

#include "carro.h"

Carro::Carro (std::string cor_, std::string modelo_, std::string ano_, 
	std::string placa_, Pessoa &propietario_, double volume_):
	Veiculo (cor_, modelo_, ano_, placa_, propietario_),
	m_volumePortaMalas (volume_) {}


void Carro::ligar() {
	std::cout << " Carro Ligou " << std::endl;
}

void Carro::andar() {
	std::cout << " Carro Andou " << std::endl;
}

void Carro::parar() {
	std::cout << " Carro Parou " << std::endl;
}

void Carro::printAll(){
	std::cout << m_cor << " "  
	<< m_modelo << " "
	<< m_ano << " "
	<< m_placa << " "
	<< m_propietario.getNome() << std::endl; 

}




















