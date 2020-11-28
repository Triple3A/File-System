#include "link.h"

Link::Link(int _id, std::string _title, int _element_id, int _parent_id)
	:Element(_id, _title, _parent_id), element_id(_element_id) {};

void Link::print() const
{
	std::cout << TITLE << title << '\n';
	element->print();
} 

void Link::set_element(Element* _element)
{
	element = _element;
}

std::string Link::get_type() const
{
	return LINK;
}