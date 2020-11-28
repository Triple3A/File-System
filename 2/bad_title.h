#ifndef _BAD_TITLE_H
#define _BAD_TITLE_H

#include <exception>

const char BAD_TITLE[] = "Parent directory has the same child!";

class BadTitle : public std::exception
{
public:
	virtual const char* what() const throw();
};
#endif