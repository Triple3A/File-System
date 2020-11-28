#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "element.h"

class Element;

class Directory :public Element
{
public:
	Directory(int _id, std::string _title, int _parent_id);
	void add_child(Element* child);
	virtual void print() const;
	virtual std::string get_type() const;
	bool have_same_title(std::string _title);
private:
	std::vector<Element*> childs;
};
#endif