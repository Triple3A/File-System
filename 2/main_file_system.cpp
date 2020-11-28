#include "main_file_system.h"

File_system::File_system()
{
	Directory* dir = new Directory(0, ROOT, 0);
	elements.push_back(dir);
	dirs.push_back(dir);
}

void File_system::add_directory(int id, std::string title, int parent_id)
{
	if(is_id_duplicate(id))
		throw IdAlreadyExists();
	Directory* parent = search_directory(parent_id);
	if(parent->have_same_title(title))
		throw BadTitle();
	Directory* dir = new Directory(id, title, parent_id);
	elements.push_back(dir);
	dirs.push_back(dir);
	parent->add_child(dir);
}

void File_system::add_file(int id, std::string title, std::string content, int parent_id)
{
	if(is_id_duplicate(id))
		throw IdAlreadyExists();
	Directory* parent = search_directory(parent_id);
	if(parent->have_same_title(title))
		throw BadTitle();
	File* file = new File(id, title, content, parent_id);
	elements.push_back(file);
	parent->add_child(file);
}

void File_system::add_link(int id, std::string title, int element_id, int parent_id)
{
	if(is_id_duplicate(id))
		throw IdAlreadyExists();
	Directory* parent = search_directory(parent_id);
	if(parent->have_same_title(title))
		throw BadTitle();
	Element* element = search_element(element_id);
	if(is_link(element))
		throw BadLinkedElement();
	Link* _link = new Link(id, title, element_id, parent_id);
	_link->set_element(element);
	elements.push_back(_link);
	parent->add_child(_link);
}

void File_system::view(int id)
{
	search_element(id)->print();
}

Directory* File_system::search_directory(int id)
{
	for(int i = 0; i < dirs.size(); i++)
	{
		if(dirs[i]->get_id() == id)
			return dirs[i];
	}
	throw BadParentId();
}

Element* File_system::search_element(int id)
{
	for(int i = 0; i < elements.size(); i++)
	{
		if(elements[i]->get_id() == id)
			return elements[i];
	}
	throw BadElementId();
}

bool File_system::is_id_duplicate(int id)
{
	for(int i = 0; i < elements.size(); i++)
	{
		if(elements[i]->get_id() == id)
			return true;
	}
	return false;
}

bool File_system::is_link(Element* element)
{
	if(element->get_type() == LINK)
		return true;
	return false;
}
