#ifndef SYSTEM_H
#define SYSTEM_H
#include <QObject>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carlocked READ carlocked WRITE setCarlocked NOTIFY carlockedChanged)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged)
    Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
public:
    explicit System(QObject *parent = nullptr);

    bool carlocked() const;

    int outdoorTemp() const;

    QString username() const;

public slots:
    void setcarlocked(bool carlocked);

    void setoutdoorTemp(int outdoorTemp);

    void setusername(QString username);

signals:

    void carlockedChanged(bool carlocked);

    void outdoorTempChanged(int outdoorTemp);

    void usernameChanged(QString username);

private:
    bool m_carlocked;
    int m_outdoorTemp;
    QString m_username;
};

#endif //SYSTEM_H
