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

#include "persona.h"

QString Persona::getNome() const
{
    return nome;
}

void Persona::setNome(const QString &value)
{
    nome = value;
}

QString Persona::getCognome() const
{
    return cognome;
}

void Persona::setCognome(const QString &value)
{
    cognome = value;
}

Persona::Persona()
{
    
}

Persona::Persona(const QString & _nome, const QString & _cognome): nome(_nome), cognome(_cognome) {
}

bool Persona::operator==(const Persona& a) const
{
    return (nome == a.nome && cognome == a.cognome);
}

std::ostream& operator<<(std::ostream& out, const Persona& a) {
   return out << a.nome.toStdString() << " " << a.cognome.toStdString();
}
