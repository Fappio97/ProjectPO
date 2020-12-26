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

#ifndef DIVULGAZIONE_H
#define DIVULGAZIONE_H

#include<QString>

#include "articolo.h"

class Divulgazione
{

protected:

    QString nome;
    QString acronimo;
    QString data;
    QList<Articolo *> articoli;

    virtual std::ostream& stampa(std::ostream& out) const {
        return out;
    }

    void svuotaDivulgazione();

public:

    Divulgazione();
    Divulgazione(const QString&, const QString&, const QString&);
    Divulgazione(const Divulgazione&);
    Divulgazione& operator=(const Divulgazione&);

    QString getNome() const;
    void setNome(const QString &value);
    QString getAcronimo() const;
    void setAcronimo(const QString &value);
    QString getData() const;
    void setData(const QString &value);
    QList<Articolo *> getArticoli() const;
    void inserisciArticolo(Articolo*);
    QString getAnno() const;

    friend std::ostream& operator<<(std::ostream&, const Divulgazione&);

    int sommaGuadagnoArticoliDivulgazione() const;

    void keywordsDivulgazione(QList<QString *>&) const;

    bool operator==(const Divulgazione&) const;


    virtual Divulgazione* clone() = 0;

    virtual QString classeRifermento() = 0;

    virtual int influenza()  {
        return 0;
    }

    virtual ~Divulgazione() {}
};

#endif // DIVULGAZIONE_H
