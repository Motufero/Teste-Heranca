#ifndef _PESSOA_H_
#define _PESSOA_H_

#include <string>

class Pessoa {

	private:
		std::string m_nome;
	public:
		Pessoa ();
		Pessoa (std::string);

		std::string getNome();
};

#endif
