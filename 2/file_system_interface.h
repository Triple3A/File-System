#ifndef FILE_SYSTEM_INTERFACE_H_
#define FILE_SYSTEM_INTERFACE_H_

#include <string>
#include "main_file_system.h"

class File_system;

class FileSystemInterface
{
public:
	FileSystemInterface();
    void add_directory(int id, std::string title, int parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_link(int id, std::string title, int element_id, int parent_id);
    void view(int id);
private:
	File_system* file_system;
};

#endif