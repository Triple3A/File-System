#include "commandhandler.h"

System_file* Command_handler::search(std::vector<System_file*> storage, int id)
{
	for(int i = 0; i < storage.size(); i++)
	{
		if(storage[i]->get_id() == id)
			return storage[i];
	}
}