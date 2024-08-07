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

#ifndef RIVISTA_H
#define RIVISTA_H

#include "divulgazione.h"

class Rivista : public Divulgazione
{ 

private:

    QString editore;
    int volume;

    void svuota();

public:

    Rivista();
    Rivista(const QString&, const QString&, const QString&, const QString&, int);
    Rivista(const Rivista&);
    ~Rivista();


    int getVolume() const;
    void setVolume(int value);
    QString getEditore() const;
    void setEditore(const QString &value);

    Rivista* clone();

    QString classeRifermento();

protected:

    std::ostream& stampa(std::ostream&) const;

};

#endif // RIVISTA_H
