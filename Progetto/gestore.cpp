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

bool Gestore::afferenzaEsistente(const QString& _afferenza) {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        if( (*i) == _afferenza )
            return true;
    }
    return false;
}





void Gestore::aggiungiPersona(const QString& nome, const QString& cognome) {
    persone.push_back(Persona(nome, cognome));
}

bool Gestore::personaEsistente(const QString& nome, const QString& cognome) {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        if( (*i).getNome() == nome && (*i).getCognome() == cognome )
                return true;
    }
    return false;
}





void Gestore::aggiungiAutore(const QString& _identificativo, const QString& _nome, const QString& _cognome, QList<Afferenza> _afferenze) {
    autori.push_back(new Autore(_identificativo, _nome, _cognome, _afferenze));
}

bool Gestore::autoreEsistente(const QString& _identificativo, const QString& _nome, const QString& _cognome) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getNome() == _nome && (**i).getCognome() == _cognome && (*i)->getIdentificativo() == _identificativo  )
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





void Gestore::aggiungiConferenza(const QString & _nome, const QString & _acronimo, const QString & _luogo, const QString & _data, QList<Persona*> _organizzatori, int _partecipanti, Articolo* _articolo) {
    divulgazioni.push_back(new Conferenza(_nome, _acronimo, _luogo, _data, _organizzatori, _partecipanti, _articolo));
}

bool Gestore::divulgazioneEsistente(const QString & _nome, const QString & _acronimo, const QString & _data) {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (**i).getNome() == _nome && (*i)->getAcronimo() == _acronimo && (**i).getData() == _data ) {
            return true;
        }
    }
    return false;
}

void Gestore::aggiungiRivista(const QString& _nome, const QString& _acronimo, const QString& _data, int _volume, Articolo* _articolo) {
    if(!divulgazioneEsistente(_nome, _acronimo, _data)) {
        divulgazioni.push_back(new Rivista(_nome, _acronimo, _articolo, _data, _volume));
    }
}

void Gestore::svuotaDivulgazioni() {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        delete (*i);
    }
    divulgazioni.clear();
}

QString Gestore::stampaDivulgazioni() const {
    QString a = nullptr;
    for(auto i = autori.begin(); i != autori.end(); i++) {
          a += (**i).stampa();
    }
    return a;
}

Articolo* Gestore::trovaArticolo(const QString& identificativo) {
     for(auto i = articoli.begin(); i != articoli.end(); i++) {
         if( (*i)->getIdentificativo() == identificativo )
             return (*i);
     }
     return nullptr;
}





bool Gestore::articoloPresente(const QString& _identificativo, const QString& _titolo) {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo && (**i).getIdentificativo() == _titolo )
            return true;
    }
    return false;
}

void Gestore::aggiungiArticolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString  *> _keyword, int _prezzo, QList<Articolo *> _correlati) {
    if(!articoloPresente(_identificativo, _titolo)) {
        articoli.push_back( new Articolo(_identificativo, _titolo, _pagine, _autori, _keyword, _prezzo, _correlati));
    }
}

void Gestore::rimuoviArticolo(const QString& _identificativo, const QString& _titolo) {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo && (**i).getIdentificativo() == _titolo ) {
            i = articoli.erase( (i) );
        }
    }
}

void Gestore::svuotaArticoli() {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        delete (*i);
    }
    articoli.clear();
}

void Gestore::stampaArticoli() const {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        std::cout << (**i);
    }
}
