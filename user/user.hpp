#ifndef USER_H
#define USER_H

#include <string>

#include <api.hpp>

class user
{
private:
  std::string username,password;
  khanWarsAPI api;
public:
  user(std::string username,std::string password,khanWarsAPI&& api);
  user(const user& other) = default;
};
#endif
