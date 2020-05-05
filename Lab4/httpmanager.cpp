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

void HTTPManager::sendImageRequest()
{
    QNetworkRequest request;
    request.setUrl(QUrl("https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/42.6564%2C-73.7638/13?mapSize=600,300&format=png&key=AoLLJJeW0xF8gjEZ6-71Eau51VikeN-rpx7bZEu-pE_TeRmEACZeA3ShPIBern3_"));
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
