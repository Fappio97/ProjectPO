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

                            //COSTRUTTORI, DISTRUTTORE ED OPERATOR=

Articolo::Articolo() {
}

Articolo::Articolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString *> _keyword,  double _prezzo, QList<Articolo *> _correlati, const QString& _anno): identificativo(_identificativo), titolo(_titolo), pagine(_pagine), prezzo(_prezzo), anno(_anno) {
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

Articolo::Articolo(const Articolo& a): identificativo(a.identificativo), titolo(a.titolo), pagine(a.pagine), prezzo(a.prezzo), anno(a.anno) {
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

Articolo& Articolo::operator=(const Articolo& a) {
    if(this != &a) {
        eliminaArticolo();
        identificativo = a.identificativo;
        titolo = a.titolo;
        pagine = a.pagine;
        prezzo = a.prezzo;
        anno = a.anno;
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
    return *this;
}

Articolo::~Articolo() {
    eliminaArticolo();
}

void Articolo::eliminaArticolo() {
    autori.clear();
    keyword.clear();
    correlati.clear();
}





                            //GETTER & SETTER

QList<QString *> Articolo::getKeyword() const
{
    return keyword;
}

QList<Articolo *> Articolo::getCorrelati() const
{
    return correlati;
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

double Articolo::getPrezzo() const
{
    return prezzo;
}

void Articolo::setPrezzo(double value)
{
    prezzo = value;
}

QString Articolo::getAnno() const
{
    return anno;
}

void Articolo::setAnno(const QString &value)
{
    anno = value;
}




                            //OPERATOR <<

std::ostream& operator<<(std::ostream& out, const Articolo& a) {
    out << "-ARTICOLO-" << std::endl << "      IDENTIFICATIVO: " << a.identificativo.toStdString() << ", TITOLO: " << a.titolo.toStdString() << ", PAGINE: " << a.pagine << ", PREZZO: €" << a.prezzo << ", PUBBLICATO NEL: " << a.anno.toStdString() << std::endl;
    if(!a.autori.empty()) {
        out << "      LISTA AUTORI CHE HANNO REALIZZATO L'ARTICOLO:";
        for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
            if( i == a.autori.begin() )
                out << " " << (**i).getNome().toStdString() << " " << (**i).getCognome().toStdString();
            else
                out << ", " << (**i).getNome().toStdString() << " " << (**i).getCognome().toStdString();
        }
        out << std::endl;
    }
    if(!a.keyword.empty()) {
        out << "      LISTA KEYWORDS:";
        for(auto i = a.keyword.begin(); i != a.keyword.end(); i++) {
            out << " '" << (**i).toStdString() << "'";
        }
        out << std::endl;
    }
    if(!a.correlati.empty()) {
        out << "      LISTA TITOLI CORRELATI: ";
        for(auto i = a.correlati.begin(); i != a.correlati.end(); i++) {
            out << " [" << (**i).getTitolo().toStdString() << "]";
        }
        out << std::endl;
    }
    return out << std::endl;
}





                            //ALTRE FUNZIONI

bool Articolo::autoreHaScrittoArticolo(const Autore& autore) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( autore == (**i) )
            return true;
    }
    return false;
}


QString Articolo::cognomePrimoAutore() const {
    return autori.front()->getCognome();
}
