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

khanWarsAPI::printContent(QNetworkReply* reply)
{
  auto content = reply.readAll();
}

khanWarsAPI::khanWarsAPI(std::string username, std::string password):impl(std::make_unique<khanWarsAPIimpl>())
{
  impl->m_requestNumber=1;
  QUrl auth("https://www.guerrakhan.com/login/authenticateByCredentials");
  QUrlQueryParams params({{"username",username},{"password",password}});
  connect(m_accessManager,finish(QNetworkReply*),this,printContent); 
  
  
}



khanWarsAPI::~khanWarsAPI() = default;

khanWarsAPI::khanWarsAPI(const khanWarsAPI & other)
{
}

khanWarsAPI::khanWarsAPI(khanWarsAPI&& other) = default;
