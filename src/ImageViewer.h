#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QWidget>

namespace Ui {
class ImageViewer;
}

class ImageViewer : public QWidget
{
    Q_OBJECT

public:
    explicit ImageViewer(QWidget* parent = nullptr);
    ~ImageViewer() override;

    void resetImage();
    void setImage(const QImage& image);

public slots:
    void openPrintImageDialog();

private slots:
    void scaleToFitWindow(bool enabled);
    void scaleImage(int scale);

private:
    Ui::ImageViewer* ui;

    QSize m_image_size;
};

#endif
