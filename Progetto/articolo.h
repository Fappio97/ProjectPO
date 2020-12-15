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
#include "divulgazione.h"

class Articolo
{

private:

    QString identificativo;
    QString titolo;
    int pagine;
    QList<Autore *> autori;
    QList<QString> keyword;
    double prezzo;
    QList<Articolo *> correlati;
    Divulgazione * pubblicazione;

public:

    Articolo();
    Articolo(const QString&, const QString&, int, QList<Autore *>, QList<QString>, double, QList<Articolo *>, Divulgazione *);
    Articolo(const Articolo&);

    Articolo& operator=(const Articolo&);

    ~Articolo();        //controllare ma serve per la memoria dinamica

    QString getIdentificativo() const;      //ti serve?
    void setIdentificativo(const QString &value);
    QString getTitolo() const;
    void setTitolo(const QString &value);
    int getPagine() const;
    void setPagine(int value);
    double getPrezzo() const;
    void setPrezzo(double value);       //ti serve?

    bool autoreHaScrittoArticolo(const Autore&) const;
    bool pubblicataInConferenza (const Divulgazione& ) const;

    void eliminaArticolo(); //controllare
    QString stampa() const;

};

#endif // ARTICOLO_H
