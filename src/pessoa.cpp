#include <iostream>
#include <string>

#include "pessoa.h"

Pessoa::Pessoa () {
	m_nome = " Joaozinho ";
}

Pessoa::Pessoa (std::string nome_){
	m_nome = nome_;
}

std::string Pessoa::getNome (){
	return m_nome;
}
