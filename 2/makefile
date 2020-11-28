CC := g++ -std=c++11

all: 2.out

2.out: main.o element.o file.o directory.o link.o file_system_interface.o main_file_system.o bad_element_id.o id_already_exists.o bad_title.o bad_parent_id.o bad_linked_element.o
	$(CC) main.o element.o file.o directory.o link.o file_system_interface.o main_file_system.o bad_element_id.o id_already_exists.o bad_title.o bad_parent_id.o bad_linked_element.o -o 2.out
	
main.o: file_system_interface.h main.cpp
	$(CC) -c main.cpp -o main.o
	
element.o: element.h element.cpp
	$(CC) -c element.cpp -o element.o
	
file_system_interface.o: file_system_interface.h main_file_system.h file_system_interface.cpp
	$(CC) -c file_system_interface.cpp -o file_system_interface.o
	
file.o: file.h element.h file.cpp
	$(CC) -c file.cpp -o file.o
	
link.o: link.h element.h link.cpp
	$(CC) -c link.cpp -o link.o
	
directory.o: directory.h element.h directory.cpp
	$(CC) -c directory.cpp -o directory.o
	
main_file_system.o: main_file_system.h element.h file.h directory.h link.h bad_element_id.h id_already_exists.h bad_title.h bad_parent_id.h bad_linked_element.h main_file_system.cpp 
	$(CC) -c main_file_system.cpp -o main_file_system.o
	
bad_element_id.o: bad_element_id.h bad_element_id.cpp
	$(CC) -c bad_element_id.cpp -o bad_element_id.o
	
id_already_exists.o: id_already_exists.h id_already_exists.cpp
	$(CC) -c id_already_exists.cpp -o id_already_exists.o
	
bad_title.o: bad_title.h bad_title.cpp
	$(CC) -c bad_title.cpp -o bad_title.o
	
bad_parent_id.o: bad_parent_id.h bad_parent_id.cpp
	$(CC) -c bad_parent_id.cpp -o bad_parent_id.o

bad_linked_element.o: bad_linked_element.h bad_linked_element.cpp
	$(CC) -c bad_linked_element.cpp -o bad_linked_element.o
	
.PHONY: clean
clean:
	rm -r *.o