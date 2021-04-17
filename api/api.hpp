#ifndef API_H
#define API_H

#include <string>
#include <stack>
#include <memory>

// this is the necessary qt to use the public api
// in the future, conan will be able to use only
// some components

#include <QJsonDocument>



class khanWarsAPI
{

private:
  class khanWarsAPIimpl;
  std::unique_ptr<khanWarsAPIimpl> impl;
public:
  khanWarsAPI(std::string username,std::string password);
  khanWarsAPI(khanWarsAPI&& other);
  khanWarsAPI(const khanWarsAPI& other);
  ~khanWarsAPI();
  void castles();
  std::stack<QJsonDocument> avaliableElements();
};

#endif
