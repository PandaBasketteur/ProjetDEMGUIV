#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setTypeUtilisateur(int leType);

private slots:
    void on_pushButtonGestionDemenagements_clicked();

    void on_pushButtonGererVehicules_clicked();

    void on_pushButtonGererAbsence_clicked();

    void on_pushButtonCreerAgence_clicked();

    void on_pushButtonCreerDossier_clicked();

    void on_pushButtonModifierDossier_clicked();

    void on_pushButtonConsultDossier_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
