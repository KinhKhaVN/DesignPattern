#ifndef DATABASE_H
#define DATABASE_H

#include <mutex>

class Database
{
  private:
    Database(char * name);
    
    static Database * ptrDatabase;

    int record;
    char * name;
    static std::mutex locker;
  public:
    static Database * getInstance(char * name);
    char * getName();

};




#endif
