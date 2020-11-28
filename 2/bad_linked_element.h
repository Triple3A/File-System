#ifndef _BAD_LINKED_ELEMENT_H
#define _BAD_LINKED_ELEMENT_H

#include <exception>

const char BAD_LINKED_ELEMENT[] = "Invalid element type requested!";

class BadLinkedElement : public std::exception
{
public:
	virtual const char* what() const throw();
};
#endif