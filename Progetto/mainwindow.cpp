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

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Home->setToolTip("Vai alla pagina principale");
    ui->VaiPaginaAutori->setToolTip("Inserisci oppure visualizza gli autori");
    ui->AggiungiAutore->setToolTip("Inserisci un autore");
    ui->VisualizzaAutori->setToolTip("Visualizza tutti gli autori");
    ui->CreaAfferenza->setToolTip("Crea una nuova afferenza");
    ui->AggiungiAfferenza->setToolTip("Metti l'afferenza in una lista");
    ui->SvuotaAutori->setToolTip("Elimina tutti gli autori");
    ui->VaiPaginaConferenze->setToolTip("Inserisci conferenze oppure riviste");
    ui->CreaOrganizzatore->setToolTip("Crei un organizzatore");
    ui->SvuotaConferenze->setToolTip("Elimina tutte le conferenze");
    ui->AggiungiConferenza->setToolTip("Inserisci una conferenza");
    ui->VisualizzaConferenze->setToolTip("Visualizza tutte le conferenze");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Home_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaPrincipale);
}

void MainWindow::on_VaiPaginaAutori_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaAutori);
}

void MainWindow::on_AggiungiAutore_clicked()
{
    QString ID = ui->IDinput->text();
    if(ID.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire un ID",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString nome = ui->NomeInput->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire un nome",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString cognome = ui->CognomeInput->text();
    if(cognome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire un cognome",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    if(gestore.autoreEsistente(ID, nome, cognome)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Autore già presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiAutore(ID, nome, cognome, aff);
    aff.clear();
    ui->CognomeInput->clear();
    ui->NomeInput->clear();
    ui->IDinput->clear();
}

void MainWindow::on_VisualizzaAutori_clicked()
{
    QString a = gestore.stampaAutori();
    ui->StampaAutori->setPlainText(a);
}

void MainWindow::on_CreaAfferenza_clicked()
{
    QString afferenza = ui->AfferenzaInput->text();
    if(afferenza.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire un'afferenza",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    if(gestore.afferenzaEsistente(afferenza)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Afferenza già esistente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiAfferenza(afferenza);
    ui->AfferenzeBox->addItem(afferenza);
    ui->AfferenzaInput->clear();
}

bool MainWindow::AfferenzaInLista(const Afferenza& a) {
    for(auto i = aff.begin(); i != aff.end(); i++) {
        if( (*i) == a)
               return true;
    }
    return false;
}

void MainWindow::on_AggiungiAfferenza_clicked()
{
    Afferenza a = ui->AfferenzeBox->currentText();
    if( ui->AfferenzeBox->currentText().isEmpty() ){
        QMessageBox mess (QMessageBox::Critical,"Errore","Afferenza non valida",QMessageBox::Ok,this);
        mess.exec();
        return;
    }

    if(AfferenzaInLista(a)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Hai già aggiunto questa afferenza",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    aff.push_back(a);
}

void MainWindow::on_SvuotaAutori_clicked()
{
    ui->StampaAutori->clear();
   gestore.svuotaAutori();
}

void MainWindow::on_VaiPaginaConferenze_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaConferenze);
}

void MainWindow::on_AggiungiConferenza_clicked()
{
    QString nome = ui->NomeInput_2->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Nome' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString acronimo = ui->AcronimoInput->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Acronimo' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString luogo = ui->LuogoInput->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Luogo' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    int partecipanti = ui->numPartecipanti->value();
    QDate date = ui->CalendarioConferenza->selectedDate();
    QString data = QString::number(date.year()) + "-" + QString::number(date.month()) + "-" + QString::number(date.day());
    QString a = ui->ArticoliConferenza->currentText();
    Articolo* articolo = gestore.trovaArticolo(a);
    if(!gestore.divulgazioneEsistente(nome, acronimo, data)){
        gestore.aggiungiConferenza(nome, acronimo, luogo, data, organizzatori, partecipanti, articolo);
    }
}

void MainWindow::on_SvuotaConferenze_clicked()
{
    ui->StampaConferenze->clear();
//    gestore.rimuoviDivulgazione();    //come eliminare soltanto le conferenze?
}

void MainWindow::on_CreaOrganizzatore_clicked()
{
    QString nome = ui->NomePersona->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire il nome della persona organizzatrice",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString cognome = ui->CognomePersona->text();
    if(cognome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire il cognome della persona organizzatrice",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    if(gestore.personaEsistente(nome, cognome)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Persona già esistente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiPersona(nome, cognome);
    ui->ListaOrganizzatori->addItem(nome + " " + cognome);
    ui->NomePersona->clear();
    ui->CognomePersona->clear();
}

void MainWindow::on_AggiungiOrganizzatore_clicked()
{
    QString organizzatore = ui->ListaOrganizzatori->currentItem()->text();
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++) {
        QString a = ( (*i)->getNome() + " " + (*i)->getCognome() );
        if( organizzatore == a ){
            QMessageBox mess (QMessageBox::Critical,"Errore","Organizzatore già aggiunto in lista",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
 //   organizzatori.push_back()       //non so come costruire gli organizzatori dato che la list view mi restituisce un'intera stringa
}

void MainWindow::on_VisualizzaConferenze_clicked()
{
    QString a = gestore.stampaDivulgazioni();
    ui->StampaConferenze->setPlainText(a);
}
