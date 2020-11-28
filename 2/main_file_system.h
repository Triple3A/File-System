#ifndef MAIN_FILE_SYSTEM_H
#define MAIN_FILE_SYSTEM_H

#include <string>
#include "element.h"
#include "link.h"
#include "file.h"
#include "directory.h"
#include "bad_element_id.h"
#include "id_already_exists.h"
#include "bad_title.h"
#include "bad_parent_id.h"
#include "bad_linked_element.h"

class Element;
class File;
class Directory;
class Link;

class File_system
{
public:
	File_system();
    void add_directory(int id, std::string title, int parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_link(int id, std::string title, int element_id, int parent_id);
    void view(int id);
	Directory* search_directory(int id);
	Element* search_element(int id);
	bool is_id_duplicate(int id);
	bool is_link(Element*);
private:
	std::vector<Element*> elements;
	std::vector<Directory*> dirs;
};

#endif