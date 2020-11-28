#ifndef LINK_H
#define LINK_H

#include "element.h"

class Element;

class Link :public Element
{
public:
	Link(int _id, std::string _title, int _element_id, int _parent_id);
	virtual void print() const;
	virtual std::string get_type() const;
	void set_element(Element* _element);
private:
	int element_id;
	Element* element;
};
#endif