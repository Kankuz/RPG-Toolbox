#include "main-window/headers/mainWindow.hpp"
#include <QApplication>

#ifdef IS_TRAVIS
  #include <QTimer>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    #ifdef IS_TRAVIS
      QTimer::singleShot(3000, &a, SLOT(quit()));
    #endif

    return a.exec();
}
