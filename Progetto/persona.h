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

#ifndef PERSONA_H
#define PERSONA_H

#include<QString>
#include<iostream>

class Persona
{

protected:

    QString nome;
    QString cognome;

public:

    Persona();
    Persona(const QString &, const QString &);

    bool operator==(const Persona&) const;

    friend std::ostream& operator<<(std::ostream&, const Persona&);

    QString getNome() const;
    void setNome(const QString &value);
    QString getCognome() const;
    void setCognome(const QString &value);

};

#endif // PERSONA_H
