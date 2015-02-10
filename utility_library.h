#ifndef __WILKASUTILITYLIBRARY__
#define __WILKASUTILITYLIBRARY__

#include <string>
#include <sstream>      // std::stringstream
#include <vector>

namespace wul
{
	// append up to 5 strings together
	std::string appendStrings(std::string string1="", std::string string2="", std::string string3="", std::string string4="", std::string string5="");
	// append double to string
	std::string stringDouble(std::string s, double d);
	void vectorminmax(std::vector<double> const& x, double &min, double &max);
}

#endif