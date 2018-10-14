#include <iostream>
#include <string>

#include "veiculo.h"

Veiculo::Veiculo (std::string cor_, std::string modelo_, std::string ano_, std::string placa_, Pessoa &propietario_){
	m_cor = cor_;
	m_modelo = modelo_;
	m_ano = ano_;
	m_placa = placa_;
	m_propietario = propietario_;
}

void Veiculo::ligar(){
	std::cout << " Ligou " << std::endl;
}

void Veiculo::andar(){
	std::cout << " Andou " << std::endl;
}

void Veiculo::parar(){
	std::cout << " Parou " << std::endl;
}
