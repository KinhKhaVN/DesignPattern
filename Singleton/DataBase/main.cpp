#include <cstdio>
#include <cstring>
#include <iostream>

#include "Database.h"


int main () {

  Database *DB;
  char * name = new char[20];
  char * otherDatabase = new char[20];

  std::strcpy(name, "Student");
  std::strcpy(otherDatabase, "Class");

  DB = Database::getInstance(name);
  puts(DB->getName());
  std::cout << DB << '\n';
  DB = Database::getInstance(otherDatabase);
  puts(DB->getName());
  std::cout << DB << '\n';

  putchar('\n');

  delete DB;

  return 19;
}
