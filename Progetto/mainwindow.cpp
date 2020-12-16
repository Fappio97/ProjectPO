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
    ui->SvuotaAutori->setToolTip("Elimina tutti gli autori");
    ui->AggiungiConferenza->setToolTip("Inserisci una conferenza");
    ui->VaiPaginaConferenze->setToolTip("Inserisci una conferenza");
    ui->AggiungiRivista->setToolTip("Inserisci una rivista");
    ui->VaiPaginaRiviste->setToolTip("Inserisci una rivista");
    ui->SvuotaDivulgazioni->setToolTip("Elimina tutte le conferenze e le riviste");
    ui->VisualizzaDivulgazioni->setToolTip("Visualizza tutte le conferenze e le riviste");
    connect(ui->VisualizzaConferenze, &QPushButton::clicked, this, &MainWindow::on_VaiPaginaDivulgazioni);
    connect(ui->VisualizzaRiviste, &QPushButton::clicked, this, &MainWindow::on_VaiPaginaDivulgazioni);
    ui->VaiPaginaArticoli->setToolTip("Inserisci oppure visualizza gli articoli");
    ui->VisualizzaArticoli->setToolTip("Visualizza tutti gli articoli");
    ui->SvuotaArticoli->setToolTip("Elimina tutti gli articoli");
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

void messaggioInformativo(const QString& informazione, QWidget * parents) {
    QMessageBox mess (QMessageBox::Information,"Informazione", informazione ,QMessageBox::Ok, parents);
    mess.exec();
}

QStringList leggiLista(QList<QListWidgetItem*> a){
    QStringList lista;
    for(auto i = a.begin(); i != a.end(); i++)
        lista.push_back( (*i)->text() );
    return lista;
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


    QStringList a = leggiLista( ui->ListaAfferenze->selectedItems() );
    QList<Afferenza *> afferenze;
    for(auto i = a.begin(); i < a.end(); i++) {
        afferenze.push_back( gestore.restituisciAfferenza( (*i) ) );
    }

    gestore.aggiungiAutore(ID, nome, cognome, afferenze);
    ui->CognomeInput->clear();
    ui->NomeInput->clear();
    ui->IDinput->clear();

    ui->ListaAutori->addItem(ID + " " + nome + " " + cognome);
    ui->AutoreBox->addItem(ID + " " + nome + " " + cognome);
    ui->AutoreBox_2->addItem(ID + " " + nome + " " + cognome);
}

void MainWindow::on_VisualizzaAutori_clicked()
{
    ui->StampaAutori->setPlainText( gestore.stampaAutori() );
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
    ui->ListaAfferenze->addItem(afferenza);
    ui->AfferenzaInput->clear();
    ui->StrutturaBox->addItem(afferenza);
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

    QStringList a = leggiLista( ui->ListaOrganizzatori->selectedItems() );
    QList<Persona *> organizzatori;
    for(auto i = a.begin(); i < a.end(); i++) {
        organizzatori.push_back( gestore.restituisciPersona( (*i) ) );
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
    ui->NomeInput_2->clear();
    ui->AcronimoInput->clear();
    ui->LuogoInput->clear();
    ui->ConferenzeRivisteBox->addItem("Conferenza: " + nome + " " + acronimo);
    ui->ConferenzeBox->addItem("Conferenza: " + nome + " " + acronimo);
    ui->RivistaBox->addItem("Conferenza: " + nome + " " + acronimo);
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

void MainWindow::on_AggiungiRivista_clicked()
{
    QString nome = ui->NomeInput_3->text();
    if(nome.isEmpty()) {
        messaggioAttenzione("Non puoi lasciare il campo 'Nome' vuoto", this);
        return;
    }
    QString acronimo = ui->AcronimoInput_2->text();
    if(acronimo.isEmpty()) {
        messaggioAttenzione("Non puoi lasciare il campo 'Acronimo' vuoto", this);
        return;
    }
    QString editore = ui->EditoreInput->text();
    if(editore.isEmpty()) {
         messaggioAttenzione("Non puoi lasciare il campo 'Editore' vuoto", this);
        return;
    }
    QDate date = ui->CalendarioConferenza->selectedDate();
    QString data = QString::number(date.year()) + "-" + QString::number(date.month()) + "-" + QString::number(date.day());
    if(gestore.divulgazioneEsistente(acronimo)) {
        messaggioErrore("Rivista con tale acronimo già presente", this);
        return;
    }
    gestore.aggiungiRivista(nome, acronimo, editore, data, ui->VolumeInput->value());
    ui->NomeInput_3->clear();
    ui->AcronimoInput_2->clear();
    ui->EditoreInput->clear();
    ui->ConferenzeRivisteBox->addItem("Rivista: " + nome + " " + acronimo);
    ui->RivistaBox->addItem("Rivista: " + nome + " " + acronimo);
}

void MainWindow::on_VaiPaginaRiviste_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaRiviste);
}


void MainWindow::on_VisualizzaDivulgazioni_clicked()
{
    ui->StampaDivulgazioni->setPlainText( gestore.stampaDivulgazioni() );
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

void MainWindow::on_VisualizzaArticoli_clicked()
{
    ui->StampaArticoli->setPlainText( gestore.stampaArticoli() );
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
        messaggioAttenzione("Inserire un keyword", this);
        return;
    }
    if( gestore.keywordEsistente( keyword ) ) {
            messaggioErrore("Keyword già inserita", this);
            return;
    }
    ui->KeywordInput->clear();
    ui->ListaKeyword->addItem(keyword);
    gestore.aggiungiKeywords( keyword );
}

void MainWindow::on_AggiungiArticolo_clicked()
{
    QString titolo = ui->TitoloInput->text();
    if(titolo.isEmpty()) {
        messaggioAttenzione("Non hai inserito il titolo dell'articolo", this);
        return;
    }
    QString identificativo = ui->IdentificativoInput->text();
    if(identificativo.isEmpty()) {
        messaggioAttenzione("Non hai inserito il codice identificativo dell'articolo", this);
        return;
    }
    if(ui->ListaKeyword->selectedItems().isEmpty()) {
        int ret=QMessageBox::question(this,"Attenzione", "Non hai inserito alcuna kewyword.\nVuoi continuare lo stesso?");  //fare la domanda come metodo?
        if(ret==QMessageBox::No) {
            ui->TitoloInput->clear();
            ui->IdentificativoInput->clear();
            return;
        }
    }
    QString pubblicazione = ui->ConferenzeRivisteBox->currentText();
    if(pubblicazione.isEmpty()) {
        messaggioAttenzione("Non hai inserito alcuna pubblicazione", this);
        return;
    }
    if(ui->ListaAutori->selectedItems().isEmpty()) {
        messaggioAttenzione("Non hai selezionato alcun autore", this);
        return;
    }
    QStringList c = pubblicazione.split(" ");
    Divulgazione* a = gestore.restituisciDivulgazione(c[2]);

    if(gestore.articoloPresente(identificativo)) {
        messaggioAttenzione("Articolo con questo codice identificativo già presente", this);
        return;
    }

    QStringList b = leggiLista( ui->ListaKeyword->selectedItems() );
    QList<QString *> keywords;
    for(auto i = b.begin(); i < b.end(); i++) {
        keywords.push_back( gestore.restituisciKeywords( (*i) ) );
    }
    b.clear();

    b = leggiLista( ui->ListaAutori->selectedItems() );
    QList<Autore *> autori;
    QStringList d;
    for(auto i = b.begin(); i < b.end(); i++) {
        QString f = (*i);
        d = f.split(" ");
        autori.push_back( gestore.restituisciAutore (d[0]));
        d.clear();
    }
    b.clear();

    b = leggiLista( ui->ListaArticoli->selectedItems() );
    QList<Articolo *> articoli;
    for(auto i = b.begin(); i < b.end(); i++) {
        QString f = (*i);
        d = f.split(" ");
        articoli.push_back( gestore.restituisciArticolo(d[1]));
        d.clear();
    }
    b.clear();

    gestore.aggiungiArticolo(identificativo, titolo, ui->PagineInput->value(), autori, keywords, ui->PrezzoInput->value(), articoli, a);
    ui->TitoloInput->clear();
    ui->IdentificativoInput->clear();
    ui->ListaArticoli->addItem(titolo + " " + identificativo);
    autori.clear();
    articoli.clear();
    pubblicazione.clear();
}

void MainWindow::on_VisualizzaArticoliAutore_clicked()
{
    if( ui->AutoreBox->currentText().isEmpty() ) {
        QMessageBox mess (QMessageBox::Critical,"Errore","Non hai selezionato alcun autore",QMessageBox::Ok,this);
        mess.exec();
        return;
    }
    QStringList input = ui->AutoreBox->currentText().split(" ");
    Autore* autore = gestore.restituisciAutore( input[0] );
    ui->VisualizzaArticoliDi->setPlainText( "Articoli pubblicati dall' autore " + ui->AutoreBox->currentText()  + '\n' + gestore.stampaArticoliAutore( (*autore) ) );
}


void MainWindow::on_VisualizzaArticoliConferenza_clicked()
{
    if( ui->ConferenzeBox->currentText().isEmpty() ) {
        messaggioErrore("Non hai selezionato alcuna conferenza", this);
        return;
    }
    QStringList input = ui->ConferenzeBox->currentText().split(" ");
    Divulgazione* conferenza = gestore.restituisciDivulgazione( input[2] );
    ui->VisualizzaArticoliDi->setPlainText( "Articoli pubblicati per la conferenza [" + ui->ConferenzeBox->currentText() + "]" + '\n' + gestore.stampaArticoliConferenza (*conferenza) );
}

void MainWindow::on_VisualizzaArticoliStruttura_clicked()
{
    if( ui->StrutturaBox->currentText().isEmpty() ) {
        messaggioErrore("Non hai selezionato alcuna struttura", this);
        return;
    }
    QVector<Autore*> autore;
    Afferenza* a = (new Afferenza(ui->StrutturaBox->currentText()));
    gestore.restituisciAutoreConnessoStruttura( (*a) , autore);
    ui->VisualizzaArticoliDi->setPlainText( "Articoli pubblicati dai membri della struttura " + ui->StrutturaBox->currentText() + '\n' + gestore.stampaArticoliStruttura( autore ) );
    delete a;
    autore.clear();
}

void MainWindow::on_VaiPaginaVisualizzaArticoli_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaVisualizzaArticoli);
}

void MainWindow::on_SvuotaFinestra_clicked()
{
    ui->VisualizzaArticoliPrezzi->clear();
}

void MainWindow::on_PrezziGuadagni_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->PaginaPrezzi);
}

void MainWindow::on_SvuotaFinestra_2_clicked()
{
    ui->VisualizzaArticoliPrezzi->clear();
}

void MainWindow::on_ArticoliCostosiAutore_clicked()
{
    if(ui->AutoreBox_2->currentText().isEmpty()) {
        messaggioErrore("Non hai selezionato alcun autore", this);
        return;
    }
    QStringList input = ui->AutoreBox_2->currentText().split(" ");
    Autore* autore = gestore.restituisciAutore( input[0] );
    QString output = gestore.stampaArticoliAutoreCostosi( (*autore) );
    if(output != nullptr)
        ui->VisualizzaArticoliPrezzi->setPlainText("Articoli più costoso/i pubblicati dall' autore " + ui->AutoreBox->currentText()  + '\n' + output);
    else
       ui->VisualizzaArticoliPrezzi->setPlainText("Non sono presenti articoli di [" + ui->AutoreBox_2->currentText() + "]");
}

bool isNumber(const QString& data) {
    for(int i = 0; i < data.size(); i++) {
        if(data[i] < '0' || data[i] > '9' )
            return false;
    }
    return true;
}

void MainWindow::on_EntrateRivista_clicked()
{
    if( ui->RivistaBox->currentText().isEmpty() ) {
        messaggioErrore("Non hai selezionato alcuna rivista", this);
        return;
    }
    if( !isNumber(ui->AnnoInput->text()) || ui->AnnoInput->text().isEmpty() ) {
        messaggioErrore("Data non valida", this);
        return;
    }
    QStringList input = ui->RivistaBox->currentText().split(" ");
    Divulgazione* a = gestore.restituisciDivulgazione( input[2] );
    int output = gestore.guadagnoDivulgazione( *a, ui->AnnoInput->text());
    QString out;
    if(output == -1)
        out = "La " + ui->RivistaBox->currentText() + " non ha articoli pubblicati" + '\n';
    else
        out = "Guadagno della rivista " + ui->RivistaBox->currentText() + " nell'anno " + ui->AnnoInput->text() + ": " + QString::number(output) + '\n';
    ui->VisualizzaArticoliPrezzi->setPlainText( out );
}

void MainWindow::on_KeywordMaggiorGuadagno_clicked()
{
    QStringList keywords;
    int cont = ui->ListaKeyword->count();
    for(int i = 0; i < cont; i++)
        keywords += ui->ListaKeyword->item(i)->text();

    QStringList a = gestore.keywordMigliorIncasso(keywords);

    QString output = "Keyword";
    if(a.size() > 1)
        output += "s";
    output += " con maggior guadagno:";
    for(int i = 0; i < a.size(); i++)
        output += " '" + a[i] + "'";

    ui->VisualizzaArticoliPrezzi->setPlainText( output );
}

