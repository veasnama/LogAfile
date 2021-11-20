#include "dropsitewindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QIcon>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "LogA_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    DropSiteWindow w;
    w.setWindowIcon(QIcon(":/res/image/right-arrow1.png"));
    w.show();
    return a.exec();
}
