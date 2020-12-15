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

Gestore::~Gestore() {       // da aggiornare
    svuotaAutori();
    svuotaDivulgazioni();
    svuotaArticoli();
}

Gestore& Gestore::operator=(const Gestore& a) {     // da aggiornare
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


void Gestore::aggiungiAfferenza(const QString& _afferenza) {
    afferenze.push_back(_afferenza);
}

bool Gestore::afferenzaEsistente(const QString& _afferenza) const {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        if( (*i) == _afferenza )
            return true;
    }
    return false;
}





void Gestore::aggiungiPersona(const QString& nome, const QString& cognome) {
    persone.push_back(Persona(nome, cognome));
}

bool Gestore::personaEsistente(const QString& nome, const QString& cognome) const {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        if( (*i).getNome() == nome && (*i).getCognome() == cognome )
                return true;
    }
    return false;
}





Autore* Gestore::restituisciAutore(const QString& _identificativo) {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return (*i);
    }
    return nullptr;
}

void Gestore::restituisciAutoreConnessoStruttura(const Afferenza& _afferenza, std::vector<Autore*>& autore ) {
    for(auto i = autori.begin(); i != autori.end(); i++ ) {
        if( (*i)->autoreConnessoStruttura(_afferenza) )
            autore.push_back( (*i) );
    }
    return;
}

void Gestore::aggiungiAutore(const QString& _identificativo, const QString& _nome, const QString& _cognome, QList<Afferenza> _afferenze) {
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




Divulgazione* Gestore::restituisciDivulgazione(const QString & _acronimo) {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
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



Articolo* Gestore::restituisciArticolo(const QString& _identificativo) {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
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

void Gestore::aggiungiArticolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString> _keyword, double _prezzo, QList<Articolo *> _correlati, Divulgazione * _pubblicazione) {
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

void azzeraVectorInt(std::vector<int>& numero, int size) {
    numero.clear();
    for(int i = 0; i < size; i++) {
        numero.push_back(0);
    }
}

QString Gestore::stampaArticoliStruttura(std::vector<Autore *> autore) const {
    QString a = nullptr;
    std::vector<int> numero;
    azzeraVectorInt(numero, articoli.size());
    int cont;
    for(unsigned long j = 0; j < autore.size(); j++) {
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
