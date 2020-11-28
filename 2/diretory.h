#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "system_file.h"

class System_file;

class Directory :public System_file
{
public:
	Directory(int _id, std::string _title, int _parent_id);
	virtual void print() const;
	void add_child(System_file child);
private:
	int id, parent_id;
	std::string title;
	std::vector<System_file> childs;
};
#endif