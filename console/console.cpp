
#include <console.hpp>
#include <iostream>


console::~console()
{
  
}

console::console(user actualUser,QObject *parent): QThread(parent),sessionUser(actualUser)
{
  
}

void console::run()
{
  std::cout << "User receive correctly" << std::endl;
}

