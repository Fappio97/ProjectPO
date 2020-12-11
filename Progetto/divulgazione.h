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
    Articolo* articolo;

    Divulgazione();
    Divulgazione(const QString&, const QString&, const QString&, Articolo*);

    std::ostream& stampa(std::ostream& out) const {
        out << nome.toStdString() << ", " << acronimo.toStdString() << ", in data " << data.toStdString();
        if(articolo != nullptr) {
            std::cout << std::endl << "Articolo di riferimento ";
            articolo->stampa();
        }
        return out;
    }

public:

    friend std::ostream& operator<<(std::ostream&, const Divulgazione&);

    virtual bool operator==(const Divulgazione& a) {
        return nome == a.nome && acronimo == a.acronimo && data == a.data && articolo == a.articolo;
    }

    virtual ~Divulgazione() {}

    virtual Divulgazione* clone() { return new Divulgazione(*this); }

    QString getNome() const;
    void setNome(const QString &value);
    QString getAcronimo() const;
    void setAcronimo(const QString &value);
    QString getData() const;
    void setData(const QString &value);
    Articolo *getArticolo() const;
    void setArticolo(Articolo *value);
};

#endif // DIVULGAZIONE_H
