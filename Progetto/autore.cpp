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

#include "autore.h"


Autore::Autore()
{

}

Autore::Autore(const QString & _identificativo, const QString & _nome, const QString & _cognome, QList<Afferenza *> _afferenze): Persona(_nome, _cognome), identificativo(_identificativo) {
    for(auto i = _afferenze.begin(); i != _afferenze.end(); i++) {
        afferenze.push_back( (*i) );
    }
}

Autore::Autore(const Autore& a): Persona(a.nome, a.cognome), identificativo(a.identificativo) {
    for(auto i = a.afferenze.begin(); i != a.afferenze.end(); i++) {
        afferenze.push_back( (*i) );
    }
}

Autore::~Autore() {
    afferenze.clear();
}

Autore& Autore::operator=(const Autore& a) {
    if(this != &a) {
        nome = a.nome;
        cognome = a.cognome;
        identificativo = a.identificativo;
        for(auto i = a.afferenze.begin(); i != a.afferenze.end(); i++) {
            afferenze.push_back( (*i) );
        }
    }
    return (*this);
}





QString Autore::getIdentificativo() const
{
    return identificativo;
}

void Autore::setIdentificativo(const QString &value)
{
    identificativo = value;
}





bool Autore::autoreConnessoStruttura(const Afferenza& afferenza) const {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        if( (**i) == afferenza )
            return true;
    }
    return false;
}






bool Autore::operator==(const Autore& a) const {
    if(identificativo != a.identificativo && Persona::nome != a.Persona::nome && Persona::cognome != a.Persona::cognome)
        return false;
    if(afferenze.size() != a.afferenze.size())
        return false;
    auto j = a.afferenze.begin();
    for(auto i = afferenze.begin(); i != afferenze.end(); i++, j++) {
        if( (**i).Afferenza::getNome() != (**j).Afferenza::getNome() )
               return false;
    }
    return true;
}





std::ostream& operator<<(std::ostream& out, const Autore& a) {
    out << "- ID: " << a.identificativo.toStdString() << ", NOME: " << a.nome.toStdString() << ", COGNOME: " << a.cognome.toStdString() << std::endl;
    if(!a.afferenze.empty()) {
        out << "      LISTA AFFERENZE:";
        for(auto i = a.afferenze.begin(); i != a.afferenze.end(); i++) {
            if(i == a.afferenze.begin())
                out << (" " + (**i).getNome()).toStdString();
            else
                out << (", " + (**i).getNome()).toStdString();
        }
        out << std::endl;
    }
    return out << std::endl;
}
