#ifndef DROPSITEWINDOW_H
#define DROPSITEWINDOW_H

#include <QWidget>
#include "droparea.h"
#include <QTableWidget>
#include <QPushButton>
#include <QDialogButtonBox>
class DropSiteWindow : public QWidget
{
    Q_OBJECT

public:
    DropSiteWindow(QWidget *parent = nullptr);
    ~DropSiteWindow();
public slots:
    void updateFormatsTable(const QMimeData *mimeData);
    void copy();
private:
    DropArea *dropArea;
    QLabel *abstractLabel;
    QTableWidget *formatsTable;

    QPushButton *clearButton;
    QPushButton *copyButton;
    QPushButton *quitButton;
    QDialogButtonBox *buttonBox;
};
#endif // DROPSITEWINDOW_H
