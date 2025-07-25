#include <iostream>
#include <string>
#include "encoder.hpp"
#include "decoder.hpp"

int main()
{
	std::string text;
	int shift;
	std::cout<<"Enter text: ";
	getline(std::cin, text);
	std::cout<<"Enter shift: ";
	std::cin>>shift;
	std::string encoded = caesarEncode(text, shift);
	std::string decoded = caesarDecode(text, shift);
	std::cout<<"\nEncoded text: "<<encoded<<std::endl;
	std::cout<<"Decoded text: "<<decoded<<std::endl;
}
