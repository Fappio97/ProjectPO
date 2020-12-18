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

Divulgazione::Divulgazione()
{
    
}

Divulgazione::Divulgazione(const QString& _nome, const QString& _acronimo, const QString& _data): nome(_nome), acronimo(_acronimo), data(_data) {

}

bool Divulgazione::operator==(const Divulgazione & a) const {
    return nome == a.nome && acronimo == a.acronimo && data == a.data;
}

