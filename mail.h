#ifndef MAIL_H
#define MAIL_H

#include <QDialog>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>

namespace Ui {
class Mail;
}

class Mail : public QDialog
{
    Q_OBJECT

public:
    explicit Mail(QWidget *parent = nullptr);
    Mail( const QString &user, const QString &pass,const QString &host, int port = 465, int timeout = 30000 );
    ~Mail();

    void sendMail( const QString &from, const QString &to,
                   const QString &subject, const QString &body,
                   QStringList files = QStringList());

signals:
    void status( const QString &);

private slots:
    void stateChanged(QAbstractSocket::SocketState socketState);
    void errorReceived(QAbstractSocket::SocketError socketError);
    void disconnected();
    void connected();
    void readyRead();

    void sendMail();
    void mailSent(QString);
    void browse();


private:
    Ui::Mail *ui;

    int timeout;
    QString message;
    QTextStream *t;
    QSslSocket *socket;
    QString from;
    QString rcpt;
    QString response;
    QString user;
    QString pass;
    QString host;
    int port;
    enum states{Tls, HandShake ,Auth,User,Pass,Rcpt,Email,Data,Init,Body,Quit,Close};
    int state;
    QStringList files;

};

#endif // MAIL_H
