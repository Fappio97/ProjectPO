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
#include "articolo.h"

class Gestore
{

private:

   QList<Autore *> autori;

   QList<Divulgazione *> divulgazioni;

   QList<Articolo *> articoli;

   QList<Afferenza *> afferenze;

   QList<Persona *> persone;

   QList<QString *> keywords;

public:


    Gestore();

    Gestore(const Gestore&);

    ~Gestore();

    Gestore& operator=(const Gestore&);






                           //GESTIONE KEYWORDS

    QString* restituisciKeywords(const QString&) const;

    void aggiungiKeywords(const QString&);

    bool keywordEsistente(const QString&) const;

    void svuotaKeywords();

    bool keywordsVuote() const;






                           //GESTIONE AFFERENZE

    Afferenza* restituisciAfferenza(const QString&) const;

    void aggiungiAfferenza(const QString&);

    bool afferenzaEsistente(const QString&) const;

    void svuotaAfferenze();






                           //GESTIONE PERSONA

    Persona* restituisciPersona(const QString&, const QString&) const;

    void aggiungiPersona(const QString&, const QString&);

    bool personaEsistente(const QString&, const QString&) const;

    void svuotaPersone();






                           //GESTIONE AUTORI

    Autore* restituisciAutore(const QString&) const;

    void inserisciAutoriConnessoStruttura(const Afferenza&, QVector<Autore *>&);

    void aggiungiAutore(const QString&, const QString&, const QString&, QList<Afferenza *>);

    bool autoreEsistente(const QString&, const QString&) const;

    bool autoreIdOccupato(const QString&) const;

    void svuotaAutori();

    QString stampaAutori() const;





                           //GESTIONE DIVULGAZIONE (CONFERENZE E RIVISTE)

    Divulgazione* restituisciDivulgazione(const QString&, const QString&) const;

    Divulgazione* restituisciDivulgazioneNonSpecifica(const QString& nome) const;

    void aggiungiConferenza(const QString &, const QString &, const QString &, const QString &, QList<Persona *> _organizzatori, int);

    bool divulgazioneEsistente(const QString &, const QString &) const;

    void aggiungiRivista(const QString&, const QString&, const QString&, const QString&, int);

    void svuotaDivulgazioni();

    QString stampaDivulgazioni() const;





                           //GESTIONE ARTICOLO

    Articolo* restituisciArticolo(const QString&) const;

    bool articoloPresente(const QString&) const;

    void aggiungiArticolo(const QString&, const QString&, int, QList<Autore *>, QList<QString *>, double, QList<Articolo *>, Divulgazione *);

    void svuotaArticoli();

    QString stampaArticoli() const;





                           //SEZIONE B

    QString  stampaArticoliAutore(const Autore&) const;

    QString  stampaArticoliConferenza(const QString&) const;

    QString stampaArticoliStruttura(const QVector<Autore *>&) const;






                           //SEZIONE C

    QString  stampaArticoliAutoreCostosi(const Autore&) const;

    int guadagnoDivulgazione(const QString&, const QString&) const;

    QStringList keywordMigliorIncasso(const QStringList&) const;






                           //SEZIONE D

    QString stampaArticoliDivulgazioneOrdinatiPrezzo(const QString&) const;

    QString stampaArticoliKeywordOrdinati(const QString&) const;






                           //SEZIONE E

    QString stampaRivisteSpecialistiche() const;






                           //SEZIONE F

    void conferenzeSimili(const QList<Divulgazione *>& divulgazioni, const QList<Divulgazione *>& conferenze, const QString& nome, std::stringstream& s) const;

    QString articoliInfluenzati(const Articolo*) const;

    QString stampaConferenzeSimili(const QString& nome ) const;

    QString stampaConferenzeElitarieInfluenti() const;

};

#endif  // GESTORE_H
