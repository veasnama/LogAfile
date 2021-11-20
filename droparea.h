#ifndef DROPAREA_H
#define DROPAREA_H

#include <QLabel>
#include <QMimeData>
class DropArea : public QLabel
{
    Q_OBJECT
public:
    explicit DropArea(QWidget * parent = nullptr);
public slots:
    void clear();
signals:
    void changed(const QMimeData * mineData = nullptr);

    // QWidget interface
protected:
    void dragEnterEvent(QDragEnterEvent *event);
    void dragMoveEvent(QDragMoveEvent *event);
    void dragLeaveEvent(QDragLeaveEvent *event);
    void dropEvent(QDropEvent *event);
private:
    QLabel * label;
};

#endif // DROPAREA_H
