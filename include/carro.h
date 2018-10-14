#ifndef _CARRO_H_	
#define _CARRO_H_

#include <iostream>
#include <string>

#include "veiculo.h"
#include "pessoa.h"

class Carro: public Veiculo{
	private:
		double m_volumePortaMalas;
	public:
		Carro (std::string, std::string, std::string, std::string, Pessoa &, double);
		
		double getVolumePortaMalas ();
		void   setVolumePortaMalas ();
		void ligar();
		void andar();
		void parar();

		void printAll();
};

#endif
