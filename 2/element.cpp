#include "element.h"

Element::Element(int _id, std::string _title, int _parent_id)
	:id(_id), title(_title), parent_id(_parent_id) {};

std::string Element::get_title() const
{
	return title;
}

int Element::get_id() const
{
	return id;
}