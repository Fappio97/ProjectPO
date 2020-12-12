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
    ui->AggiungiConferenza->setToolTip("Inserisci una conferenza");
    ui->VaiPaginaConferenze->setToolTip("Inserisci una conferenza");
    ui->AggiungiOrganizzatore->setToolTip("Metti l'organizzatore in una lista");
    ui->AggiungiRivista->setToolTip("Inserisci una rivista");
    ui->VaiPaginaRiviste->setToolTip("Inserisci una rivista");
    ui->SvuotaDivulgazioni->setToolTip("Elimina tutte le conferenze e le riviste");
    ui->VisualizzaDivulgazioni->setToolTip("Visualizza tutte le conferenze e le riviste");
    connect(ui->VisualizzaConferenze, &QPushButton::clicked, this, &MainWindow::on_VaiPaginaDivulgazioni);
    connect(ui->VisualizzaRiviste, &QPushButton::clicked, this, &MainWindow::on_VaiPaginaDivulgazioni);
    ui->VaiPaginaArticoli->setToolTip("Inserisci oppure visualizza gli articoli");
    ui->VisualizzaArticoli->setToolTip("Visualizza tutti gli articoli");
    ui->SvuotaArticoli->setToolTip("Elimina tutti gli articoli");
    ui->AggiungiKeyword->setToolTip("Aggiungi la keyword in una lista da aggiungere all'articolo");
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
    if(gestore.autoreEsistente(ID)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Autore con stesso codice identificativo già presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiAutore(ID, nome, cognome, aff);
    aff.clear();
    ui->CognomeInput->clear();
    ui->NomeInput->clear();
    ui->IDinput->clear();
    ui->AutoriBox->addItem(ID + " " + nome + " " + cognome);
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

void MainWindow::on_AggiungiAfferenza_clicked()
{
    Afferenza a = ui->AfferenzeBox->currentText();
    if( ui->AfferenzeBox->currentText().isEmpty() ){
        QMessageBox mess (QMessageBox::Critical,"Errore","Afferenza non valida",QMessageBox::Ok,this);
        mess.exec();
        return;
    }

    for(auto i = aff.begin(); i != aff.end(); i++) {
        if( (*i) == a ) {
            QMessageBox mess (QMessageBox::Critical,"Errore","Hai già aggiunto questa afferenza",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
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
    if(acronimo.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Acronimo' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString luogo = ui->LuogoInput->text();
    if(luogo.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Luogo' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    if(organizzatori.size() == 0) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi creare una conferenza senza organizzatori",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    int partecipanti = ui->numPartecipanti->value();
    QDate date = ui->CalendarioConferenza->selectedDate();
    QString data = QString::number(date.year()) + "-" + QString::number(date.month()) + "-" + QString::number(date.day());
    if(gestore.divulgazioneEsistente(acronimo)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Conferenza con stesso acronimo già presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiConferenza(nome, acronimo, luogo, data, organizzatori, partecipanti);
    organizzatori.clear();
    ui->NomeInput_2->clear();
    ui->AcronimoInput->clear();
    ui->LuogoInput->clear();
    ui->ConferenzeRivisteBox->addItem(acronimo + " " + nome + " conferenza");
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
    if(ui->ListaOrganizzatori->currentItem() == nullptr) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai selezionato alcun organizzatore",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString organizzatore = ui->ListaOrganizzatori->currentItem()->text();
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++) {
        QString a = ( (*i)->getNome() + " " + (*i)->getCognome() );
        if( organizzatore == a ){
            QMessageBox mess (QMessageBox::Critical,"Errore","Organizzatore già aggiunto in lista",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
    QString nome;
    QString cognome;
    bool spazio = false;
    for(int i = 0; i < organizzatore.size(); i++) {
        if(organizzatore[i] == " ") {
            spazio = true;
            i++;
        }
        if(spazio) {
            cognome += organizzatore[i];
        }
        else
            nome += organizzatore[i];
    }
    organizzatori.push_back(new Persona(nome, cognome));
}

void MainWindow::on_AggiungiRivista_clicked()
{
    QString nome = ui->NomeInput_3->text();
    if(nome.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Nome' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString acronimo = ui->AcronimoInput_2->text();
    if(acronimo.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Acronimo' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString editore = ui->EditoreInput->text();
    if(editore.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non puoi lasciare il campo 'Editore' vuoto",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    int volume = ui->VolumeInput->value();
    QDate date = ui->CalendarioConferenza->selectedDate();
    QString data = QString::number(date.year()) + "-" + QString::number(date.month()) + "-" + QString::number(date.day());
    if(gestore.divulgazioneEsistente(acronimo)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Rivista con tale acronimo già presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiRivista(nome, acronimo, editore, data, volume);
    ui->NomeInput_3->clear();
    ui->AcronimoInput_2->clear();
    ui->EditoreInput->clear();
    ui->ConferenzeRivisteBox->addItem(acronimo + " " + nome + " rivista");
}

void MainWindow::on_VaiPaginaRiviste_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaRiviste);
}


void MainWindow::on_VisualizzaDivulgazioni_clicked()
{
    QString a = gestore.stampaDivulgazioni();
    ui->StampaDivulgazioni->setPlainText(a);
}

void MainWindow::on_SvuotaDivulgazioni_clicked()
{
    ui->StampaDivulgazioni->clear();
    gestore.svuotaDivulgazioni();
}

void MainWindow::on_VaiPaginaDivulgazioni() {
    ui->stackedWidget->setCurrentWidget(ui->PaginaDivulgazioni);
}




void MainWindow::on_VaiPaginaArticoli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaArticoli);
}

void MainWindow::on_AddAutore_clicked()
{
    QString a = ui->AutoriBox->currentText();
    if( ui->AutoriBox->currentText().isEmpty() ){
        QMessageBox mess (QMessageBox::Critical,"Errore","Non hai selezionato alcun autore",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString id;
    for(int i = 0; i < a.size(); i++) {
        if( a[i] == ' ' )
           break;
        id += a[i];
    }
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (**i).getIdentificativo() == id ) {
            QMessageBox mess (QMessageBox::Critical,"Errore","Autore già aggiunto",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
    Autore* c = gestore.restituisciAutore(id);
    autori.push_back( c );
}

void MainWindow::on_VisualizzaArticoli_clicked()
{
    QString a = gestore.stampaArticoli();
    ui->StampaArticoli->setPlainText(a);
}

void MainWindow::on_SvuotaArticoli_clicked()
{
    ui->StampaArticoli->clear();
    gestore.svuotaArticoli();
}

void MainWindow::on_CreaKeyword_clicked()
{
    QString keyword = ui->KeywordInput->text();
    if(keyword.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Inserire un keyword",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    for(auto i = keywords.begin(); i != keywords.end(); i++) {
        if( (*i) == keyword ) {
            QMessageBox mess (QMessageBox::Critical,"Errore","Keyword già inserita",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
    ui->KeywordInput->clear();
    ui->ListaKeyword->addItem(keyword);
}

void MainWindow::on_AggiungiKeyword_clicked()
{
    if(ui->ListaKeyword->currentItem() == nullptr) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai selezionato alcuna keyword",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString keyword = ui->ListaKeyword->currentItem()->text();
    for(auto i = keywords.begin(); i != keywords.end(); i++) {
        if( keyword == (*i) ){
            QMessageBox mess (QMessageBox::Critical,"Errore","Keyword già aggiunta",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
    keywords.push_back(keyword);
}

void MainWindow::on_AggiungiArticolo_clicked()
{
    QString titolo = ui->TitoloInput->text();
    if(titolo.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai inserito il titolo dell'articolo",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString identificativo = ui->IdentificativoInput->text();
    if(identificativo.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai inserito il codice identificativo dell'articolo",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    if(keywords.empty()) {
        int ret=QMessageBox::question(this,"Attenzione", "Non hai inserito alcuna kewyword.\nVuoi continuare lo stesso?");
        if(ret==QMessageBox::No) {
            ui->TitoloInput->clear();
            ui->IdentificativoInput->clear();
            return;
        }
    }
    QString pubblicazione = ui->ConferenzeRivisteBox->currentText();
    if(pubblicazione.isEmpty()) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai inserito alcuna pubblicazione",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString c;
    for(int i = 0; i < pubblicazione.size(); i++) {
        if( pubblicazione[i] == ' ' )
           break;
        c += pubblicazione[i];
    }
    Divulgazione* a = gestore.restituisciDivulgazione(c);

    int pagine = ui->PagineInput->value();
    double prezzo = ui->PrezzoInput->value();
    if(gestore.articoloPresente(identificativo)) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Articolo con questo codice identificativo giò presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiArticolo(identificativo, titolo, pagine, autori, keywords, prezzo, articoli, a);
    ui->TitoloInput->clear();
    ui->IdentificativoInput->clear();
    ui->ArticoliBox->addItem(identificativo + " " + titolo);
    keywords.clear();
    autori.clear();
    articoli.clear();
    pubblicazione.clear();
}

void MainWindow::on_AddArticolo_clicked()
{
    QString a = ui->ArticoliBox->currentText();
    if( ui->ArticoliBox->currentText().isEmpty() ) {
        a = nullptr;
        return;
    }
    QString id;
    for(int i = 0; i < a.size(); i++) {
        if( a[i] == ' ' )
           break;
        id += a[i];
    }
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (**i).getIdentificativo() == id ) {
            QMessageBox mess (QMessageBox::Critical,"Errore","Articolo già aggiunto",QMessageBox::Ok,this);
            mess.exec();
            return;
        }
    }
    Articolo* c = gestore.restituisciArticolo(id);
    articoli.push_back( c );
}
