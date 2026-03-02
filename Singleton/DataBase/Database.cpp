#include <cstring>
#include <iostream>
#include <mutex>

#include "Database.h"

Database * Database::ptrDatabase = NULL;

Database::Database(char * name)
{
  this->record = 0;
  this->name = new char[20];
  std::strcpy(this->name, name);
}

std::mutex Database::locker;

Database * Database::getInstance(char * name)
{
  locker.lock();
  if (!ptrDatabase)
    ptrDatabase = new Database(name);

  locker.unlock();
  return ptrDatabase;
}

char * Database::getName()
{
  return name;
}



