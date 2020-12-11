/*
This file is part of Progetto.

Progetto is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Progetto is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Progetto.  If not, see <http://www.gnu.org/licenses/>.


*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "gestore.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Gestore gestore;

    QList<Afferenza> aff;

    QList<Persona*> organizzatori;

private slots:

    void on_Home_clicked();

    void on_VaiPaginaAutori_clicked();

    void on_AggiungiAutore_clicked();

    void on_VisualizzaAutori_clicked();

    void on_CreaAfferenza_clicked();

    void on_AggiungiAfferenza_clicked();

    bool AfferenzaInLista(const Afferenza&);        // levala

    void on_SvuotaAutori_clicked();

    void on_VaiPaginaConferenze_clicked();

    void on_AggiungiConferenza_clicked();

    void on_SvuotaConferenze_clicked();

    void on_CreaOrganizzatore_clicked();

    void on_AggiungiOrganizzatore_clicked();

    void on_VisualizzaConferenze_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
