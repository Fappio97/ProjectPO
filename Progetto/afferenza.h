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

#ifndef AFFERENZA_H
#define AFFERENZA_H

#include<QString>

class Afferenza
{

private:

    QString nome;

public:

    Afferenza();
    Afferenza(const QString&);

    QString getNome() const;
    void setNome(const QString &value);

    bool operator==(const Afferenza&) const;

};

#endif // AFFERENZA_H
