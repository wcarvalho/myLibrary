#include "utility_library.h"

using namespace std;

namespace wul
{
	std::string appendStrings(std::string string1, std::string string2, std::string string3, std::string string4, std::string string5)
	{	
		std::stringstream ss; ss.str("");
		ss << string1 << string2 << string3 << string4 << string5;
		return ss.str();
	}
	std::string stringDouble(std::string s, double d)
	{
		stringstream ss; ss.str("");
		ss << s << d;
		return ss.str();
	}
}