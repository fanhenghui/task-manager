#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "stable.h"
#include "ProcessTableModel.h"
#include "PerformanceModel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
private:
    QPoint origin;
    bool isDragging;

    QTimer refreshTimer;
    ProcessTableModel processModel;
    PerformanceModel performanceModel;
    void setupUsagePlots();
private slots:
    void updateUsageOptionIcon();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    static const int REFRESH_RATE;
protected:
    void mousePressEvent(QMouseEvent * event);
    void mouseMoveEvent(QMouseEvent * event);
    void mouseReleaseEvent(QMouseEvent * event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
