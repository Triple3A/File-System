#ifndef FILE_H
#define FILE_H

#include "element.h"

class Element;

class File :public Element
{
public:
	File(int _id, std::string _title, std::string _content, int _parent_id);
	virtual void print() const;
	virtual std::string get_type() const;
private:
	std::string content;
};
#endif