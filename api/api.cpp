#include <api.hpp>

#include <QNetworkAccessManager>


class khanWarsAPI::khanWarsAPIimpl
{
public:
  int m_requestNumber;
  std::string m_phpsessionid;
  QNetworkAccessManager m_accessManager;
  std::stack<QJsonDocument> m_results;
  ~khanWarsAPIimpl()=default;
};


khanWarsAPI::khanWarsAPI(std::string username, std::string password):impl(std::make_unique<khanWarsAPIimpl>())
{ 
}



khanWarsAPI::~khanWarsAPI() = default;

khanWarsAPI::khanWarsAPI(const khanWarsAPI & other)
{
}

khanWarsAPI::khanWarsAPI(khanWarsAPI&& other) = default;
