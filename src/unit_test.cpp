#include <iostream>
#include <string>
#include "encoder.hpp"
#include "decoder.hpp"

void run_unit_test()
{
	std::string text;
	int shift;
	while(true)
	{
		std::cout<<"Enter text (or type 'break' to exit): ";
		std::getline(std::cin, text);
		if(text=="break") break;
		std::cout<<"Enter shift: ";
		std::cin>>shift;
		std::cin.ignore();
		std::string encoded = caesarEncode(text, shift);
		std::string decoded = caesarDecode(encoded, shift);
		std::cout<<"Encoded: "<<encoded<<std::endl;
		std::cout<<"Decoded: "<<decoded<<std::endl;
		if(text==decoded) std::cout<<"Ok! \n";
		else std::cout<<"Something is wrong! \n";
	}
}
