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

#include "divulgazione.h"


                            //COSTRUTTORI

Divulgazione::Divulgazione()
{

}

Divulgazione::Divulgazione(const QString& _nome, const QString& _acronimo, const QString& _data): nome(_nome), acronimo(_acronimo), data(_data) {

}

Divulgazione::Divulgazione(const Divulgazione& a): nome(a.nome), acronimo(a.acronimo), data(a.data) {
    for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
        articoli.push_back( (*i) );
    }
}

Divulgazione& Divulgazione::operator=(const Divulgazione& a) {
    if(this != &a) {
        svuotaDivulgazione();
        nome = a.nome;
        acronimo = a.acronimo;
        data = a.data;
        for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
            articoli.push_back( (*i) );
        }
    }
    return *this;
}

void Divulgazione::svuotaDivulgazione() {
    articoli.clear();
}





                            //GETTER & SETTER

QString Divulgazione::getNome() const
{
    return nome;
}

void Divulgazione::setNome(const QString &value)
{
    nome = value;
}

QString Divulgazione::getAcronimo() const
{
    return acronimo;
}

void Divulgazione::setAcronimo(const QString &value)
{
    acronimo = value;
}

QString Divulgazione::getData() const
{
    return data;
}

void Divulgazione::setData(const QString &value)
{
    data = value;
}

QString Divulgazione::getAnno() const {
    return data.left(4);
}

QList<Articolo *> Divulgazione::getArticoli() const
{
    return articoli;
}

void Divulgazione::inserisciArticolo(Articolo* a)
{
    articoli.push_back(a);
}





                            //ALTRE FUNZIONI

std::ostream& operator<<(std::ostream& out, const Divulgazione& a) {
    return a.stampa(out);
}

bool Divulgazione::operator==(const Divulgazione & a) const {
    return nome == a.nome && acronimo == a.acronimo && data == a.data;
}

int Divulgazione::sommaGuadagnoArticoliDivulgazione() const {
    int somma = 0;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        somma += (**i).getPrezzo();
    }
    return somma;
}

bool keywordNonPresente(const QList<QString *>& lista, const QString& word) {      //vedo se avevo già messo precedentemente la keyword, se è già presente non la inserisco
    for(auto i = lista.begin(); i != lista.end(); i++) {
        if( (**i) == word )
            return false;
    }
    return true;
}

void Divulgazione::keywordsDivulgazione(QList<QString *>& lista) const {        //mi faccio restituire le keywords degli articoli pubblciati per quella divulgazione
    lista.clear();
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        QList<QString *> keywords = (*i)->getKeyword();
        for(auto j = keywords.begin(); j != keywords.end(); j++) {
            if(keywordNonPresente(lista, (**j))) {
                lista.push_back( (*j) );
            }
        }
        keywords.clear();
    }
}
