#include "FileProperties.h"

namespace wul
{
	FileProperties::FileProperties(std::string FullPath) : fullpath(FullPath) {
			get_filename();
			get_directory();
		}
	FileProperties::~FileProperties(){}

	void FileProperties::get_filename(){
		int pos = fullpath.rfind("/");
		++pos;									// go right beyond location
		filename = fullpath.substr(pos);
	}

	void FileProperties::get_directory(){
		int pos = fullpath.find(filename);
		directory = fullpath.substr(0, pos);
	}

	void FileProperties::copyfile(){
	}

}