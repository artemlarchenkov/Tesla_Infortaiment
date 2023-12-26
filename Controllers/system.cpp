#include "system.h"

System::System(QObject *parent)
    : QObject(parent)
    , m_carlocked(true)
    , m_outdoorTemp (64)
    , m_username ("Artem")
{

}

bool System::carlocked() const
{
    return m_carlocked;
}

int System::outdoorTemp() const
{
    return m_outdoorTemp;
}

QString System::username() const
{
    return m_username;
}

void System::setcarlocked(bool carlocked)
{
    if (m_carlocked == carlocked)
        return;

    m_carlocked = carlocked;
    emit carlockedChanged(m_carlocked);
}

void System::setoutdoorTemp(int outdoorTemp)
{
    if (m_outdoorTemp == outdoorTemp)
        return;

    m_outdoorTemp = outdoorTemp;
    emit outdoorTempChanged(m_outdoorTemp);
}

void System::setusername(QString username)
{
    if (m_username == username)
        return;

    m_username = username;
    emit usernameChanged(m_username);
}
