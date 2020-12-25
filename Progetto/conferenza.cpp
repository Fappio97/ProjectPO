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

#include "conferenza.h"


                            //COSTRUTTORI, DISTRUTTORE ED OPERATOR=

Conferenza::Conferenza()
{

}

Conferenza::Conferenza(const QString & _nome, const QString & _acronimo, const QString & _luogo, const QString & _data, QList<Persona *> _organizzatori, int _partecipanti): Divulgazione(_nome, _acronimo, _data), luogo(_luogo), partecipanti(_partecipanti) {
    for(auto i = _organizzatori.begin(); i != _organizzatori.end(); i++) {
        organizzatori.push_back( (*i) );
    }
}

Conferenza::Conferenza(const Conferenza& a):Divulgazione(a), luogo(a.luogo), partecipanti(a.partecipanti) {
    for(auto i = a.organizzatori.begin(); i != a.organizzatori.end(); i++) {
        organizzatori.push_back( (*i) );
    }
}

Conferenza& Conferenza::operator=(const Conferenza& a) {
    if(this != &a) {
        svuota();
        luogo = a.luogo;
        partecipanti = a.partecipanti;
        for(auto i = a.organizzatori.begin(); i != a.organizzatori.end(); i++) {
            organizzatori.push_back( (*i) );
        }
    }
    return (*this);
}

Conferenza::~Conferenza() {
    svuota();
}

void Conferenza::svuota() {
    organizzatori.clear();
    svuotaDivulgazione();
}





                            //GETTER & SETTER
QString Conferenza::getLuogo() const
{
    return luogo;
}

void Conferenza::setLuogo(const QString &value)
{
    luogo = value;
}

int Conferenza::getPartecipanti() const
{
    return partecipanti;
}

void Conferenza::setPartecipanti(int value)
{
    partecipanti = value;
}





                            //METODI VIRTUAL

int Conferenza::influenza() {
    return partecipanti;
}

Conferenza* Conferenza::clone() {
    return new Conferenza(*this);
}

QString Conferenza::classeRifermento() {
    return "Conferenza";
}




                            //STAMPA

std::ostream& Conferenza::stampa(std::ostream& out) const {     //PROTECTED
    out << "-CONFERENZA-" << std::endl << "       NOME: " << nome.toStdString() << ", ACRONIMO: " << acronimo.toStdString() << ", DATA: " << data.toStdString() << ", LUOGO: " << luogo.toStdString() << ", PARTECIPANTI: " << partecipanti << std::endl << "       ORGANIZZATORI:";
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++ ) {
        if( (*i) == organizzatori.front() )
            out << " " << (**i).getNome().toStdString() << " " << (**i).getCognome().toStdString() ;
        else
            out << ", " << (**i).getNome().toStdString() + " " << (**i).getCognome().toStdString() ;
    }
    out << std::endl;           //puoi cacciare la lista di articoli qui e metterela in divulgazione per rendere il codice più flessibile possibile
    if(articoli.empty())        //LI STAMPO QUI GLI ARTICOLI, ANCHE SE POTEVO FARLI IN DIVULGAZIONE, MA PER UNA QUESTIONE ESTETICA DI STAMPA HO DECISO DI IMPLEMENTARLI NELLE CLASSE FIGLIE ANCHE SE CIÒ RENDE IL CODICE MENO FLESSIBILE
        return out << "       NESSUN ARTICOLO PUBBLICATO" << std::endl;
    out << "       LISTA TITOLI ARTICOLI PUBBLICATI:";
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        out << " [" << (**i).getTitolo().toStdString() << "]";
    }
    return out << std::endl;
}
