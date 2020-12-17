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

#include "gestore.h"

/*#include <QVariant>               //interessante

QString stampa(QList<QVariant> a) {
    QString stampa;
    for(auto i = a.begin(); i != a.end(); i++) {
        stampa += a;
    }
}*/



Gestore::Gestore()
{

}


Gestore::Gestore(const Gestore& a) {        //da aggiornare
    for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
        autori.push_back( (*i) );
    }
    for(auto i = a.divulgazioni.begin(); i != divulgazioni.end(); i++) {
        divulgazioni.push_back( (**i).clone() );
    }
    for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
        articoli.push_back( (*i) );
    }
}

Gestore::~Gestore() {       // devi eliminare gli oggetti puntati
    svuotaAutori();
    svuotaDivulgazioni();
    svuotaArticoli();
    svuotaAfferenze();
}

Gestore& Gestore::operator=(const Gestore& a) {     // da aggiornare    ho messo tante cose dinamiche
    if(this != &a) {
        for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
            autori.push_back( (*i) );
        }
        for(auto i = a.divulgazioni.begin(); i != a.divulgazioni.end(); i++) {
            divulgazioni.push_back( (**i).clone() );
        }
        for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
            articoli.push_back( (*i) );
        }
    }
    return (*this);
}


QString* Gestore::restituisciKeywords(const QString& a) const {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        if( (**i) == a )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiKeywords(const QString& a) {
    keywords.push_back(new QString(a));
}

bool Gestore::keywordEsistente(const QString& a) const {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        if( (**i) == a )
            return true;
    }
    return false;
}

void Gestore::svuotaKeywords() {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        delete (*i);
    }
    keywords.clear();
}


Afferenza* Gestore::restituisciAfferenza(const QString& a) const {
    for(auto i = afferenze.begin(); i < afferenze.end(); i++) {
        if( (**i).getNome() == a )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiAfferenza(const QString& _afferenza) {
    afferenze.push_back(new Afferenza(_afferenza));
}

bool Gestore::afferenzaEsistente(const QString& _afferenza) const {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        if( (**i) == _afferenza )
            return true;
    }
    return false;
}

void Gestore::svuotaAfferenze() {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        delete (*i);
    }
    afferenze.clear();
}



Persona* Gestore::restituisciPersona(const QString& a) const {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        QString b = (**i).getNome() + " " + (**i).getCognome();
        if( b == a )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiPersona(const QString& nome, const QString& cognome) {
    persone.push_back(new Persona(nome, cognome));
}

bool Gestore::personaEsistente(const QString& nome, const QString& cognome) const {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        if( (**i).getNome() == nome && (**i).getCognome() == cognome )
                return true;
    }
    return false;
}

void Gestore::svuotaPersone() {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        delete (*i);
    }
    persone.clear();
}




Autore* Gestore::restituisciAutore(const QString& _identificativo) const {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return (*i);
    }
    return nullptr;
}

void Gestore::restituisciAutoreConnessoStruttura(const Afferenza& _afferenza, QVector<Autore*>& autore ) {
    for(auto i = autori.begin(); i != autori.end(); i++ ) {
        if( (*i)->autoreConnessoStruttura(_afferenza) )
            autore.push_back( (*i) );
    }
    return;
}

void Gestore::aggiungiAutore(const QString& _identificativo, const QString& _nome, const QString& _cognome, QList<Afferenza *> _afferenze) {
    autori.push_back(new Autore(_identificativo, _nome, _cognome, _afferenze));
}

bool Gestore::autoreEsistente(const QString& _identificativo) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return true;
    }
    return false;
}

void Gestore::svuotaAutori() {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        delete (*i);
    }
    autori.clear();
}

QString Gestore::stampaAutori() const {
    QString a = nullptr;
    for(auto i = autori.begin(); i != autori.end(); i++) {
          a += (**i).stampa();
    }
    return a;
}




Divulgazione* Gestore::restituisciDivulgazione(const QString & _acronimo) const {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (*i)->getAcronimo() == _acronimo )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiConferenza(const QString & _nome, const QString & _acronimo, const QString & _luogo, const QString & _data, QList<Persona*> _organizzatori, int _partecipanti) {
    divulgazioni.push_back(new Conferenza(_nome, _acronimo, _luogo, _data, _organizzatori, _partecipanti));
}

bool Gestore::divulgazioneEsistente(const QString & _acronimo) const {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (*i)->getAcronimo() == _acronimo ) {
            return true;
        }
    }
    return false;
}

void Gestore::aggiungiRivista(const QString& _nome, const QString& _acronimo, const QString& _editore, const QString& _data, int _volume) {
        divulgazioni.push_back(new Rivista(_nome, _acronimo, _editore, _data, _volume));
}

bool Gestore::divulgazioniVuote() const {
    if(divulgazioni.empty())
        return true;
    return false;
}

void Gestore::svuotaDivulgazioni() {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        delete (*i);
    }
    divulgazioni.clear();
}

QString Gestore::stampaDivulgazioni() const {
    QString a = nullptr;
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
          a += (**i).stampa() + '\n';
    }
    return a;
}



Articolo* Gestore::restituisciArticolo(const QString& _identificativo) const {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return (*i);
    }
    return nullptr;
}

bool Gestore::articoloPresente(const QString& _identificativo) const {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo )
            return true;
    }
    return false;
}

void Gestore::aggiungiArticolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString *> _keyword, double _prezzo, QList<Articolo *> _correlati, Divulgazione * _pubblicazione) {
        articoli.push_back(new Articolo(_identificativo, _titolo, _pagine, _autori, _keyword, _prezzo, _correlati, _pubblicazione));
}

void Gestore::svuotaArticoli() {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        delete (*i);
    }
    articoli.clear();
}

QString Gestore::stampaArticoli() const {
    QString a;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          a += (**i).stampa();
    }
    return a;
}

QString Gestore::stampaArticoliAutore(const Autore& autore) const {
    QString a = nullptr;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          if( (*i)->autoreHaScrittoArticolo( autore )  ) {
                a += (**i).stampa();
          }
    }
    return a;
}

QString Gestore::stampaArticoliConferenza(const Divulgazione& divulgazione) const {
    QString a = nullptr;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          if( (*i)->pubblicataInConferenza ( divulgazione )  ) {
                a += (**i).stampa();
          }
    }
    return a;
}

void azzeraVectorInt(QVector<int>& numero, int size) {
    numero.clear();
    for(int i = 0; i < size; i++) {
        numero.push_back(0);
    }
}

QString Gestore::stampaArticoliStruttura(QVector<Autore *> autore) const {
    QString a = nullptr;
    QVector<int> numero;
    azzeraVectorInt(numero, articoli.size());
    int cont;
    for(int j = 0; j < autore.size(); j++) {
        cont = 0;
        for(auto i = articoli.begin(); i != articoli.end(); i++, cont++) {
              if( (**i).autoreHaScrittoArticolo( (*autore[j])) && numero[cont] == 0 ) {
                    numero[cont]++;
                    a += (**i).stampa();
              }
        }
    }
    numero.clear();
    return a;
}

QString Gestore::stampaArticoliAutoreCostosi(const Autore& autore) const {
    int max = INT_MIN;
    QString a = nullptr;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          if( (*i)->autoreHaScrittoArticolo( autore ) && (**i).getPrezzo() > max ) {
                max = (**i).getPrezzo();
          }
    }
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          if( (*i)->autoreHaScrittoArticolo( autore ) && (**i).getPrezzo() == max ) {
                a += (*i)->stampa();
          }
    }
    return a;
}

int Gestore::guadagnoDivulgazione(const Divulgazione& a, const QString& data) const {  //facilmente fattibile anche il numero 4 della sezione C con questo metodo
    int somma = -1;
    for(auto i = articoli.begin(); i < articoli.end(); i++) {
        if(  (*(**i).getPubblicazione() ) == a && data == (**i).getPubblicazione()->getAnno()) {
            somma += (*i)->getPrezzo();
        }
    }
    return somma;
}

bool keywordPresente(const QString& key, const Articolo& a) {
    for(int i = 0; i < a.getKeyword().size(); i++) {
        if(a.getKeyword()[i] == key)
               return true;
    }
    return false;
}

void calcolaMassimoVectorInt(QVector<int>& numero, QVector<int>& indici) {
    int max = INT_MIN;
    for(int i = 0; i < numero.size(); i++) {
        if(numero[i] == max)
            indici.push_back(i);
        if(numero[i] > max) {
            indici.clear();
            max = numero[i];
            indici.push_back(i);
        }
    }
}

QStringList Gestore::keywordMigliorIncasso(const QStringList& keywords) const {
    QVector<int> numero;
    QVector<int> indici;
    azzeraVectorInt(numero, keywords.size());   //pusho tanti zero nel vettore numero tante quante le keywords
    for(int i = 0; i < keywords.size(); i++) {
        for(auto j = articoli.begin(); j < articoli.end(); j++) {
            if( keywordPresente(keywords[i], (**j)) ) {     //controllo se la keyword è presente in quell'articolo, dato che un articolo ha una lsita di keywords
                numero[i] += (**j).getPrezzo();
            }
        }
    }
    calcolaMassimoVectorInt(numero, indici);        //trovo il massimo oppure i massimi valori ottenuti dalle keywords
    numero.clear();
    QStringList keywordMaggiori;
    for(int i = 0; i < indici.size(); i++) {
        keywordMaggiori.push_back( keywords[indici[i]] );
    }
    return keywordMaggiori;
}

bool compara(const Articolo* a, const Articolo* b) {
    return a->getPrezzo() < b->getPrezzo();
}

QString Gestore::stampaArticoliConferenzaOrdinatiPrezzo(const Divulgazione& conferenza) const {
    QList<Articolo *> art;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*(*i)->getPubblicazione()) == conferenza ) {
            art.push_back( (*i) );
        }
    }
    std::sort( art.begin(), art.end(), compara);

    QString stampa;
    for(auto i = art.begin(); i != art.end(); i++) {
        stampa += (*i)->stampa();
    }
    return stampa;
}

bool compare(const Articolo* a, const Articolo* b) {
    if( a->getPubblicazione()->getAnno() > b->getPubblicazione()->getAnno() )
        return true;
    if( a->getPubblicazione()->getAnno() < b->getPubblicazione()->getAnno() )
        return false;
    if( a->getPrezzo() < b->getPrezzo() )
        return true;
    if( a->getPrezzo() > b->getPrezzo() )
        return false;
    return a->cognomePrimoAutore() < b->cognomePrimoAutore();
}

QString Gestore::stampaArticoliKeywordOrdinati(const QString& keyword) const {
    QList<Articolo *> art;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        QList<QString *> a = (*i)->getKeyword();
        for(auto j = a.begin(); j != a.end(); i++) {
            if( (*j) == keyword ) {
                art.push_back( (*i) );
                break;
            }
        }
    }
    std::sort(art.begin(), art.end(), compare);

    QString stampa;
    for(auto i = art.begin(); i != art.end(); i++) {
        stampa += (*i)->stampa();
    }
    return stampa;
}
