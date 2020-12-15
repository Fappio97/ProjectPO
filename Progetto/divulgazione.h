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

public:

    Divulgazione();     // altrimenti non posso chiamarli in articoli
    Divulgazione(const QString&, const QString&, const QString&);

    virtual QString stampa() const { return nullptr; }

    virtual bool operator==(const Divulgazione& a) const {
        return nome == a.nome && acronimo == a.acronimo && data == a.data;
    }

    virtual ~Divulgazione() {}

    virtual Divulgazione* clone() { return new Divulgazione(*this); }

    QString getNome() const;
    void setNome(const QString &value);
    QString getAcronimo() const;
    void setAcronimo(const QString &value);
    QString getData() const;
    void setData(const QString &value);
};

#endif // DIVULGAZIONE_H
