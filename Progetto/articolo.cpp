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

#include "articolo.h"

Articolo::Articolo() {
}

Articolo::Articolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString  *> _keyword, int _prezzo, QList<Articolo *> _correlati): identificativo(_identificativo), titolo(_titolo), pagine(_pagine), prezzo(_prezzo) {
    for(auto i = _autori.begin(); i != _autori.end(); i++) {
        autori.push_back( (*i) );
    }
    for(auto i = _keyword.begin(); i != _keyword.end(); i++) {
        keyword.push_back( (*i) );
    }
    for(auto i = _correlati.begin(); i != _correlati.end(); i++) {
        correlati.push_back( (*i) );
    }
}


Articolo::Articolo(const Articolo& a): identificativo(a.identificativo), titolo(a.titolo), pagine(a.pagine), prezzo(a.prezzo) {
    for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
        autori.push_back( (*i) );
    }
    for(auto i = a.keyword.begin(); i != a.keyword.end(); i++) {
        keyword.push_back( (*i) );
    }
    for(auto i = a.correlati.begin(); i != a.correlati.end(); i++) {
        correlati.push_back( (*i) );
    }
}

Articolo::~Articolo() {
    eliminaArticolo();
}

QString Articolo::getIdentificativo() const
{
    return identificativo;
}

void Articolo::setIdentificativo(const QString &value)
{
    identificativo = value;
}

QString Articolo::getTitolo() const
{
    return titolo;
}

void Articolo::setTitolo(const QString &value)
{
    titolo = value;
}

int Articolo::getPagine() const
{
    return pagine;
}

void Articolo::setPagine(int value)
{
    pagine = value;
}

int Articolo::getPrezzo() const
{
    return prezzo;
}

void Articolo::setPrezzo(int value)
{
    prezzo = value;
}

void Articolo::eliminaArticolo() {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        delete (*i);
    }
    for(auto i = keyword.begin(); i != keyword.end(); i++) {
        delete (*i);
    }
    for(auto i = correlati.begin(); i != correlati.end(); i++) {
        delete (*i);
    }
}

void Articolo::stampa() const {
    std::cout << "articolo " << titolo.toStdString();
}

std::ostream& operator<<(std::ostream& out, const Articolo& a) {
    out << "Articolo" << std::endl << "Codice identificativo: " << a.identificativo.toStdString() << std::endl << "Titolo: " << a.titolo.toStdString() << std::endl << "Pagine: " << a.pagine << std::endl << "Prezzo: " << a.prezzo << std::endl << "Pubblicato ";
    out << std::endl << "Lista autori che hanno realizzato l'articolo" << std::endl;
    for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
        std::cout << (**i);
    }
    out << "Lista keywords:";
    for(auto i = a.keyword.begin(); i != a.keyword.end(); i++) {
        std::cout << " '" << (**i).toStdString() << "'";
    }
    out << std::endl << "Lista titoli articoli correlati:";
    for(auto i = a.correlati.begin(); i != a.correlati.end(); i++) {
        std::cout << " " << (**i).getTitolo().toStdString();
    }
    return out << std::endl;
}
