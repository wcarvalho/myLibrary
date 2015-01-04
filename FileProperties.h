#ifndef __WILKAFILEPROPERTIES__
#define __WILKAFILEPROPERTIES__

#include <iostream>
#include <string>

namespace wul
{
	class FileProperties 
	{
	public:
		FileProperties(std::string FullPath);
		~FileProperties();

		void get_filename();
		void get_directory();
		void copyfile();
		void setnewpath(std::string newpath){ fullpath = newpath; get_filename(); get_directory(); }
		void change_directory(std::string direc){
			fullpath = direc.append(filename); get_filename(); directory = direc;
		}
		void appendFileToDirectory(std::string directory, std::string &file){
			file = directory.append(file);
		}
		
		std::string suffix;
		std::string fullpath;
		std::string filename;
		std::string directory;
	};
}

#endif