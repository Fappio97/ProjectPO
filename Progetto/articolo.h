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

#ifndef ARTICOLO_H
#define ARTICOLO_H

#include<QString>

#include "autore.h"

class Articolo
{

private:

    QString identificativo;
    QString titolo;
    int pagine;
    QList<Autore *> autori;
    QList<QString *> keyword;
    int prezzo;
    QList<Articolo *> correlati;

public:

    Articolo();
    Articolo(const QString&, const QString&, int, QList<Autore *>, QList<QString *>, int, QList<Articolo *>);
    Articolo(const Articolo&);

    ~Articolo();

    QString getIdentificativo() const;
    void setIdentificativo(const QString &value);
    QString getTitolo() const;
    void setTitolo(const QString &value);
    int getPagine() const;
    void setPagine(int value);
    int getPrezzo() const;
    void setPrezzo(int value);

    void eliminaArticolo();
    void stampa() const;

    friend std::ostream& operator<<(std::ostream&, const Articolo&);

};

#endif // ARTICOLO_H
