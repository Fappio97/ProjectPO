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

public:

    Rivista();
    Rivista(const QString&, const QString&, const QString&, const QString&, int);
    ~Rivista();

    QString getNome() const;
    void setNome(const QString &value);
    QString getAcronimo() const;
    void setAcronimo(const QString &value);
    QString getData() const;
    void setData(const QString &value);
    int getVolume() const;
    void setVolume(int value);

    bool operator==(const Rivista&) const;
    void svuota();

    friend std::ostream& operator<<(std::ostream&, const Rivista&);

    QString getEditore() const;
    void setEditore(const QString &value);
};

#endif // RIVISTA_H
