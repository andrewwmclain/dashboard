#include "httpmanager.h"

HTTPManager::HTTPManager(QObject *parent) :
    QObject(parent),
    imageDownloadManager(new QNetworkAccessManager)
{
    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply*)));
}

HTTPManager::~HTTPManager()
{
    delete imageDownloadManager;
}

void HTTPManager::sendImageRequest(QString zip)
{
    QNetworkRequest request;
    QString url = "https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/"
                   + zip +
                   "/13?mapSize=600,300&format=png&key=AoLLJJeW0xF8gjEZ6-71Eau51VikeN-rpx7bZEu-pE_TeRmEACZeA3ShPIBern3_";

    request.setUrl(QUrl(url));
    imageDownloadManager->get(request);
    qDebug() << "Image request sent to address " << request.url();

}

void HTTPManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Image reply has arrived ";
    if(reply->error()){
        qDebug() << reply->errorString();
        return;
    }

    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());

    emit ImageReady(image);
}
