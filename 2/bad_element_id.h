#ifndef _BAD_ELEMENT_ID_H
#define _BAD_ELEMENT_ID_H

#include <exception>

const char BAD_ELEMENT_ID[] = "Invalid element ID requested!";

class BadElementId : public std::exception
{
public:
	virtual const char* what() const throw();
};
#endif
