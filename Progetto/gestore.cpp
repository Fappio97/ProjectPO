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

#include "gestore.h"

#include<sstream>


                            //COSTRUTTORI, DISTRUTTORE ED OPERATOR=

Gestore::Gestore()
{

}

Gestore::Gestore(const Gestore& a) {
    for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
        autori.push_back( (*i) );
    }
    for(auto i = a.divulgazioni.begin(); i != divulgazioni.end(); i++) {
        divulgazioni.push_back( (**i).clone() );
    }
    for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
        articoli.push_back( (*i) );
    }
    for(auto i = a.afferenze.begin(); i != a.afferenze.end(); i++) {
        afferenze.push_back( (*i) );
    }
    for(auto i = a.persone.begin(); i != a.persone.end(); i++) {
        persone.push_back( (*i) );
    }
    for(auto i = a.keywords.begin(); i != a.keywords.end(); i++) {
        keywords.push_back( (*i) );
    }
}

Gestore::~Gestore() {
    svuotaAutori();
    svuotaDivulgazioni();
    svuotaArticoli();
    svuotaAfferenze();
    svuotaPersone();
    svuotaKeywords();
}

Gestore& Gestore::operator=(const Gestore& a) {
    if(this != &a) {
        svuotaAutori();
        svuotaDivulgazioni();
        svuotaArticoli();
        svuotaAfferenze();
        svuotaPersone();
        svuotaKeywords();
        for(auto i = a.autori.begin(); i != a.autori.end(); i++) {
            autori.push_back( (*i) );
        }
        for(auto i = a.divulgazioni.begin(); i != divulgazioni.end(); i++) {
            divulgazioni.push_back( (**i).clone() );
        }
        for(auto i = a.articoli.begin(); i != a.articoli.end(); i++) {
            articoli.push_back( (*i) );
        }
        for(auto i = a.afferenze.begin(); i != a.afferenze.end(); i++) {
            afferenze.push_back( (*i) );
        }
        for(auto i = a.persone.begin(); i != a.persone.end(); i++) {
            persone.push_back( (*i) );
        }
        for(auto i = a.keywords.begin(); i != a.keywords.end(); i++) {
            keywords.push_back( (*i) );
        }
    }
    return (*this);
}





                           //GESTIONE KEYWORDS

QString* Gestore::restituisciKeywords(const QString& a) const {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        if( (**i) == a )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiKeywords(const QString& a) {
    keywords.push_back(new QString(a));
}

bool Gestore::keywordEsistente(const QString& a) const {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        if( (**i) == a )
            return true;
    }
    return false;
}

void Gestore::svuotaKeywords() {
    for(auto i = keywords.begin(); i < keywords.end(); i++) {
        delete (*i);
    }
    keywords.clear();
}

bool Gestore::keywordsVuote() const {
    return keywords.empty();
}





                           //GESTIONE AFFERENZE

Afferenza* Gestore::restituisciAfferenza(const QString& a) const {
    for(auto i = afferenze.begin(); i < afferenze.end(); i++) {
        if( (**i).getNome() == a )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiAfferenza(const QString& _afferenza) {
    afferenze.push_back(new Afferenza(_afferenza));
}

bool Gestore::afferenzaEsistente(const QString& _afferenza) const {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        if( (**i).getNome() == _afferenza )
            return true;
    }
    return false;
}

void Gestore::svuotaAfferenze() {
    for(auto i = afferenze.begin(); i != afferenze.end(); i++) {
        delete (*i);
    }
    afferenze.clear();
}





                           //GESTIONE PERSONE

Persona* Gestore::restituisciPersona(const QString& nome, const QString& cognome) const {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        if( (*i)->getNome() == nome && (**i).getCognome() == cognome )
            return (*i);
    }
    return nullptr;
}

void Gestore::aggiungiPersona(const QString& nome, const QString& cognome) {
    persone.push_back(new Persona(nome, cognome));
}

bool Gestore::personaEsistente(const QString& nome, const QString& cognome) const {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        if( (**i).getNome() == nome && (**i).getCognome() == cognome )
                return true;
    }
    return false;
}

void Gestore::svuotaPersone() {
    for(auto i = persone.begin(); i != persone.end(); i++) {
        delete (*i);
    }
    persone.clear();
}





                           //GESTIONE AUTORI

Autore* Gestore::restituisciAutore(const QString& _identificativo) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return (*i);
    }
    return nullptr;
}

void Gestore::inserisciAutoriConnessoStruttura(const Afferenza& _afferenza, QVector<Autore*>& autore ) {      //AGGIUNGI AL VETTORE "autore" QUELLI CONESSI ALLA "_afferenza"
    for(auto i = autori.begin(); i != autori.end(); i++ ) {
        if( (*i)->autoreConnessoStruttura(_afferenza) )
            autore.push_back( (*i) );
    }
    return;
}

void Gestore::aggiungiAutore(const QString& _identificativo, const QString& _nome, const QString& _cognome, QList<Afferenza *> _afferenze) {
    autori.push_back(new Autore(_identificativo, _nome, _cognome, _afferenze));
}

bool Gestore::autoreEsistente(const QString& nome, const QString& cognome) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getNome() == nome && (*i)->getCognome() == cognome  )
            return true;
    }
    return false;
}

bool Gestore::autoreIdOccupato(const QString& _identificativo) const {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return true;
    }
    return false;
}

void Gestore::svuotaAutori() {
    for(auto i = autori.begin(); i != autori.end(); i++) {
        delete (*i);
    }
    autori.clear();
}

QString Gestore::stampaAutori() const {
    std::stringstream s;
    for(auto i = autori.begin(); i != autori.end(); i++) {
          s << (**i);
    }
    return QString::fromStdString(s.str());
}





                           //GESTIONE DIVULGAZIONI

Divulgazione* Gestore::restituisciDivulgazione(const QString& nome, const QString& data) const {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (*i)->getData() == data && (*i)->getNome() == nome) {
            return (*i)->clone();
        }
    }
    return nullptr;
}

Divulgazione* Gestore::restituisciDivulgazioneNonSpecifica(const QString& nome) const {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (*i)->getNome() == nome) {
            return (*i)->clone();
        }
    }
    return nullptr;
}

void Gestore::aggiungiConferenza(const QString & _nome, const QString & _acronimo, const QString & _luogo, const QString & _data, QList<Persona *> _organizzatori, int _partecipanti) {
    divulgazioni.push_back(new Conferenza(_nome, _acronimo, _luogo, _data, _organizzatori, _partecipanti));
}

bool Gestore::divulgazioneEsistente(const QString& nome, const QString& data) const {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (*i)->getData() == data && (*i)->getNome() == nome) {
            return true;
        }
    }
    return false;
}

void Gestore::aggiungiRivista(const QString& _nome, const QString& _acronimo, const QString& _editore, const QString& _data, int _volume) {
        divulgazioni.push_back(new Rivista(_nome, _acronimo, _editore, _data, _volume));
}

void Gestore::svuotaDivulgazioni() {
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        delete (*i);
    }
    divulgazioni.clear();
}

QString Gestore::stampaDivulgazioni() const {
    std::stringstream s;
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
          s << (**i) << std::endl;
    }

    s << std::endl;

    return QString::fromStdString(s.str());
}





                           //GESTIONE ARTICOLI

Articolo* Gestore::restituisciArticolo(const QString& _identificativo) const {  //non faccio il controllo se esiste l'autore perché sono sicuro che c'è in quanto nel box autori ci finiscono solo autori creati
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo  )
            return (*i);
    }
    return nullptr;
}

bool Gestore::articoloPresente(const QString& _identificativo) const {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->getIdentificativo() == _identificativo )
            return true;
    }
    return false;
}

void Gestore::aggiungiArticolo(const QString& _identificativo, const QString& _titolo, int _pagine, QList<Autore *> _autori, QList<QString *> _keyword, double _prezzo, QList<Articolo *> _correlati, Divulgazione * _pubblicazione) {
        articoli.push_back(new Articolo(_identificativo, _titolo, _pagine, _autori, _keyword, _prezzo, _correlati, _pubblicazione->getAnno()));
        for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
            if( (*i) == _pubblicazione )
                (**i).inserisciArticolo( articoli.back() );
        }
}

void Gestore::svuotaArticoli() {
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        delete (*i);
    }
    articoli.clear();
}

QString Gestore::stampaArticoli() const {
    std::stringstream s;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          s << (**i);
    }
    return QString::fromStdString(s.str());
}





                           //SEZIONE B

QString Gestore::stampaArticoliAutore(const Autore& autore) const {
    std::stringstream s;
    for(auto i = articoli.begin(); i != articoli.end(); i++) {
          if( (*i)->autoreHaScrittoArticolo( autore )  ) {
                s << (**i);
          }
    }
    return QString::fromStdString(s.str());
}

QString Gestore::stampaArticoliConferenza(const QString& nome) const {     //funziona sia per riviste che per divulgazioni
    std::stringstream s;

    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
          if( (**i).getNome() == nome  ) {
              if( (**i).getArticoli().size() != 0 )
                    s << "                                                                          ARTICOLI PUBBLICATI NELL'ANNO: " << (**i).getAnno().toStdString() << std::endl;
              for(auto j = (**i).getArticoli().begin(); j != (**i).getArticoli().end(); j++)
                    s << (**j);
          }
    }

    s << std::endl;

    return QString::fromStdString(s.str());
}

void azzeraVectorInt(QVector<int>& numero, int size) {      //formo un vettore di interi pari ad una certa dimensione
    numero.clear();
    for(int i = 0; i < size; i++) {
        numero.push_back(0);
    }
}

QString Gestore::stampaArticoliStruttura(const QVector<Autore *>& autore) const {
    QVector<int> numero;                            //questo vettore mi serve perché, supponendo di avere più autori che hanno la stessa afferenza e che hanno scritto lo stesso articolo, impedisco di stampare lo stesso articolo più volte
    std::stringstream s;
    azzeraVectorInt(numero, articoli.size());       //creo un vettore di dimensione pari alla size di tutti gli articoli presenti
    int cont;

    for(int j = 0; j < autore.size(); j++) {
        cont = 0;       //azzero il cont ogni volta che cambio autore e quindi mi appresto a leggere gli articoli
        for(auto i = articoli.begin(); i != articoli.end(); i++, cont++) {
              if( (**i).autoreHaScrittoArticolo( (*autore[j])) && numero[cont] == 0 ) {     //se il numero[cont] != 0, significa che quell'articolo è stato scritto già da un altro autore e quindi già stampato
                    numero[cont]++;
                    s << (**i);
              }
        }
    }

    numero.clear();
    return QString::fromStdString(s.str());
}





                           //SEZIONE C

QString Gestore::stampaArticoliAutoreCostosi(const Autore& autore) const {
    std::stringstream s;
    int max = INT_MIN;

    QVector<Articolo *> art;

    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        if( (*i)->autoreHaScrittoArticolo( autore ) && (**i).getPrezzo() == max ) { //se l'articolo è stato scritto dall'autore ed ha un prezzo uguale a quello massimo attualmente lo metto nel vettore che poi stamperò
            art.push_back( (*i) );
        }
        if( (*i)->autoreHaScrittoArticolo( autore ) && (**i).getPrezzo() > max ) {    //se l'articolo è stato scritto dall'autore ed il prezzo dell'articolo è maggiore lo salvo, svuotando il vettore di articoli che avevo prima perché ho trovato un nuovo prezzo maggiore
            art.clear();
            max = (**i).getPrezzo();
            art.push_back( (*i) );
        }
    }

    for(int i = 0; i < art.size(); i++) {
        s << (*art[i]);
    }

    return QString::fromStdString(s.str());
}

int Gestore::guadagnoDivulgazione(const QString& nome, const QString& anno) const {  //facilmente fattibile anche il numero 4 della sezione C con questo metodo
    int somma = -1;     // lo faccio partire da -1, poiché se non viene aggiornato significa che non sono stati pubblicati articoli
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
          if( (**i).getAnno() == anno && (**i).getNome() == nome ) {     //cerco tra tutte le divulgazioni con quel nome, coloro che sono state create in un determinato anno di cui mi interessa stampare il guadagno degli articoli connessi
                somma += (**i).sommaGuadagnoArticoliDivulgazione();
          }
    }
    return somma;
}

bool keywordPresente(const QString& key, const Articolo& a) {
    for(int i = 0; i < a.getKeyword().size(); i++) {
        if(a.getKeyword()[i] == key)
               return true;
    }
    return false;
}

void calcolaMassimoVectorInt(QVector<int>& numero, QVector<int>& indici) {
    int max = INT_MIN;
    for(int i = 0; i < numero.size(); i++) {
        if(numero[i] == max)        //se l'incasso di quella keyword è uguale al massimo fin'ora trovato mi salvo l'indice
            indici.push_back(i);
        if(numero[i] > max) {       //se trovo un incasso di una keyword maggiore del massimo, prima svuoto gli indici perché non sono più riferiti al massimo e poi salvo l'indice di quello trovato
            indici.clear();
            max = numero[i];
            indici.push_back(i);
        }
    }
}

QStringList Gestore::keywordMigliorIncasso(const QStringList& keywords) const {
    QVector<int> numero;
    QVector<int> indici;
    azzeraVectorInt(numero, keywords.size());   //pusho tanti zero nel vettore numero tante quante le keywords

    for(int i = 0; i < keywords.size(); i++) {
        for(auto j = articoli.begin(); j < articoli.end(); j++) {
            if( keywordPresente(keywords[i], (**j)) ) {     //controllo se la keyword è presente in quell'articolo, dato che un articolo ha una lista di keywords
                numero[i] += (**j).getPrezzo();
            }
        }
    }

    calcolaMassimoVectorInt(numero, indici);        //trovo il massimo oppure i massimi valori ottenuti dalle keywords
    numero.clear();

    QStringList keywordMaggiori;
    for(int i = 0; i < indici.size(); i++) {        //una volta che ho gli indici delle keyword con incasso maggiore li metto in una lista che restituirò
        keywordMaggiori.push_back( keywords[indici[i]] );
    }

    return keywordMaggiori;
}





                           //SEZIONE D

bool comparaDivulgazioni(const Articolo* a, const Articolo* b) {
    return a->getPrezzo() < b->getPrezzo();     //ordine crescente
}

QString Gestore::stampaArticoliDivulgazioneOrdinatiPrezzo(const QString& nome) const {
    QList<Articolo *> art;
    std::stringstream s;

    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
          if( (**i).getNome() == nome  ) {
              QList<Articolo *> a = (**i).getArticoli();
              for(auto j = a.begin(); j != a.end(); j++)
                    art.push_back( (*j) );
          }
    }

    if(art.empty())
        return "NESSUN ARTICOLO PUBBLICATO";


    std::sort( art.begin(), art.end(), comparaDivulgazioni );   //sort funziona come il find fatto vedere a lezione

    s << "                                                                          ARTICOLI ORDINATI IN SENSO CRESCENTE" << std::endl;

    QString stampa;
    for(auto i = art.begin(); i != art.end(); i++) {
        s << (**i);
    }

    art.clear();
    return QString::fromStdString(s.str());
}

bool comparaKeyword(const Articolo* a, const Articolo* b) {
    if( a->getAnno() > b->getAnno() )
        return true;
    if( a->getAnno() < b->getAnno() )
        return false;
    if( a->getPrezzo() < b->getPrezzo() )
        return true;
    if( a->getPrezzo() > b->getPrezzo() )
        return false;
    return a->cognomePrimoAutore() < b->cognomePrimoAutore();
}

QString Gestore::stampaArticoliKeywordOrdinati(const QString& keyword) const {
    QList<Articolo *> art;      //creo una lista di articoli
    std::stringstream s;

    for(auto i = articoli.begin(); i != articoli.end(); i++) {
        QList<QString *> a = (*i)->getKeyword();
        for(auto j = a.begin(); j != a.end(); j++) {        //scorro le keyword di ogni articolo presente
            if( (*j) == keyword ) {     //se in questo articolo è presente la keyword che sto cercando la metto nella lista di articoli "art"
                art.push_back( (*i) );
                break;
            }
        }
    }

    if(art.empty())
        return "NESSUN ARTICOLO PUBBLICATO";

    std::sort(art.begin(), art.end(), comparaKeyword);

    for(auto i = art.begin(); i != art.end(); i++) {
        s << (**i);
    }

    art.clear();
    return QString::fromStdString(s.str());
}





                           //SEZIONE E

bool sottoinsieme(const QList<QString *>& a, const QList<QString *>& b ) {
    if(a.size() >= b.size() || a.size() == 0 )        //SE LA DIMENSIONE DELLE KEYWORDS DI UNA DIVULGAZIONE È MAGGIORE DELL'ALTRA NON POTRÀ MAI ESSERE UN SUO SOTTOINSIEME, INOLTRE SCARTO ANCHE LA POSSIBILITÀ CHE SE LA DIVULGAZIONE NON HA KEYWORD ME LE STAMPA COMUNQUE
        return false;

    int cont = 0;
    for(auto i = a.begin(); i != a.end(); i++) {
        for(auto j = b.begin(); j != b.end(); j++) {
            if( (**i) == (**j) ) {      //OGNI VOLTA CHE TROVO UNA KEYWORD UGUALE NEGLI ARTICOLI DELLA 2° RIVISTA AUMENTO UN CONTATORE
                cont++;
                break;
            }
        }
    }

    if(cont == a.size())    //SE IL CONTATORE È UGUALE ALLE KEYWORDS DELLA 1° RIVISTA ALLORA HO LA CONDIZIONE FAVOREVOLE
        return true;
    return false;   //NON CONTROLLO SE NELLA 2°RIVISTA C'È UNA KEYWORDS IN PIÙ RISPETTO ALLA 1°, MA QUESTO È IMPLICITO, PERCHÉ SE LA 1° E LA 2° RIVISTA AVESSERO DIMENSIONE UGUALE MI FERMEREI AL RPIMO IF, ED INOLTRE LE KEYWORDS SONO TUTTE DIVERSE TRA LORO, CON IL METODO CON CUI LE PRENDO NELLA CLASSE "DIVULGAZIONE" E POI CONTROLLATE DAL METODO "PRENDIKEYWORDS"
}

bool divulgazioneNonPresente(const QList<Divulgazione *>& lista, const Divulgazione* a) {       //metodo di supporto al "trova divulgazioni" che mi blocca l'eventualità di inserire nella lista due divulgazioni con stesso nome ma con data differente. Invece voglio trattarle come delle stesse divulgazioni, seppur con date differenti
    for(auto i = lista.begin(); i != lista.end(); i++) {    //
        if( (*i)->getNome() == a->getNome() )
            return false;
    }
    return true;
}

void trovaDivulgazioni(const QList<Divulgazione *> divulgazioni, const QString& derivata, QList<Divulgazione *>& lista) {  //METODO GENERICO CON CUI TROVARE UNA CLASSE DERIVATA DALLA CLASSE BASE "DIVULGAZIONE" GRAZIE AL METODO "CLASSERIFERIMENTO" CHE NON INFRANGE LA CONDIZIONE PER CUI NON DOVREI OPTARE PER NON UTILIZZARE IL POLIMORFISMO IN QUANTO MI SERVIREBBE RICONOSCERE A QUALE CLASSE FACCIO RIFERIMENTO. MANTENGO LA FLESSIBILITÀ CON IL POLIMORFISMO, VISIBILE IN ALCUNI METODI SOPRA CHE VALGONO PER ENTRAMBI LE CLASSI BASE ED INOLTRE IL METODO VIRTUAL NON CREDO INFRANGA LA REGOLA PER CUI NNO DOVREI USARE IL POLIMORFISMO VISTO DALLA LIST<CLASSE BASE>
    lista.clear();
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (**i).classeRifermento() == derivata && divulgazioneNonPresente(lista, (*i)))
            lista.push_back( (**i).clone() );
    }
}

void stampaKeywords(const QList<QString *>& a, std::stringstream& s) {      //faccio una stampa più leggibile
    if( a.size() == 0 ) {
        s << ", SENZA KEYWORD";
        return;
    }

    s << ", CON KEYWORD";

    if( a.size() > 1 )
        s << "S";

    for(auto i = a.begin(); i != a.end(); i++) {
        s << " '" << (**i).toStdString() << "' ";
    }
}

void stampaKeywordsLista(const QList<QString *>& a, std::stringstream& s) {      //faccio una stampa più leggibile
    if( a.size() == 0 ) {
        s << "      SENZA KEYWORD";
        return;
    }

    s << "      CON KEYWORD";

    if( a.size() > 1 )
        s << "S";

    for(auto i = a.begin(); i != a.end(); i++) {
        s << " '" << (**i).toStdString() << "' ";
    }
}

bool keywordNonPresente(const QString& parola, const QList<QString *>& lista) {     //METODO CHE MI DICE SE IN UNA LISTA DI KEYWORDS È GIÀ PRESENTE QUELLA KEYWORD
    for(auto i = lista.begin(); i != lista.end(); i++) {
        if( (**i) == parola )
            return false;
    }
    return true;
}

void prendiKeywords(const QList<Divulgazione *>& divulgazioni, QList<QString *>& lista, const Divulgazione& divulga) {
    lista.clear();      //AZZERO OGNI VOLTA LA LISTA DI STRINGHE PER NON FARLO NEI METODI
    for(auto i = divulgazioni.begin(); i != divulgazioni.end(); i++) {
        if( (**i).getNome() == divulga.getNome() ) {        //SCORRENDO LE DIVULGAZIONI, TROVO QUELLE CON LO STESSO NOME, ED ANCHE SE HANNO ANNO DIFFERENTE LE CONSIDERO COME UNA DIVULGAZIONE
           QList<QString *> a;
           (**i).keywordsDivulgazione(a);       //MI FACCIO RITORNARE LE PRIME KEYWORDS
           for(auto j = a.begin(); j != a.end(); j++) {
               if( keywordNonPresente((**j), lista) )   //CONTROLLO SE CI SONO DELLE KEYWORD RIPETUTE PASSANDO TRA DUE LISTE
                   lista.push_back( (*j) );
           }
        }
    }
}

void rivisteSpecialistiche(const QList<Divulgazione *>& divulgazioni, const QList<Divulgazione *>& riviste, const Divulgazione& rivista, std::stringstream& s) {
    QList<QString *> a;
    QList<QString *> b;

    prendiKeywords(divulgazioni, a, rivista);       //PRENDO LE KWYROD DELLA RIVISTA PASSATA DAL FOR

    stampaKeywords(a, s);
    s << ", È LA RIVISTA SPECIALISTICA DI:" << std::endl;

    bool trovato = false;

    for(auto i = riviste.begin(); i != riviste.end(); i++) {
        if( (**i).getNome() != rivista.getNome() ) {       //tra tutte le riviste, che sono diverse l'una dall'altra per nome
            prendiKeywords(divulgazioni, b, (**i));     //prendo le sue keywords tra tutte le riviste con lo stesso nome, al di là della data che differenzia riviste con stesso nome
            if( sottoinsieme(a , b) ) {
                trovato = true;         //SERVE PER UNA QUESTIONE DI STAMPA ESTETICA
                s << (**i);
                stampaKeywordsLista(b, s);
                s << std::endl;
            }
        }
    }

    if(!trovato)
        s << "-NESSUNA RIVISTA-" << std::endl;

    s << std::endl;
}

QString Gestore::stampaRivisteSpecialistiche() const {
    QList<Divulgazione *> riviste;
    trovaDivulgazioni(divulgazioni, "Rivista", riviste);      //trovo tutte le riviste tra le divulgazioni create

    if(riviste.size() <= 1)     //anche se fosse presente una rivista con chi la paragonerei?
        return "NON CI SONO RIVISTE SPECIALISTICHE";

    std::stringstream s;


    for(auto i = riviste.begin(); i != riviste.end(); i++) {
        s << "LA RIVISTA: " << (*i)->getNome().toStdString();
        rivisteSpecialistiche( divulgazioni, riviste, (**i), s);
    }

    riviste.clear();
    return QString::fromStdString(s.str());
}





                           //SEZIONE F

bool influenzato(const Articolo* a, const Articolo* b ) {
    if(a->getAnno() >= b->getAnno())        //un articolo influenza un altro se il suo anno è minore, quindi se l'articolo ha già un anno maggiore non soddisfa il requisito
        return false;

    QList<Articolo *> c = b->getCorrelati();
    for(auto i = c.begin(); i != c.end(); i++) {
        if( (*a) == (**i))
            return true;        //se trovo nel secondo articolo, fra i correlati, l'articolo che voglio verificare se sia influenzato allora è giusto
    }
    return false;
}

bool nonPresente( const QVector<Articolo *> a, const Articolo* b ) {
    for(auto i = a.begin(); i != a.end(); i++) {        //controlla se un articolo è già prensente nel vettore degli articoli influenzati direttamente
        if( (*i) == b )
            return false;
    }
    return true;
}

QString Gestore::articoliInfluenzati(const Articolo* a) const {
    std::stringstream s;

    QVector<Articolo *> art;

    for(auto i = articoli.begin(); i != articoli.end(); i++) {      //trovo gli articolo influenzati direttamente e li metto in un vector
        if(influenzato( a, (*i) ) )
            art.push_back( (*i) );
    }

    for(auto i = art.begin(); i != art.end(); i++) {        //scorrendo gli articoli influenzati direttamente, vedo se quest'ultimi influenzano altri articoli
        for(auto j = articoli.begin(); j != articoli.end(); j++) {
            if( influenzato( (*i), (*j) ) ) {       //se li influenzano e se nel vettore non sono presenti (ovvero se non sono già influenzati direttamente), li salvo
                if( nonPresente( art, (*j) ) )
                    art.push_back(*j);
            }
        }
    }

    if(art.size() == 0)
        s << "NESSUN ARTICOLO INFLUENZATO";

    for(auto i = art.begin(); i != art.end(); i++) {
        s << (**i);
    }

    return QString::fromStdString(s.str());
}

bool keywords80(const QList<QString *>& a, const QList<QString *>& b ) {

    int cont = 0;
    for(auto i = a.begin(); i != a.end(); i++) {
        for(auto j = b.begin(); j != b.end(); j++) {
            if( (**i) == (**j) ) {      //anche qui se trovo delle keyword in comune fra due conferenze le conto
                cont++;
                break;
            }
        }
    }

    if( cont >=  ( b.size() * 0.8 ) )   //se le keyword in comune sono maggiori  o uguali dell'80% degli articoli della 2°conferenza ho trovato una conferenza simile
        return true;        //non mi serve controllare se anche le keyword della 2°conferenza siano l'80% dell'altra, grazie al primo if che esclude tale possibilità e ricordando che le keywords non sono ripetute, quindi sono uniche per ogni divulgazione

    return false;
}

void Gestore::conferenzeSimili(const QList<Divulgazione *>& divulgazioni, const QList<Divulgazione *>& conferenze, const QString& nome, std::stringstream& s) const {
    QList<QString *> a;
    QList<QString *> b;

    Divulgazione* conf = restituisciDivulgazioneNonSpecifica(nome);     //metodo di gestore per il richiamo di questo metodo

    prendiKeywords(divulgazioni, a, (*conf));       //prendo le keywords di quella conferenza tra tutte le divulgazioni aventi lo stesso nome

    stampaKeywords(a, s);
    s << ", È SIMILE:" << std::endl;

    bool trovato = false;

    for(auto j = conferenze.begin(); j != conferenze.end(); j++) {      //per ogni altra conferenza che abbia il nome diverso da quella conferenza passata da input, mi prendo le keywords e verifico se la conferenza passata da input abbia almeno l'80% delle keywords delle altre conferenze
        if( (**j).getNome() != conf->getNome() ) {
            prendiKeywords(divulgazioni, b, (**j) );
            if( keywords80(a, b) && b.size() != 0) {
                trovato = true;         //SERVE PER UNA QUESTIONE DI STAMPA ESTETICA
                 s << (**j);
                 stampaKeywordsLista(b, s);
                 s << std::endl;

            }
        }
    }

    if(!trovato)
        s << "-NESSUNA CONFERENZA-" << std::endl;

    s << std::endl;
}

QString Gestore::stampaConferenzeSimili(const QString& nome) const {
    QList<Divulgazione *> conferenze;
    trovaDivulgazioni(divulgazioni, "Conferenza", conferenze);      //trovo tutte le conferenze tra le divulgazioni create

    std::stringstream s;

    s << "LA CONFERENZA " << nome.toStdString();

    conferenzeSimili(divulgazioni, conferenze, nome, s);

    conferenze.clear();
    return QString::fromStdString(s.str());
}

bool keywordsDiverse(const QList<QString *>& a, const QList<QString *>& b ) {       //vede se ciascuna keywords contenuta in ogni articolo pubblicato per quella conferenza sia diversa
    int cont = 0;
    for(auto i = a.begin(); i != a.end(); i++) {
        for(auto j = b.begin(); j != b.end(); j++) {
            if( (**i) == (**j) ) {
                cont++;
                break;
            }
        }
    }

    if( cont != 0 )
        return false;

    return true;
}

void conferenzeElitarie(const QList<Divulgazione *>& divulgazioni, const QList<Divulgazione *>& conferenze, Divulgazione* conferenza, QVector<Divulgazione *>& elitarie) {
    QList<QString *> a;     //ho deciso di dichiarare la funzione keywordsDivulgazione che ritorna una QList<QString *> altrimenti ogni volta dovevo richiamare la funzione e quindi ricalcolare le keywords della conferenza che mi veniva passata in alcuni metodi
    QList<QString *> b;
    QList<QString *> c;

    prendiKeywords(divulgazioni, a, (*conferenza) );     //prendo le keywords della conferenza del for nella funzione "principale"

    QVector<Divulgazione *> conferenzeElitarie;

    int max = INT_MIN;

    for(auto i = conferenze.begin(); i != conferenze.end(); i++) {
        if(  (*i)->getNome() != conferenza->getNome() ) {
            prendiKeywords(divulgazioni, b, (*conferenza) );
            if( keywordsDiverse(a, b) ) {
                conferenzeElitarie.push_back( (*i) );       // se le keywords sono diverse fra due conferenze allora ho trovato due conferenze elitarie fra loro, salvo quest'ultime in un vettore
            }
        }
    }

    for(int j = 0; j < conferenzeElitarie.size(); j++) {        //tra le conferenze elitarie per quella passata dal for della funzione principale, cerco una terza conferenza elitaria
        prendiKeywords(divulgazioni, b, (*conferenzeElitarie[j]) );
        for(auto i = conferenze.begin(); i != conferenze.end(); i++) {
            if( ( (*i)->getNome() != conferenza->getNome() ) && (*i)->getNome() != conferenzeElitarie[j]->getNome() ) {       // se la conferenza è diversa da quella passata dalla funzione "principale" (la chiamo prima) e quella del vettore che sto scorrendo (la chiamo seconda), verifico se essa è elitaria sia con la prima che con la seconda. Se è così, mi salvo la sua influenza e se è massima mi salvo le tre conferenze
                prendiKeywords(divulgazioni, c, (**i) );
                if( keywordsDiverse(a, c) && keywordsDiverse(b, c) && ( conferenza->influenza() + conferenzeElitarie[j]->influenza() + (**i).influenza() ) > max ) {
                    max = ( conferenza->influenza() + conferenzeElitarie[j]->influenza() + (**i).influenza() );
                    elitarie.clear();
                    elitarie.push_back(conferenza);
                    elitarie.push_back(conferenzeElitarie[j]);
                    elitarie.push_back( (*i) );
                }
            }
        }
    }
}

QString Gestore::stampaConferenzeElitarieInfluenti() const {
    QList<Divulgazione *> conferenze;
    trovaDivulgazioni(divulgazioni, "Conferenza", conferenze);    //trovo tutte le conferenze tra le divulgazioni create

    if(conferenze.size() <= 2 )      //se sono prensenti solo due conferenze non poso formare triple
        return "NON CI SONO CONFERENZE ELITARIE";

    std::stringstream s;

    QVector<Divulgazione *> elitarie;

    for(auto i = conferenze.begin(); i != conferenze.end(); i++) {
        conferenzeElitarie(divulgazioni, conferenze, (*i), elitarie);
    }

    for(int i = 0; i < elitarie.size(); i++) {
        s << (*elitarie[i]);
    }

    conferenze.clear();
    elitarie.clear();
    return QString::fromStdString(s.str());
}
