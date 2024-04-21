#include <QCoreApplication>
#include <QDateTime>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDate d = QDate::currentDate();
    QTime t = QTime::currentTime();
    // qDebug()<<"year:"<<d.year()<<"month:"<<d.month()<<"day:"<<d.day();
    // qDebug()<<d.toString("yyyy-MMM-dd ")+t.toString("hh:mm:ss.zzz");

    // QDateTime dt{d,t};
    // qDebug()<<dt.date().toString("yyyy-MMM-dd ")+dt.time().toString("hh:mm:ss.zzz");

    QDateTime dt = QDateTime::currentDateTime();
    //如果不写ap参数，那么使用24小时制，否则为12小时制 + am/pm
    qDebug()<<dt.date().toString("yyyy-MMM-dd ")+dt.time().toString("hh:mm:ss.zzz ap");


    return a.exec();
}
