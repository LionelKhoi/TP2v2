#include "Cesar.h"
#include <iostream>
#include "Encrypt.h"

Cesar::Cesar()
{}

void Cesar::decalage(int nb)
{
	_nombre = nb;
}


void Cesar::decode()
{
	int i;
	int l = _cypher.length();
	int test = 0;
	int decompte = 0;


	for (i = 0;i < l;i++)
	{
		while (test != 1)
		{
			if (decompte < 25)
			{
				_plain = _plain + _cypher[i];
				test = 1;
			}
			else if (_cypher[i] == _Alphabet[decompte])
			{
				decompte = (decompte - _nombre) % 26;
				_plain = _plain + _Alphabet[decompte];
				test = 1;
			}

			decompte += 1;
		}


		decompte = 0;
		test = 0;
	}
}

void Cesar::encode()
{

}