#ifndef _BAD_PARENT_ID_H
#define _BAD_PARENT_ID_H

#include <exception>

const char BAD_PARENT_ID[] = "Parent ID is not referring to a directory!";

class BadParentId : public std::exception
{
public:
	virtual const char* what() const throw();
};
#endif