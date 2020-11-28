#include "directory.h"

Directory::Directory(int _id, std::string _title, int _parent_id)
	:Element(_id, _title, _parent_id) {};

void Directory::print() const
{
	std::cout << TITLE << title << '\n';
	for(int i = 0; i < childs.size(); i++)
	{
		std::cout << TITLE << childs[i]->get_title() << COMMA;
		std::cout << TYPE << childs[i]->get_type() << '\n';
	}
} 

std::string Directory::get_type() const
{
	return DIRECTORY;
}

void Directory::add_child(Element* child)
{
	childs.push_back(child);
}

bool Directory::have_same_title(std::string _title)
{
	for(int i = 0; i < childs.size(); i++)
	{
		if(childs[i]->get_title() == _title)
			return true;
	}
	return false;
}