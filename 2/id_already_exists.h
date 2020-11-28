#ifndef _ID_ALREADY_EXISTS_H
#define _ID_ALREADY_EXISTS_H

#include <exception>

const char Id_Already_Exists[] = "Requested ID already exists!";

class IdAlreadyExists : public std::exception
{
public:
	virtual const char* what() const throw();
};
#endif