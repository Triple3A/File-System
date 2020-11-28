#include "system_file.h"

System_file::System_file(int _id, std::string _title, int _parent_id)
	:id(_id), title(_title), parent_id(_parent_id) {};

std::string System_file::get_title() const
{
	return title;
}

int System_file::get_id() const
{
	return id;
}

void System_file::add_child(System_file* child)
{
	childs.push_back(child);
}