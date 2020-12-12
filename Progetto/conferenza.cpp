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

Conferenza::Conferenza()
{

}

Conferenza::Conferenza(const QString & _nome, const QString & _acronimo, const QString & _luogo, const QString & _data, QList<Persona*> _organizzatori, int _partecipanti): Divulgazione(_nome, _acronimo, _data), luogo(_luogo), partecipanti(_partecipanti) {
    for(auto i = _organizzatori.begin(); i != _organizzatori.end(); i++) {
        organizzatori.push_back( (*i) );
    }
}

Conferenza::Conferenza(const Conferenza& a): Divulgazione(a.nome, a.acronimo, a.data), luogo(a.luogo), partecipanti(a.partecipanti) {
    for(auto i = a.organizzatori.begin(); i != a.organizzatori.end(); i++) {
        organizzatori.push_back( (*i) );
    }
}

Conferenza::~Conferenza() {
    svuota();
}

QString Conferenza::getNome() const
{
    return Divulgazione::nome;
}

void Conferenza::setNome(const QString &value)
{
    nome = value;
}

QString Conferenza::getAcronimo() const
{
    return acronimo;
}

void Conferenza::setAcronimo(const QString &value)
{
    acronimo = value;
}

QString Conferenza::getLuogo() const
{
    return luogo;
}

void Conferenza::setLuogo(const QString &value)
{
    luogo = value;
}

QString Conferenza::getData() const
{
    return data;
}

void Conferenza::setData(const QString &value)
{
    data = value;
}

int Conferenza::getPartecipanti() const
{
    return partecipanti;
}

void Conferenza::setPartecipanti(int value)
{
    partecipanti = value;
}


bool Conferenza::operator==(const Conferenza& a) const {
    if(nome != a.nome || acronimo != a.acronimo || luogo != a.luogo || data != a.data || partecipanti != a.partecipanti)
        return false;
    if(organizzatori.size() != a.organizzatori.size())
        return false;
    auto j = a.organizzatori.begin();
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++, j++) {
        if( (*i) != (*j) )
            return false;
    }
    return true;
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

void Conferenza::svuota() {
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++) {
        delete (*i);
    }
}

Conferenza* Conferenza::clone() {
    return new Conferenza(*this);
}

QString Conferenza::stampa() const {
    QString a = "-CONFERENZA-     NOME:" + nome + ", ACRONIMO:" + acronimo + ", DATA:" + data + ", LUOGO:" + luogo + ", PARTECIPANTI:" + QString::number(partecipanti) + '\n' + "  ORGANIZZATORI:";
    for(auto i = organizzatori.begin(); i != organizzatori.end(); i++ ) {
        if( i == organizzatori.begin() )
            a += " " + (**i).getNome() + " " + (**i).getCognome() ;
        else
            a += ", " + (**i).getNome() + " " + (**i).getCognome() ;
    }
    return a += '\n';
}
