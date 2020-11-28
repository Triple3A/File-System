#include "file_system_interface.h"

FileSystemInterface::FileSystemInterface()
{
	file_system = new File_system();	
}

void FileSystemInterface::add_directory(int id, std::string title, int parent_id)
{
	try
	{
		file_system->add_directory(id, title, parent_id);
	}
	catch(std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
}

void FileSystemInterface::add_file(int id, std::string title, std::string content, int parent_id)
{
	try
	{
		file_system->add_file(id, title, content, parent_id);
	}
	catch(std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
}

void FileSystemInterface::add_link(int id, std::string title, int element_id, int parent_id)
{
	try
	{
		file_system->add_link(id, title, element_id, parent_id);
	}
	catch(std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
}

void FileSystemInterface::view(int id)
{
	try
	{
		file_system->view(id);
	}
	catch(std::exception &ex)
	{
		std::cerr << ex.what() << '\n';
	}
}