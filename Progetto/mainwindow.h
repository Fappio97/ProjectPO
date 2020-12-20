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
#include "QListWidget"

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

    Gestore* gestore;

private slots:
                               //PULSANTI PER ANDARE AD UNA DETERMINATA PAGINA

    void on_Home_clicked();

    void on_VaiPaginaAutori_clicked();

    void on_VaiPaginaRiviste_clicked();

    void on_VaiPaginaConferenze_clicked();

    void on_VaiPaginaDivulgazioni();

    void on_VaiPaginaArticoli_clicked();

    void on_VaiPaginaVisualizzaArticoli_clicked();

    void on_VaiPaginaPrezziGuadagni_clicked();

    void on_VaiPaginaArticoliOridnati_clicked();

    void on_VaiPaginaRivisteSpecialistche_clicked();

    void on_VaiPaginaOperazioniAvanzate_clicked();



                               //GESTIONE AUTORE

    void on_AggiungiAutore_clicked();

    void on_VisualizzaAutori_clicked();

    void on_CreaAfferenza_clicked();

    void on_SvuotaAutori_clicked();



                               //GESTIONE DIVULGAZIONE

    void on_AggiungiConferenza_clicked();

    void on_CreaOrganizzatore_clicked();

    void on_AggiungiRivista_clicked();

    void on_VisualizzaDivulgazioni_clicked();

    void on_SvuotaDivulgazioni_clicked();



                               //GESTIONE ARTICOLI

    void on_VisualizzaArticoli_clicked();

    void on_SvuotaArticoli_clicked();

    void on_CreaKeyword_clicked();

    void on_AggiungiArticolo_clicked();



                                //SEZIONE B

    void on_VisualizzaArticoliAutore_clicked();

    void on_VisualizzaArticoliConferenza_clicked();

    void on_VisualizzaArticoliStruttura_clicked();

    void on_SvuotaFinestra_clicked();



                                //SEZIONE C

    void on_SvuotaFinestra_2_clicked();

    void on_ArticoliCostosiAutore_clicked();

    void on_EntrateRivista_clicked();

    void on_KeywordMaggiorGuadagno_clicked();



                               //SEZIONE D

    void on_OrdinaConferenze_clicked();

    void on_OrdinaKeyword_clicked();

    void on_SvuotaFinestra_4_clicked();



                               //SEZIONE E

    void on_SvuotaFinestra_3_clicked();

    void on_TastoRivisteSpecilistiche_clicked();



                               //SEZIONE F

    void on_SvuotaFinestra_5_clicked();

    void on_TastoOrdinaCorrelati_clicked();


    void on_TastoConferenzeSimili_clicked();

private:

    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
