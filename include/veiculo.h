#ifndef _VEICULO_H_
#define _VEICULO_H_


#include <iostream>
#include <string>

#include "pessoa.h"

class Veiculo {
	protected:
		std::string m_cor;
		std::string m_modelo;
		std::string m_ano;
		std::string m_placa;
		Pessoa m_propietario;
	public:
		Veiculo (std::string cor_, std::string modelo_, std::string ano_, std::string placa_, Pessoa &propietario_);

		void ligar();
		void andar();
		void parar();
};

#endif

//classes -> pessoa, veiculo, carro,
//instanciar o  "fusca de joao"
