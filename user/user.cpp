#include <user.hpp>

user::user(std::string username,std::string password,khanWarsAPI&& api) : username(username),password(password),api(std::move(api)) {}
