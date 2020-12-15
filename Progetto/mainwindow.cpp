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
    ui->VisualizzaArticoliAutore->setToolTip("Visualizza tutti gli articoli scritti da un autore");
    ui->VisualizzaArticoliStruttura->setToolTip("Visualizza tutti gli articoli scritti da autori che condividono la stessa afferenza");
    ui->VisualizzaArticoliConferenza->setToolTip("Visualizza tutti gli articoli pubblicati in una conferenza");
    ui->VaiPaginaVisualizzaArticoli->setToolTip("Vai alla pagina dove puoi visualizzare gli articoli scritti da ... ");
    ui->SvuotaFinestra->setToolTip("Cancella il contenuto nella finestra sottostante");
    ui->PrezziGuadagni->setToolTip("Visualizza i prezzi ed i guadagni relativi a ... ");
    ui->SvuotaArticoli->setToolTip("Svuota la pagina");
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

void messaggioErrore(const QString& errore, QWidget * parents) {
    QMessageBox mess (QMessageBox::Critical,"Errore", errore ,QMessageBox::Ok, parents);
    mess.exec();
}

void messaggioAttenzione(const QString& attenzione, QWidget * parents) {
    QMessageBox mess (QMessageBox::Warning,"Attenzione", attenzione ,QMessageBox::Ok, parents);
    mess.exec();
}

void MainWindow::on_AggiungiAutore_clicked()
{
    QString ID = ui->IDinput->text();
    if(ID.isEmpty()) {
        messaggioAttenzione("Inserire un id", this);
        return;
    }
    QString nome = ui->NomeInput->text();
    if(nome.isEmpty()) {
        messaggioAttenzione("Inserire un nome", this);
        return;
    }
    QString cognome = ui->CognomeInput->text();
    if(cognome.isEmpty()) {
        messaggioAttenzione("Inserire un cognome", this);
        return;
    }
    if(gestore.autoreEsistente(ID)) {
        messaggioErrore("Autore con stesso codice identificativo già presente", this);
        return;
    }
    gestore.aggiungiAutore(ID, nome, cognome, aff);
    aff.clear();
    ui->CognomeInput->clear();
    ui->NomeInput->clear();
    ui->IDinput->clear();
    ui->AutoriBox->addItem(ID + " " + nome + " " + cognome);
    ui->AutoreBox->addItem(ID + " " + nome + " " + cognome);
    ui->AutoreBox_2->addItem(ID + " " + nome + " " + cognome);
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
        messaggioAttenzione("Inserire un'afferenza", this);
        return;
    }
    if(gestore.afferenzaEsistente(afferenza)) {
           messaggioErrore("Afferenza già esistente", this);
           return;
    }
    gestore.aggiungiAfferenza(afferenza);
    ui->AfferenzeBox->addItem(afferenza);
    ui->AfferenzaInput->clear();
    ui->StrutturaBox->addItem(afferenza);
}

void MainWindow::on_AggiungiAfferenza_clicked()
{
    Afferenza a = ui->AfferenzeBox->currentText();
    if( ui->AfferenzeBox->currentText().isEmpty() ) {
        messaggioAttenzione("Afferenza non valida", this);
        return;
    }
    for(auto i = aff.begin(); i != aff.end(); i++) {
        if( (*i) == a ) {
            messaggioErrore("Hai già aggiunto questa afferenza", this);
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
        messaggioAttenzione("Non puoi lasciare il campo 'Nome' vuoto", this);
        return;
    }
    QString acronimo = ui->AcronimoInput->text();
    if(acronimo.isEmpty()) {
        messaggioAttenzione("Non puoi lasciare il campo 'Acronimo' vuoto", this);
        return;
    }
    QString luogo = ui->LuogoInput->text();
    if(luogo.isEmpty()) {
        messaggioAttenzione("Non puoi lasciare il campo 'Luogo' vuoto", this);
        return;
    }
    if(organizzatori.size() == 0) {
        messaggioAttenzione("Non puoi creare una conferenza senza organizzatori", this);
        return;
    }
    QDate date = ui->CalendarioConferenza->selectedDate();
    QString data = QString::number(date.year()) + "-" + QString::number(date.month()) + "-" + QString::number(date.day());
    if(gestore.divulgazioneEsistente(acronimo)) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Conferenza con stesso acronimo già presente",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    gestore.aggiungiConferenza(nome, acronimo, luogo, data, organizzatori, ui->numPartecipanti->value());
    organizzatori.clear();
    ui->NomeInput_2->clear();
    ui->AcronimoInput->clear();
    ui->LuogoInput->clear();
    ui->ConferenzeRivisteBox->addItem(acronimo + " " + nome + " conferenza");
    ui->ConferenzeBox->addItem(acronimo + " " + nome + " conferenza");
    ui->RivistaBox->addItem(acronimo + " " + nome + " conferenza");
}

void MainWindow::on_CreaOrganizzatore_clicked()
{
    QString nome = ui->NomePersona->text();
    if(nome.isEmpty()) {
        messaggioAttenzione("Inserire il nome della persona organizzatrice", this);
        return;
    }
    QString cognome = ui->CognomePersona->text();
    if(cognome.isEmpty()) {
        messaggioAttenzione("Inserire il cognome della persona organizzatrice", this);
        return;
    }
    if(gestore.personaEsistente(nome, cognome)) {
        messaggioErrore("Persona già esistente", this);

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

QString tagliaSpazio(const QString& a) {
    QString id;
    for(int i = 0; i < a.size(); i++) {
        if( a[i] == ' ' )
           break;
        id += a[i];
    }
    return id;
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
    QString id = tagliaSpazio(a);
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
    if(autori.size() == 0) {
        QMessageBox mess (QMessageBox::Warning,"Attenzione","Non hai inserito alcun autore",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString c = tagliaSpazio( pubblicazione );
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
    QString id = tagliaSpazio(a);
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

void MainWindow::on_VisualizzaArticoliAutore_clicked()
{
    if( ui->AutoreBox->currentText().isEmpty() ) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Non hai selezionato alcun autore",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString input = ui->AutoreBox->currentText();
    QString id = tagliaSpazio(input);
    Autore* autore = gestore.restituisciAutore( id );
    QString output = "Articoli pubblicati dall' autore " + input  + '\n';
    output += gestore.stampaArticoliAutore( (*autore) );
    ui->VisualizzaArticoliDi->setPlainText(output);
}


void MainWindow::on_VisualizzaArticoliConferenza_clicked()
{
    if( ui->ConferenzeBox->currentText().isEmpty() ) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Non hai selezionato alcuna conferenza",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString input = ui->ConferenzeBox->currentText();
    QString id = tagliaSpazio(input);
    Divulgazione* conferenza = gestore.restituisciDivulgazione( id );
    QString output = "Articoli pubblicati per la conferenza [" + input + "]" + '\n';
    output += gestore.stampaArticoliConferenza (*conferenza);
    ui->VisualizzaArticoliDi->setPlainText(output);
}

void MainWindow::on_VisualizzaArticoliStruttura_clicked()
{
    if( ui->StrutturaBox->currentText().isEmpty() ) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Non hai selezionato alcuna struttura",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QString input = ui->StrutturaBox->currentText();
    std::vector<Autore*> autore;
    Afferenza* a = (new Afferenza(input));
    gestore.restituisciAutoreConnessoStruttura( (*a) , autore);
    QString output = "Articoli pubblicati dai membri della struttura " + input + '\n';
    output += gestore.stampaArticoliStruttura( autore );
    ui->VisualizzaArticoliDi->setPlainText(output);
    delete a;
    autore.clear();
}

void MainWindow::on_VaiPaginaVisualizzaArticoli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaVisualizzaArticoli);
}

void MainWindow::on_SvuotaFinestra_clicked()
{
    ui->VisualizzaArticoliDi->clear();
}

void MainWindow::on_PrezziGuadagni_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaPrezzi);
}

void MainWindow::on_SvuotaFinestra_2_clicked()
{
    ui->StampaArticoli->clear();
}

void MainWindow::on_ArticoliCostosiAutore_clicked()
{
    if(ui->AutoreBox_2->currentText().isEmpty()) {
        messaggioErrore("alcun autore", this);
    }
    QString id = tagliaSpazio(ui->AutoreBox->currentText());
    Autore* autore = gestore.restituisciAutore( id );
    QString output = "Articoli pubblicati dall' autore " + ui->AutoreBox->currentText()  + '\n';
    output += gestore.stampaArticoliAutore( (*autore) );
    ui->VisualizzaArticoliDi->setPlainText(output);
}
