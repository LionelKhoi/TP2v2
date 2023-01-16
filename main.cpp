#include <iostream>
#include "BasicEncrypt.h"
#include "Encrypt.h"
#include "Cesar.h"

int main()
{
	/*
	BasicEncrypt test;
	test.setPlain("7");
	test.setCypher("42");
	test.encode();

	std::cout << test.getCypher() << std::endl;
	*/

	Cesar test;
	test.setCypher("ohv vdqjorwv orqjv ghv ylrorqv gh o'dxwrpqh eohvvhqw prq frhxu g'yqh odqjxhxu prqrwrqh.");
	test.decalage(3);
	test.decode();
	

	std::cout << "Le message " << test.getCypher() << " dechiffre donne : " << test.getPlain() << std::endl;


	return 0;
}

