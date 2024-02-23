#include "system.h"
#include <QDateTime>
#include <QtDebug>

System::System(QObject *parent)
    : QObject(parent)
    , m_carlocked(true)
    , m_outdoorTemp (64)
    , m_username ("Artem")
{
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer->setInterval( 500 );
    m_currentTimeTimer->setSingleShot( true );
    connect ( m_currentTimeTimer, &QTimer::timeout, this, &System::currentTimeTimerTimeout);

    currentTimeTimerTimeout();

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

QString System::currentTime() const
{
    return m_currentTime;
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

void System::setcurrentTime(QString currentTime)
{
    if (m_currentTime == currentTime)
        return;

    m_currentTime = currentTime;
    emit currentTimeChanged(m_currentTime);
}

void System::currentTimeTimerTimeout()
{
    QDateTime dateTime;
    QString currentTime = dateTime.currentDateTime().toString( "hh:mm ap");

    setcurrentTime(currentTime);

    m_currentTimeTimer->start();

}
