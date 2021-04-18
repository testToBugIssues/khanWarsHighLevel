#ifndef CONSOLE_H
#define CONSOLE_H
#include <QThread>
#include <QObject>
#include <user.hpp>

class console : public QThread
{
      Q_OBJECT
public:
  console(user sessionUser,QObject* parent=nullptr);
  ~console();
private:
  user sessionUser;
protected:
  void run() override;
signals:
  void someBuzzWord();

};
#endif
