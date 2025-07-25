#include "decoder.hpp"
#include "encoder.hpp"

std::string caesarDecode(const std::string& text, int shift)
{
	return caesarEncode(text, 26-(shift%26));
}
