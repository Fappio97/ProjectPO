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

#include "rivista.h"


                            //COSTRUTTORI E DISTRUTTORE

Rivista::Rivista() {
}

Rivista::Rivista(const QString& _nome, const QString& _acronimo, const QString& _editore, const QString& _data, int _volume): Divulgazione(_nome, _acronimo, _data), editore(_editore), volume(_volume)  {
}

Rivista::Rivista(const Rivista& a): Divulgazione(a), editore(a.editore), volume(a.volume) {
}

Rivista::~Rivista() {
    svuota();
}

void Rivista::svuota() {
    svuotaDivulgazione();
}




                            //GETTER & SETTER

int Rivista::getVolume() const
{
    return volume;
}

void Rivista::setVolume(int value)
{
    volume = value;
}

QString Rivista::getEditore() const
{
    return editore;
}

void Rivista::setEditore(const QString &value)
{
    editore = value;
}





                            //METODI VIRTUAL

Rivista* Rivista::clone() {
    return new Rivista(*this);
}

QString Rivista::classeRifermento() {
    return "Rivista";
}





                            //STAMPA

std::ostream& Rivista::stampa(std::ostream& out) const {
    out << "-RIVISTA-" << std::endl << "      NOME: " << nome.toStdString() << ", ACRONIMO: " << acronimo.toStdString() << ", DATA: " << data.toStdString() << ", EDITORE: " << editore.toStdString() << ", VOLUME: " << volume << std::endl;
    if(articoli.empty())
        return out << "      NESSUN ARTICOLO PUBBLICATO" << std::endl;
    out << "       LISTA TITOLI ARTICOLI CORRELATI:";
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        out << " [" << (**i).getTitolo().toStdString() << "]";
    }
    return out << std::endl;
}
