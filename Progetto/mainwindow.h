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
#include<vector>

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

    QList<Autore *> autori;

    QList<QString> keywords;

    QList<Articolo *> articoli;

private slots:

    void on_Home_clicked();

    void on_VaiPaginaAutori_clicked();

    void on_AggiungiAutore_clicked();

    void on_VisualizzaAutori_clicked();

    void on_CreaAfferenza_clicked();

    void on_AggiungiAfferenza_clicked();

    void on_SvuotaAutori_clicked();

    void on_VaiPaginaConferenze_clicked();

    void on_AggiungiConferenza_clicked();

    void on_CreaOrganizzatore_clicked();

    void on_AggiungiOrganizzatore_clicked();

    void on_AggiungiRivista_clicked();

    void on_VaiPaginaRiviste_clicked();

    void on_VisualizzaDivulgazioni_clicked();

    void on_SvuotaDivulgazioni_clicked();

    void on_VaiPaginaDivulgazioni();

    void on_VaiPaginaArticoli_clicked();

    void on_AddAutore_clicked();

    void on_VisualizzaArticoli_clicked();

    void on_SvuotaArticoli_clicked();

    void on_CreaKeyword_clicked();

    void on_AggiungiKeyword_clicked();

    void on_AggiungiArticolo_clicked();

    void on_AddArticolo_clicked();

    void on_VisualizzaArticoliAutore_clicked();

    void on_VisualizzaArticoliConferenza_clicked();

    void on_VisualizzaArticoliStruttura_clicked();

    void on_VaiPaginaVisualizzaArticoli_clicked();

    void on_SvuotaFinestra_clicked();

    void on_PrezziGuadagni_clicked();

    void on_SvuotaFinestra_2_clicked();

    void on_ArticoliCostosiAutore_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
