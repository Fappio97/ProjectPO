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

#ifndef GESTORE_H
#define GESTORE_H

#include "autore.h"
#include "conferenza.h"
#include "rivista.h"

class Gestore
{

private:

   QList<Autore *> autori;

   QList<Divulgazione* > divulgazioni;

   QList<Articolo *> articoli;

   QList<Afferenza> afferenze;

   QList<Persona> persone;

public:
    Gestore();
    Gestore(const Gestore&);
    ~Gestore();
    Gestore& operator=(const Gestore&);


    void aggiungiAfferenza(const QString&);

    bool afferenzaEsistente(const QString&);




    void aggiungiPersona(const QString&, const QString&);

    bool personaEsistente(const QString&, const QString&);




    void aggiungiAutore(const QString&, const QString&, const QString&, QList<Afferenza>);

    bool autoreEsistente(const QString&, const QString&, const QString&) const;

    void svuotaAutori();

    QString stampaAutori() const;




    bool divulgazioneEsistente(const QString &, const QString &, const QString &);

    void aggiungiConferenza(const QString &, const QString &, const QString &, const QString &, QList<Persona*> _organizzatori, int, Articolo*);

    void aggiungiRivista(const QString&, const QString&, const QString&, int, Articolo*);

    Articolo* trovaArticolo(const QString&);

    void svuotaDivulgazioni();

    QString stampaDivulgazioni() const;



    bool articoloPresente(const QString&, const QString&);

    void aggiungiArticolo(const QString&, const QString&, int, QList<Autore *>, QList<QString  *>, int, QList<Articolo *>);

    void rimuoviArticolo(const QString &, const QString &);

    void svuotaArticoli();

    void stampaArticoli() const;

};

#endif // GESTORE_H
