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

#ifndef CONFERENZA_H
#define CONFERENZA_H

#include "persona.h"
#include "divulgazione.h"

class Conferenza : public Divulgazione
{

private:

    QString luogo;
    QList<Persona *> organizzatori;
    int partecipanti;

    void svuota();

public:

    Conferenza();
    Conferenza(const QString &, const QString &, const QString &, const QString &, QList<Persona *> _organizzatori, int);
    Conferenza(const Conferenza&);
    Conferenza& operator=(const Conferenza&);
    ~Conferenza();

    QString getLuogo() const;
    void setLuogo(const QString &value);
    int getPartecipanti() const;
    void setPartecipanti(int value);

    int influenza();

    Conferenza* clone();

    QString classeRifermento();

protected:

    std::ostream& stampa(std::ostream&) const;

};

#endif // CONFERENZA_H
