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


Rivista::Rivista() {
}

Rivista::Rivista(const QString& _nome, const QString& _acronimo, const QString& _editore, const QString& _data, int _volume): Divulgazione(_nome, _acronimo, _data), editore(_editore), volume(_volume)  {
}

Rivista::~Rivista() {

}






void Rivista::setNome(const QString &value)
{
    nome = value;
}

QString Rivista::getAcronimo() const
{
    return acronimo;
}

void Rivista::setAcronimo(const QString &value)
{
    acronimo = value;
}

QString Rivista::getData() const
{
    return data;
}

void Rivista::setData(const QString &value)
{
    data = value;
}

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






Rivista* Rivista::clone() {
    return new Rivista(*this);
}

QString Rivista::classeRiferimento() const {
    return "Rivista";
}





std::ostream& Rivista::stampa(std::ostream& out) const {
    out << "-RIVISTA-" << std::endl << "      NOME: " << nome.toStdString() << ", ACRONIMO: " << acronimo.toStdString() << ", DATA: " << data.toStdString() << " EDITORE: " << editore.toStdString() << " VOLUME: " << volume << std::endl;
    return out;
}
