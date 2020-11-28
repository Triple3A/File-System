#include "file.h"

File::File(int _id, std::string _title, std::string _content, int _parent_id)
	:Element(_id, _title, _parent_id), content(_content) {};

void File::print() const
{
	std::cout << TITLE << title << '\n';
	std::cout << CONTENT << '\n';
	std::cout << content << '\n';
}

std::string File::get_type() const
{
	return _FILE;
}