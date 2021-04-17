#include <iostream>
#include <cstdlib>

#include <QCoreApplication>

#include <console.hpp>
#include <user.hpp>
#include <api.hpp>

int main(int argc, char* argv[]) {
  QCoreApplication app(argc,argv);
  std::string username;
  std::string password;
  const char* possibleNullPassword = std::getenv("KHANWARS_PASSWORD");
  const char* possibleNullUsername = std::getenv("KHANWARS_USERNAME");

  if (!possibleNullPassword || !possibleNullUsername) {
      std::cerr << "Please, set a password with KHANWARS_PASSWORD env and a username with KHANWARS_USERNAME env" << std::endl;
      return 1;
  }

  password=possibleNullPassword;
  username=possibleNullUsername;
  khanWarsAPI api(username,password);
  user actualUser(username,password,std::move(api));
  console cli(actualUser);
  cli.start();
  cli.wait();
  return 0;
}

