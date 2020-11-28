#ifndef SYSTEM_FILE_H
#define SYSTEM_FILE_H

#include <iostream>
#include <vector>

const std::string ROOT = "root";
const std::string TITLE = "Title: ";
const std::string TYPE = "Type: ";
const std::string CONTENT = "Content:";
const std::string COMMA = ", ";
const std::string LINK = "link";
const std::string _FILE = "file";
const std::string DIRECTORY = "directory";

class System_file
{
public:
	System_file(int _id, std::string _title, int _parent_id);
	std::string get_title() const;
	int get_id() const;
	virtual void print() const = 0;
	void add_child(System_file* child);
	virtual std::string get_type() const = 0;
protected:
	std::vector<System_file*> childs;
	int id, parent_id;
	std::string title;
};
#endif