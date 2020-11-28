#include "file_system_interface.h"

class System_file;

class Command_handler
{
public:
	System_file* search(std::vector<System_file*>, int id);
};