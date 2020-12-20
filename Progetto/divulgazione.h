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

class Divulgazione
{

protected:

    QString nome;
    QString acronimo;
    QString data;

    virtual std::ostream& stampa(std::ostream& out) const {
        return out;
    }

public:

    Divulgazione();     // altrimenti non posso chiamarli in articoli
    Divulgazione(const QString&, const QString&, const QString&);

    bool operator==(const Divulgazione&) const;

    friend std::ostream& operator<<(std::ostream& out, const Divulgazione& a) {
        return a.stampa(out);
    }

    virtual Divulgazione* clone() {     //mi serve nel costruttore di gestore
        return new Divulgazione(*this);
    }

    virtual QString classeRifermento() const {
        return nullptr;
    }

    virtual ~Divulgazione() {}

    QString getNome() const;
    void setNome(const QString &value);
    QString getAcronimo() const;
    void setAcronimo(const QString &value);
    QString getData() const;
    void setData(const QString &value);

    QString getAnno() const;
};

#endif // DIVULGAZIONE_H
