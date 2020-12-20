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

#ifndef AUTORE_H
#define AUTORE_H

#include "persona.h"
#include "afferenza.h"

#include<QList>

class Autore : public Persona
{

private:

    QString identificativo;
    QList<Afferenza *> afferenze;

public:

    Autore();
    Autore(const QString &, const QString &, const QString &, QList<Afferenza *>);
    Autore(const Autore&);
    ~Autore();
    Autore& operator=(const Autore&);

    QString getIdentificativo() const;
    void setIdentificativo(const QString &value);

    bool operator==(const Autore&) const;   //mi serve?

    bool autoreConnessoStruttura(const Afferenza&) const;

    friend std::ostream& operator<<(std::ostream&, const Autore&);

};

#endif // AUTORE_H
