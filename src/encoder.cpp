#include "encoder.hpp"

std::string caesarEncode(const std::string& text, int shift)
{
	std::string result = "";
	for(char ch:text)
	{
		if (ch>='A' && ch<='Z')
		{
			result+=char((ch-'A'+shift)%26+'A');
		}
		else if (ch>='a' && ch <='z')
		{
			result+=char((ch-'a'+shift)%26+'a');
		}
		else result+=ch;
	}
	return result;
}
