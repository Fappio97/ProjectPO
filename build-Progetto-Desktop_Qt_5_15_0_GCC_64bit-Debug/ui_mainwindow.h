/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *PaginaPrincipale;
    QPushButton *VaiPaginaAutori;
    QPushButton *VaiPaginaConferenze;
    QPushButton *VaiPaginaRiviste;
    QPushButton *VaiPaginaArticoli;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *VaiPaginaVisualizzaArticoli;
    QLabel *label_12;
    QPushButton *VaiPaginaPrezziGuadagni;
    QLabel *label_15;
    QPushButton *VaiPaginaArticoliOridnati;
    QPushButton *VaiPaginaRivisteSpecialistche;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *VaiPaginaOperazioniAvanzate;
    QWidget *PaginaAutori;
    QLabel *ID;
    QLabel *Nome;
    QLabel *Cognome;
    QLabel *TITLE;
    QLabel *Afferenze;
    QPushButton *AggiungiAutore;
    QPlainTextEdit *StampaAutori;
    QPushButton *VisualizzaAutori;
    QLineEdit *NomeInput;
    QLineEdit *IDinput;
    QLineEdit *CognomeInput;
    QLineEdit *AfferenzaInput;
    QLabel *TITLE_2;
    QLabel *SpiegazioneAfferenze;
    QPushButton *CreaAfferenza;
    QLabel *label;
    QPushButton *SvuotaAutori;
    QListWidget *ListaAfferenze;
    QWidget *PaginaConferenze;
    QLineEdit *NomeInput_2;
    QLineEdit *AcronimoInput;
    QLineEdit *LuogoInput;
    QCalendarWidget *CalendarioConferenza;
    QSpinBox *numPartecipanti;
    QLabel *Nome_2;
    QLabel *Acronimo;
    QLabel *Luogo;
    QLabel *Partecipanti;
    QLabel *Organizzatori;
    QPushButton *AggiungiConferenza;
    QLineEdit *NomePersona;
    QPushButton *CreaOrganizzatore;
    QLineEdit *CognomePersona;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *ListaOrganizzatori;
    QLabel *TITLE_3;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *VisualizzaConferenze;
    QLabel *label_13;
    QWidget *PaginaRiviste;
    QSpinBox *VolumeInput;
    QPushButton *AggiungiRivista;
    QLineEdit *EditoreInput;
    QLabel *Volume;
    QLabel *Editore;
    QCalendarWidget *CalendarioRivista;
    QLabel *Nome_3;
    QLineEdit *NomeInput_3;
    QLineEdit *AcronimoInput_2;
    QLabel *Acronimo_2;
    QLabel *TITLE_4;
    QLabel *label_6;
    QPushButton *VisualizzaRiviste;
    QWidget *PaginaDivulgazioni;
    QPlainTextEdit *StampaDivulgazioni;
    QPushButton *SvuotaDivulgazioni;
    QPushButton *VisualizzaDivulgazioni;
    QLabel *TITLE_5;
    QWidget *PaginaArticoli;
    QLineEdit *TitoloInput;
    QLineEdit *IdentificativoInput;
    QLabel *Identificativo;
    QLabel *Pagine;
    QSpinBox *PagineInput;
    QLabel *Titolo;
    QLabel *Prezzo;
    QDoubleSpinBox *PrezzoInput;
    QLabel *TITLE_6;
    QLabel *Autori;
    QLabel *Articoli;
    QLabel *ConferenzeRiviste;
    QComboBox *ConferenzeRivisteBox;
    QPushButton *VisualizzaArticoli;
    QPushButton *SvuotaArticoli;
    QPlainTextEdit *StampaArticoli;
    QLabel *keyword;
    QLineEdit *KeywordInput;
    QPushButton *CreaKeyword;
    QListWidget *ListaKeyword;
    QPushButton *AggiungiArticolo;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_14;
    QListWidget *ListaAutori;
    QListWidget *ListaArticoli;
    QWidget *PaginaVisualizzaArticoli;
    QLabel *TITLE_7;
    QPushButton *VisualizzaArticoliAutore;
    QPushButton *SvuotaFinestra;
    QComboBox *StrutturaBox;
    QLabel *Struttura;
    QComboBox *ConferenzeBox;
    QLabel *Conferenza;
    QPushButton *VisualizzaArticoliStruttura;
    QPushButton *VisualizzaArticoliConferenza;
    QPlainTextEdit *VisualizzaArticoliDi;
    QLabel *SEZIONEB;
    QComboBox *AutoreBox;
    QLabel *Struttura_2;
    QWidget *PaginaPrezzi;
    QLabel *TITLE_8;
    QPushButton *SvuotaFinestra_2;
    QPlainTextEdit *VisualizzaArticoliPrezzi;
    QLabel *SEZIONEC;
    QComboBox *AutoreBox_2;
    QLabel *Rivista;
    QPushButton *ArticoliCostosiAutore;
    QPushButton *KeywordMaggiorGuadagno;
    QPushButton *EntrateRivista;
    QComboBox *RivistaBox;
    QLabel *Autore;
    QLabel *Anno;
    QLineEdit *AnnoInput;
    QWidget *PaginaArticoliOrdinati;
    QLabel *TITLE_9;
    QLabel *Rivista_2;
    QPushButton *OrdinaConferenze;
    QLabel *SEZIONED;
    QLabel *label_16;
    QPushButton *SvuotaFinestra_3;
    QPlainTextEdit *VisualizzaArticoliOdirnati;
    QComboBox *ConferenzeBox_2;
    QComboBox *KeywordBox;
    QLabel *Rivista_3;
    QLabel *label_17;
    QPushButton *OrdinaKeyword;
    QWidget *PaginaRivisteSpecialistiche;
    QLabel *TITLE_10;
    QPlainTextEdit *VisualizzaRivisteSpecialistiche;
    QPushButton *TastoRivisteSpecilistiche;
    QLabel *SEZIONEE;
    QPushButton *SvuotaFinestra_4;
    QLabel *label_21;
    QWidget *PaginaOperazioniAvanzate;
    QLabel *SEZIONEE_2;
    QLabel *TITLE_11;
    QPlainTextEdit *VisualizzaOperazioniAvanzate;
    QPushButton *SvuotaFinestra_5;
    QPushButton *TastoOrdinaCorrelati;
    QLabel *label_18;
    QComboBox *ConferenzeBox_3;
    QLabel *Conferenze;
    QPushButton *TastoConferenzeSimili;
    QPushButton *Home;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 606);
        MainWindow->setMinimumSize(QSize(800, 606));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        MainWindow->setPalette(palette);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setLocale(QLocale(QLocale::Italian, QLocale::Italy));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(9, 9, 782, 555));
        PaginaPrincipale = new QWidget();
        PaginaPrincipale->setObjectName(QString::fromUtf8("PaginaPrincipale"));
        VaiPaginaAutori = new QPushButton(PaginaPrincipale);
        VaiPaginaAutori->setObjectName(QString::fromUtf8("VaiPaginaAutori"));
        VaiPaginaAutori->setGeometry(QRect(290, 56, 88, 27));
        VaiPaginaConferenze = new QPushButton(PaginaPrincipale);
        VaiPaginaConferenze->setObjectName(QString::fromUtf8("VaiPaginaConferenze"));
        VaiPaginaConferenze->setGeometry(QRect(410, 56, 88, 27));
        QFont font;
        font.setPointSize(11);
        VaiPaginaConferenze->setFont(font);
        VaiPaginaRiviste = new QPushButton(PaginaPrincipale);
        VaiPaginaRiviste->setObjectName(QString::fromUtf8("VaiPaginaRiviste"));
        VaiPaginaRiviste->setGeometry(QRect(530, 56, 88, 27));
        VaiPaginaArticoli = new QPushButton(PaginaPrincipale);
        VaiPaginaArticoli->setObjectName(QString::fromUtf8("VaiPaginaArticoli"));
        VaiPaginaArticoli->setGeometry(QRect(650, 56, 88, 27));
        label_10 = new QLabel(PaginaPrincipale);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 64, 101, 16));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_11 = new QLabel(PaginaPrincipale);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(650, 128, 71, 16));
        label_11->setFont(font1);
        VaiPaginaVisualizzaArticoli = new QPushButton(PaginaPrincipale);
        VaiPaginaVisualizzaArticoli->setObjectName(QString::fromUtf8("VaiPaginaVisualizzaArticoli"));
        VaiPaginaVisualizzaArticoli->setGeometry(QRect(337, 120, 161, 27));
        label_12 = new QLabel(PaginaPrincipale);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(60, 176, 81, 16));
        label_12->setFont(font1);
        VaiPaginaPrezziGuadagni = new QPushButton(PaginaPrincipale);
        VaiPaginaPrezziGuadagni->setObjectName(QString::fromUtf8("VaiPaginaPrezziGuadagni"));
        VaiPaginaPrezziGuadagni->setGeometry(QRect(160, 176, 221, 27));
        label_15 = new QLabel(PaginaPrincipale);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(650, 240, 71, 16));
        label_15->setFont(font1);
        VaiPaginaArticoliOridnati = new QPushButton(PaginaPrincipale);
        VaiPaginaArticoliOridnati->setObjectName(QString::fromUtf8("VaiPaginaArticoliOridnati"));
        VaiPaginaArticoliOridnati->setGeometry(QRect(290, 232, 211, 27));
        VaiPaginaRivisteSpecialistche = new QPushButton(PaginaPrincipale);
        VaiPaginaRivisteSpecialistche->setObjectName(QString::fromUtf8("VaiPaginaRivisteSpecialistche"));
        VaiPaginaRivisteSpecialistche->setGeometry(QRect(160, 288, 221, 27));
        label_19 = new QLabel(PaginaPrincipale);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(60, 288, 81, 16));
        label_19->setFont(font1);
        label_20 = new QLabel(PaginaPrincipale);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(650, 352, 71, 16));
        label_20->setFont(font1);
        VaiPaginaOperazioniAvanzate = new QPushButton(PaginaPrincipale);
        VaiPaginaOperazioniAvanzate->setObjectName(QString::fromUtf8("VaiPaginaOperazioniAvanzate"));
        VaiPaginaOperazioniAvanzate->setGeometry(QRect(290, 344, 241, 27));
        stackedWidget->addWidget(PaginaPrincipale);
        PaginaAutori = new QWidget();
        PaginaAutori->setObjectName(QString::fromUtf8("PaginaAutori"));
        ID = new QLabel(PaginaAutori);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setGeometry(QRect(16, 96, 91, 17));
        Nome = new QLabel(PaginaAutori);
        Nome->setObjectName(QString::fromUtf8("Nome"));
        Nome->setGeometry(QRect(16, 128, 91, 17));
        Cognome = new QLabel(PaginaAutori);
        Cognome->setObjectName(QString::fromUtf8("Cognome"));
        Cognome->setGeometry(QRect(16, 160, 91, 17));
        TITLE = new QLabel(PaginaAutori);
        TITLE->setObjectName(QString::fromUtf8("TITLE"));
        TITLE->setGeometry(QRect(170, 32, 184, 25));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        TITLE->setFont(font2);
        Afferenze = new QLabel(PaginaAutori);
        Afferenze->setObjectName(QString::fromUtf8("Afferenze"));
        Afferenze->setGeometry(QRect(270, 80, 71, 25));
        AggiungiAutore = new QPushButton(PaginaAutori);
        AggiungiAutore->setObjectName(QString::fromUtf8("AggiungiAutore"));
        AggiungiAutore->setGeometry(QRect(70, 200, 91, 25));
        AggiungiAutore->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        StampaAutori = new QPlainTextEdit(PaginaAutori);
        StampaAutori->setObjectName(QString::fromUtf8("StampaAutori"));
        StampaAutori->setGeometry(QRect(0, 248, 781, 305));
        VisualizzaAutori = new QPushButton(PaginaAutori);
        VisualizzaAutori->setObjectName(QString::fromUtf8("VisualizzaAutori"));
        VisualizzaAutori->setGeometry(QRect(290, 208, 201, 33));
        VisualizzaAutori->setFont(font1);
        VisualizzaAutori->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        NomeInput = new QLineEdit(PaginaAutori);
        NomeInput->setObjectName(QString::fromUtf8("NomeInput"));
        NomeInput->setGeometry(QRect(121, 123, 125, 27));
        IDinput = new QLineEdit(PaginaAutori);
        IDinput->setObjectName(QString::fromUtf8("IDinput"));
        IDinput->setGeometry(QRect(122, 89, 125, 27));
        CognomeInput = new QLineEdit(PaginaAutori);
        CognomeInput->setObjectName(QString::fromUtf8("CognomeInput"));
        CognomeInput->setGeometry(QRect(121, 156, 125, 27));
        AfferenzaInput = new QLineEdit(PaginaAutori);
        AfferenzaInput->setObjectName(QString::fromUtf8("AfferenzaInput"));
        AfferenzaInput->setGeometry(QRect(540, 192, 211, 25));
        TITLE_2 = new QLabel(PaginaAutori);
        TITLE_2->setObjectName(QString::fromUtf8("TITLE_2"));
        TITLE_2->setGeometry(QRect(560, 48, 191, 25));
        QFont font3;
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(true);
        font3.setWeight(50);
        TITLE_2->setFont(font3);
        SpiegazioneAfferenze = new QLabel(PaginaAutori);
        SpiegazioneAfferenze->setObjectName(QString::fromUtf8("SpiegazioneAfferenze"));
        SpiegazioneAfferenze->setGeometry(QRect(580, 64, 261, 121));
        QFont font4;
        font4.setPointSize(10);
        font4.setItalic(true);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setStyleStrategy(QFont::NoAntialias);
        SpiegazioneAfferenze->setFont(font4);
        CreaAfferenza = new QPushButton(PaginaAutori);
        CreaAfferenza->setObjectName(QString::fromUtf8("CreaAfferenza"));
        CreaAfferenza->setGeometry(QRect(580, 224, 141, 17));
        CreaAfferenza->setFont(font);
        label = new QLabel(PaginaAutori);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 104, 61, 73));
        QFont font5;
        font5.setPointSize(8);
        font5.setItalic(true);
        font5.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font5);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        SvuotaAutori = new QPushButton(PaginaAutori);
        SvuotaAutori->setObjectName(QString::fromUtf8("SvuotaAutori"));
        SvuotaAutori->setGeometry(QRect(20, 232, 201, 16));
        ListaAfferenze = new QListWidget(PaginaAutori);
        ListaAfferenze->setObjectName(QString::fromUtf8("ListaAfferenze"));
        ListaAfferenze->setGeometry(QRect(350, 72, 191, 105));
        ListaAfferenze->setSelectionMode(QAbstractItemView::MultiSelection);
        stackedWidget->addWidget(PaginaAutori);
        PaginaConferenze = new QWidget();
        PaginaConferenze->setObjectName(QString::fromUtf8("PaginaConferenze"));
        NomeInput_2 = new QLineEdit(PaginaConferenze);
        NomeInput_2->setObjectName(QString::fromUtf8("NomeInput_2"));
        NomeInput_2->setGeometry(QRect(121, 121, 125, 27));
        AcronimoInput = new QLineEdit(PaginaConferenze);
        AcronimoInput->setObjectName(QString::fromUtf8("AcronimoInput"));
        AcronimoInput->setGeometry(QRect(121, 154, 125, 27));
        LuogoInput = new QLineEdit(PaginaConferenze);
        LuogoInput->setObjectName(QString::fromUtf8("LuogoInput"));
        LuogoInput->setGeometry(QRect(121, 187, 125, 27));
        CalendarioConferenza = new QCalendarWidget(PaginaConferenze);
        CalendarioConferenza->setObjectName(QString::fromUtf8("CalendarioConferenza"));
        CalendarioConferenza->setGeometry(QRect(240, 256, 231, 145));
        QPalette palette1;
        QBrush brush2(QColor(46, 52, 54, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        QBrush brush3(QColor(145, 145, 145, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        CalendarioConferenza->setPalette(palette1);
        CalendarioConferenza->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(46, 52, 54);"));
        CalendarioConferenza->setGridVisible(true);
        CalendarioConferenza->setHorizontalHeaderFormat(QCalendarWidget::NoHorizontalHeader);
        CalendarioConferenza->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        CalendarioConferenza->setNavigationBarVisible(true);
        CalendarioConferenza->setDateEditEnabled(true);
        numPartecipanti = new QSpinBox(PaginaConferenze);
        numPartecipanti->setObjectName(QString::fromUtf8("numPartecipanti"));
        numPartecipanti->setGeometry(QRect(430, 120, 45, 28));
        Nome_2 = new QLabel(PaginaConferenze);
        Nome_2->setObjectName(QString::fromUtf8("Nome_2"));
        Nome_2->setGeometry(QRect(30, 128, 42, 19));
        Acronimo = new QLabel(PaginaConferenze);
        Acronimo->setObjectName(QString::fromUtf8("Acronimo"));
        Acronimo->setGeometry(QRect(30, 160, 66, 19));
        Luogo = new QLabel(PaginaConferenze);
        Luogo->setObjectName(QString::fromUtf8("Luogo"));
        Luogo->setGeometry(QRect(30, 192, 42, 19));
        Partecipanti = new QLabel(PaginaConferenze);
        Partecipanti->setObjectName(QString::fromUtf8("Partecipanti"));
        Partecipanti->setGeometry(QRect(260, 128, 91, 17));
        Organizzatori = new QLabel(PaginaConferenze);
        Organizzatori->setObjectName(QString::fromUtf8("Organizzatori"));
        Organizzatori->setGeometry(QRect(560, 96, 151, 33));
        QFont font6;
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        Organizzatori->setFont(font6);
        AggiungiConferenza = new QPushButton(PaginaConferenze);
        AggiungiConferenza->setObjectName(QString::fromUtf8("AggiungiConferenza"));
        AggiungiConferenza->setGeometry(QRect(190, 512, 181, 41));
        AggiungiConferenza->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        NomePersona = new QLineEdit(PaginaConferenze);
        NomePersona->setObjectName(QString::fromUtf8("NomePersona"));
        NomePersona->setGeometry(QRect(500, 224, 111, 25));
        CreaOrganizzatore = new QPushButton(PaginaConferenze);
        CreaOrganizzatore->setObjectName(QString::fromUtf8("CreaOrganizzatore"));
        CreaOrganizzatore->setGeometry(QRect(560, 264, 151, 16));
        CognomePersona = new QLineEdit(PaginaConferenze);
        CognomePersona->setObjectName(QString::fromUtf8("CognomePersona"));
        CognomePersona->setGeometry(QRect(650, 224, 111, 25));
        label_3 = new QLabel(PaginaConferenze);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(540, 200, 31, 19));
        QFont font7;
        font7.setPointSize(8);
        label_3->setFont(font7);
        label_4 = new QLabel(PaginaConferenze);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(680, 200, 51, 19));
        label_4->setFont(font7);
        ListaOrganizzatori = new QListWidget(PaginaConferenze);
        ListaOrganizzatori->setObjectName(QString::fromUtf8("ListaOrganizzatori"));
        ListaOrganizzatori->setGeometry(QRect(500, 312, 261, 161));
        QFont font8;
        font8.setPointSize(10);
        ListaOrganizzatori->setFont(font8);
        ListaOrganizzatori->setSelectionMode(QAbstractItemView::MultiSelection);
        TITLE_3 = new QLabel(PaginaConferenze);
        TITLE_3->setObjectName(QString::fromUtf8("TITLE_3"));
        TITLE_3->setGeometry(QRect(120, 8, 271, 81));
        QFont font9;
        font9.setPointSize(16);
        font9.setBold(true);
        font9.setWeight(75);
        TITLE_3->setFont(font9);
        label_5 = new QLabel(PaginaConferenze);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 328, 191, 153));
        QFont font10;
        font10.setPointSize(9);
        font10.setItalic(true);
        label_5->setFont(font10);
        label_2 = new QLabel(PaginaConferenze);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(550, 128, 221, 73));
        label_2->setFont(font10);
        VisualizzaConferenze = new QPushButton(PaginaConferenze);
        VisualizzaConferenze->setObjectName(QString::fromUtf8("VisualizzaConferenze"));
        VisualizzaConferenze->setGeometry(QRect(410, 512, 181, 41));
        label_13 = new QLabel(PaginaConferenze);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(530, 296, 221, 16));
        label_13->setFont(font5);
        label_13->setFrameShape(QFrame::NoFrame);
        label_13->setFrameShadow(QFrame::Plain);
        stackedWidget->addWidget(PaginaConferenze);
        PaginaRiviste = new QWidget();
        PaginaRiviste->setObjectName(QString::fromUtf8("PaginaRiviste"));
        VolumeInput = new QSpinBox(PaginaRiviste);
        VolumeInput->setObjectName(QString::fromUtf8("VolumeInput"));
        VolumeInput->setGeometry(QRect(270, 280, 45, 28));
        AggiungiRivista = new QPushButton(PaginaRiviste);
        AggiungiRivista->setObjectName(QString::fromUtf8("AggiungiRivista"));
        AggiungiRivista->setGeometry(QRect(160, 496, 181, 41));
        AggiungiRivista->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        EditoreInput = new QLineEdit(PaginaRiviste);
        EditoreInput->setObjectName(QString::fromUtf8("EditoreInput"));
        EditoreInput->setGeometry(QRect(191, 243, 125, 27));
        Volume = new QLabel(PaginaRiviste);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(100, 288, 91, 17));
        Editore = new QLabel(PaginaRiviste);
        Editore->setObjectName(QString::fromUtf8("Editore"));
        Editore->setGeometry(QRect(100, 248, 51, 19));
        CalendarioRivista = new QCalendarWidget(PaginaRiviste);
        CalendarioRivista->setObjectName(QString::fromUtf8("CalendarioRivista"));
        CalendarioRivista->setGeometry(QRect(490, 112, 231, 145));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Highlight, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Highlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush2);
        CalendarioRivista->setPalette(palette2);
        CalendarioRivista->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(46, 52, 54);"));
        CalendarioRivista->setGridVisible(true);
        CalendarioRivista->setHorizontalHeaderFormat(QCalendarWidget::NoHorizontalHeader);
        CalendarioRivista->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
        CalendarioRivista->setNavigationBarVisible(true);
        CalendarioRivista->setDateEditEnabled(true);
        Nome_3 = new QLabel(PaginaRiviste);
        Nome_3->setObjectName(QString::fromUtf8("Nome_3"));
        Nome_3->setGeometry(QRect(100, 152, 42, 19));
        NomeInput_3 = new QLineEdit(PaginaRiviste);
        NomeInput_3->setObjectName(QString::fromUtf8("NomeInput_3"));
        NomeInput_3->setGeometry(QRect(191, 145, 125, 27));
        AcronimoInput_2 = new QLineEdit(PaginaRiviste);
        AcronimoInput_2->setObjectName(QString::fromUtf8("AcronimoInput_2"));
        AcronimoInput_2->setGeometry(QRect(191, 178, 125, 27));
        Acronimo_2 = new QLabel(PaginaRiviste);
        Acronimo_2->setObjectName(QString::fromUtf8("Acronimo_2"));
        Acronimo_2->setGeometry(QRect(100, 184, 66, 19));
        TITLE_4 = new QLabel(PaginaRiviste);
        TITLE_4->setObjectName(QString::fromUtf8("TITLE_4"));
        TITLE_4->setGeometry(QRect(290, 16, 191, 81));
        TITLE_4->setFont(font9);
        label_6 = new QLabel(PaginaRiviste);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(140, 336, 181, 137));
        label_6->setFont(font10);
        VisualizzaRiviste = new QPushButton(PaginaRiviste);
        VisualizzaRiviste->setObjectName(QString::fromUtf8("VisualizzaRiviste"));
        VisualizzaRiviste->setGeometry(QRect(430, 496, 181, 41));
        stackedWidget->addWidget(PaginaRiviste);
        PaginaDivulgazioni = new QWidget();
        PaginaDivulgazioni->setObjectName(QString::fromUtf8("PaginaDivulgazioni"));
        StampaDivulgazioni = new QPlainTextEdit(PaginaDivulgazioni);
        StampaDivulgazioni->setObjectName(QString::fromUtf8("StampaDivulgazioni"));
        StampaDivulgazioni->setGeometry(QRect(30, 136, 731, 409));
        SvuotaDivulgazioni = new QPushButton(PaginaDivulgazioni);
        SvuotaDivulgazioni->setObjectName(QString::fromUtf8("SvuotaDivulgazioni"));
        SvuotaDivulgazioni->setGeometry(QRect(70, 88, 241, 33));
        VisualizzaDivulgazioni = new QPushButton(PaginaDivulgazioni);
        VisualizzaDivulgazioni->setObjectName(QString::fromUtf8("VisualizzaDivulgazioni"));
        VisualizzaDivulgazioni->setGeometry(QRect(470, 88, 241, 33));
        VisualizzaDivulgazioni->setFont(font1);
        VisualizzaDivulgazioni->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        TITLE_5 = new QLabel(PaginaDivulgazioni);
        TITLE_5->setObjectName(QString::fromUtf8("TITLE_5"));
        TITLE_5->setGeometry(QRect(220, 40, 351, 25));
        TITLE_5->setFont(font2);
        stackedWidget->addWidget(PaginaDivulgazioni);
        PaginaArticoli = new QWidget();
        PaginaArticoli->setObjectName(QString::fromUtf8("PaginaArticoli"));
        TitoloInput = new QLineEdit(PaginaArticoli);
        TitoloInput->setObjectName(QString::fromUtf8("TitoloInput"));
        TitoloInput->setGeometry(QRect(111, 81, 125, 27));
        IdentificativoInput = new QLineEdit(PaginaArticoli);
        IdentificativoInput->setObjectName(QString::fromUtf8("IdentificativoInput"));
        IdentificativoInput->setGeometry(QRect(111, 114, 125, 27));
        Identificativo = new QLabel(PaginaArticoli);
        Identificativo->setObjectName(QString::fromUtf8("Identificativo"));
        Identificativo->setGeometry(QRect(20, 120, 91, 19));
        Pagine = new QLabel(PaginaArticoli);
        Pagine->setObjectName(QString::fromUtf8("Pagine"));
        Pagine->setGeometry(QRect(20, 152, 46, 28));
        PagineInput = new QSpinBox(PaginaArticoli);
        PagineInput->setObjectName(QString::fromUtf8("PagineInput"));
        PagineInput->setGeometry(QRect(80, 152, 67, 28));
        Titolo = new QLabel(PaginaArticoli);
        Titolo->setObjectName(QString::fromUtf8("Titolo"));
        Titolo->setGeometry(QRect(20, 88, 42, 19));
        Prezzo = new QLabel(PaginaArticoli);
        Prezzo->setObjectName(QString::fromUtf8("Prezzo"));
        Prezzo->setGeometry(QRect(20, 186, 46, 28));
        PrezzoInput = new QDoubleSpinBox(PaginaArticoli);
        PrezzoInput->setObjectName(QString::fromUtf8("PrezzoInput"));
        PrezzoInput->setGeometry(QRect(80, 186, 67, 28));
        TITLE_6 = new QLabel(PaginaArticoli);
        TITLE_6->setObjectName(QString::fromUtf8("TITLE_6"));
        TITLE_6->setGeometry(QRect(300, 24, 201, 25));
        TITLE_6->setFont(font2);
        Autori = new QLabel(PaginaArticoli);
        Autori->setObjectName(QString::fromUtf8("Autori"));
        Autori->setGeometry(QRect(500, 56, 51, 19));
        Articoli = new QLabel(PaginaArticoli);
        Articoli->setObjectName(QString::fromUtf8("Articoli"));
        Articoli->setGeometry(QRect(500, 160, 51, 19));
        ConferenzeRiviste = new QLabel(PaginaArticoli);
        ConferenzeRiviste->setObjectName(QString::fromUtf8("ConferenzeRiviste"));
        ConferenzeRiviste->setGeometry(QRect(500, 232, 81, 41));
        ConferenzeRiviste->setFont(font8);
        ConferenzeRivisteBox = new QComboBox(PaginaArticoli);
        ConferenzeRivisteBox->setObjectName(QString::fromUtf8("ConferenzeRivisteBox"));
        ConferenzeRivisteBox->setGeometry(QRect(580, 240, 201, 27));
        VisualizzaArticoli = new QPushButton(PaginaArticoli);
        VisualizzaArticoli->setObjectName(QString::fromUtf8("VisualizzaArticoli"));
        VisualizzaArticoli->setGeometry(QRect(270, 280, 201, 33));
        VisualizzaArticoli->setFont(font1);
        VisualizzaArticoli->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        SvuotaArticoli = new QPushButton(PaginaArticoli);
        SvuotaArticoli->setObjectName(QString::fromUtf8("SvuotaArticoli"));
        SvuotaArticoli->setGeometry(QRect(20, 299, 201, 16));
        StampaArticoli = new QPlainTextEdit(PaginaArticoli);
        StampaArticoli->setObjectName(QString::fromUtf8("StampaArticoli"));
        StampaArticoli->setGeometry(QRect(10, 320, 771, 233));
        keyword = new QLabel(PaginaArticoli);
        keyword->setObjectName(QString::fromUtf8("keyword"));
        keyword->setGeometry(QRect(260, 80, 71, 19));
        KeywordInput = new QLineEdit(PaginaArticoli);
        KeywordInput->setObjectName(QString::fromUtf8("KeywordInput"));
        KeywordInput->setGeometry(QRect(350, 80, 111, 27));
        CreaKeyword = new QPushButton(PaginaArticoli);
        CreaKeyword->setObjectName(QString::fromUtf8("CreaKeyword"));
        CreaKeyword->setGeometry(QRect(300, 112, 121, 16));
        ListaKeyword = new QListWidget(PaginaArticoli);
        ListaKeyword->setObjectName(QString::fromUtf8("ListaKeyword"));
        ListaKeyword->setGeometry(QRect(260, 160, 201, 97));
        ListaKeyword->setSelectionMode(QAbstractItemView::MultiSelection);
        AggiungiArticolo = new QPushButton(PaginaArticoli);
        AggiungiArticolo->setObjectName(QString::fromUtf8("AggiungiArticolo"));
        AggiungiArticolo->setGeometry(QRect(60, 240, 91, 25));
        AggiungiArticolo->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(PaginaArticoli);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(490, 184, 101, 33));
        QFont font11;
        font11.setPointSize(7);
        font11.setItalic(true);
        label_7->setFont(font11);
        label_8 = new QLabel(PaginaArticoli);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 80, 121, 33));
        label_8->setFont(font11);
        label_9 = new QLabel(PaginaArticoli);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(540, 272, 241, 41));
        label_9->setFont(font11);
        label_14 = new QLabel(PaginaArticoli);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(280, 144, 171, 16));
        label_14->setFont(font5);
        label_14->setFrameShape(QFrame::NoFrame);
        label_14->setFrameShadow(QFrame::Plain);
        ListaAutori = new QListWidget(PaginaArticoli);
        ListaAutori->setObjectName(QString::fromUtf8("ListaAutori"));
        ListaAutori->setGeometry(QRect(590, 48, 191, 81));
        ListaAutori->setSelectionMode(QAbstractItemView::MultiSelection);
        ListaArticoli = new QListWidget(PaginaArticoli);
        ListaArticoli->setObjectName(QString::fromUtf8("ListaArticoli"));
        ListaArticoli->setGeometry(QRect(590, 144, 191, 81));
        ListaArticoli->setSelectionMode(QAbstractItemView::MultiSelection);
        stackedWidget->addWidget(PaginaArticoli);
        PaginaVisualizzaArticoli = new QWidget();
        PaginaVisualizzaArticoli->setObjectName(QString::fromUtf8("PaginaVisualizzaArticoli"));
        TITLE_7 = new QLabel(PaginaVisualizzaArticoli);
        TITLE_7->setObjectName(QString::fromUtf8("TITLE_7"));
        TITLE_7->setGeometry(QRect(260, 32, 271, 25));
        TITLE_7->setFont(font2);
        VisualizzaArticoliAutore = new QPushButton(PaginaVisualizzaArticoli);
        VisualizzaArticoliAutore->setObjectName(QString::fromUtf8("VisualizzaArticoliAutore"));
        VisualizzaArticoliAutore->setGeometry(QRect(50, 128, 151, 25));
        VisualizzaArticoliAutore->setFont(font1);
        VisualizzaArticoliAutore->setStyleSheet(QString::fromUtf8(""));
        SvuotaFinestra = new QPushButton(PaginaVisualizzaArticoli);
        SvuotaFinestra->setObjectName(QString::fromUtf8("SvuotaFinestra"));
        SvuotaFinestra->setGeometry(QRect(320, 184, 131, 16));
        StrutturaBox = new QComboBox(PaginaVisualizzaArticoli);
        StrutturaBox->setObjectName(QString::fromUtf8("StrutturaBox"));
        StrutturaBox->setGeometry(QRect(350, 80, 141, 25));
        Struttura = new QLabel(PaginaVisualizzaArticoli);
        Struttura->setObjectName(QString::fromUtf8("Struttura"));
        Struttura->setGeometry(QRect(260, 80, 81, 25));
        ConferenzeBox = new QComboBox(PaginaVisualizzaArticoli);
        ConferenzeBox->setObjectName(QString::fromUtf8("ConferenzeBox"));
        ConferenzeBox->setGeometry(QRect(620, 80, 141, 25));
        Conferenza = new QLabel(PaginaVisualizzaArticoli);
        Conferenza->setObjectName(QString::fromUtf8("Conferenza"));
        Conferenza->setGeometry(QRect(510, 80, 101, 25));
        VisualizzaArticoliStruttura = new QPushButton(PaginaVisualizzaArticoli);
        VisualizzaArticoliStruttura->setObjectName(QString::fromUtf8("VisualizzaArticoliStruttura"));
        VisualizzaArticoliStruttura->setGeometry(QRect(290, 128, 151, 25));
        VisualizzaArticoliStruttura->setFont(font1);
        VisualizzaArticoliStruttura->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        VisualizzaArticoliConferenza = new QPushButton(PaginaVisualizzaArticoli);
        VisualizzaArticoliConferenza->setObjectName(QString::fromUtf8("VisualizzaArticoliConferenza"));
        VisualizzaArticoliConferenza->setGeometry(QRect(550, 128, 151, 25));
        VisualizzaArticoliConferenza->setFont(font1);
        VisualizzaArticoliConferenza->setStyleSheet(QString::fromUtf8(""));
        VisualizzaArticoliDi = new QPlainTextEdit(PaginaVisualizzaArticoli);
        VisualizzaArticoliDi->setObjectName(QString::fromUtf8("VisualizzaArticoliDi"));
        VisualizzaArticoliDi->setGeometry(QRect(0, 200, 781, 353));
        SEZIONEB = new QLabel(PaginaVisualizzaArticoli);
        SEZIONEB->setObjectName(QString::fromUtf8("SEZIONEB"));
        SEZIONEB->setGeometry(QRect(40, 24, 81, 19));
        SEZIONEB->setFont(font10);
        AutoreBox = new QComboBox(PaginaVisualizzaArticoli);
        AutoreBox->setObjectName(QString::fromUtf8("AutoreBox"));
        AutoreBox->setGeometry(QRect(90, 80, 141, 25));
        Struttura_2 = new QLabel(PaginaVisualizzaArticoli);
        Struttura_2->setObjectName(QString::fromUtf8("Struttura_2"));
        Struttura_2->setGeometry(QRect(20, 80, 61, 25));
        stackedWidget->addWidget(PaginaVisualizzaArticoli);
        PaginaPrezzi = new QWidget();
        PaginaPrezzi->setObjectName(QString::fromUtf8("PaginaPrezzi"));
        TITLE_8 = new QLabel(PaginaPrezzi);
        TITLE_8->setObjectName(QString::fromUtf8("TITLE_8"));
        TITLE_8->setGeometry(QRect(280, 24, 221, 25));
        TITLE_8->setFont(font2);
        SvuotaFinestra_2 = new QPushButton(PaginaPrezzi);
        SvuotaFinestra_2->setObjectName(QString::fromUtf8("SvuotaFinestra_2"));
        SvuotaFinestra_2->setGeometry(QRect(320, 184, 131, 16));
        VisualizzaArticoliPrezzi = new QPlainTextEdit(PaginaPrezzi);
        VisualizzaArticoliPrezzi->setObjectName(QString::fromUtf8("VisualizzaArticoliPrezzi"));
        VisualizzaArticoliPrezzi->setGeometry(QRect(10, 200, 771, 353));
        SEZIONEC = new QLabel(PaginaPrezzi);
        SEZIONEC->setObjectName(QString::fromUtf8("SEZIONEC"));
        SEZIONEC->setGeometry(QRect(40, 24, 81, 19));
        SEZIONEC->setFont(font10);
        AutoreBox_2 = new QComboBox(PaginaPrezzi);
        AutoreBox_2->setObjectName(QString::fromUtf8("AutoreBox_2"));
        AutoreBox_2->setGeometry(QRect(90, 80, 141, 25));
        Rivista = new QLabel(PaginaPrezzi);
        Rivista->setObjectName(QString::fromUtf8("Rivista"));
        Rivista->setGeometry(QRect(530, 48, 71, 25));
        ArticoliCostosiAutore = new QPushButton(PaginaPrezzi);
        ArticoliCostosiAutore->setObjectName(QString::fromUtf8("ArticoliCostosiAutore"));
        ArticoliCostosiAutore->setGeometry(QRect(40, 128, 161, 25));
        ArticoliCostosiAutore->setFont(font1);
        ArticoliCostosiAutore->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        KeywordMaggiorGuadagno = new QPushButton(PaginaPrezzi);
        KeywordMaggiorGuadagno->setObjectName(QString::fromUtf8("KeywordMaggiorGuadagno"));
        KeywordMaggiorGuadagno->setGeometry(QRect(310, 80, 151, 73));
        KeywordMaggiorGuadagno->setFont(font1);
        KeywordMaggiorGuadagno->setStyleSheet(QString::fromUtf8(""));
        EntrateRivista = new QPushButton(PaginaPrezzi);
        EntrateRivista->setObjectName(QString::fromUtf8("EntrateRivista"));
        EntrateRivista->setGeometry(QRect(570, 128, 161, 25));
        EntrateRivista->setFont(font1);
        EntrateRivista->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        RivistaBox = new QComboBox(PaginaPrezzi);
        RivistaBox->setObjectName(QString::fromUtf8("RivistaBox"));
        RivistaBox->setGeometry(QRect(620, 48, 141, 25));
        Autore = new QLabel(PaginaPrezzi);
        Autore->setObjectName(QString::fromUtf8("Autore"));
        Autore->setGeometry(QRect(20, 80, 61, 25));
        Anno = new QLabel(PaginaPrezzi);
        Anno->setObjectName(QString::fromUtf8("Anno"));
        Anno->setGeometry(QRect(550, 88, 51, 25));
        AnnoInput = new QLineEdit(PaginaPrezzi);
        AnnoInput->setObjectName(QString::fromUtf8("AnnoInput"));
        AnnoInput->setGeometry(QRect(660, 88, 101, 27));
        stackedWidget->addWidget(PaginaPrezzi);
        PaginaArticoliOrdinati = new QWidget();
        PaginaArticoliOrdinati->setObjectName(QString::fromUtf8("PaginaArticoliOrdinati"));
        TITLE_9 = new QLabel(PaginaArticoliOrdinati);
        TITLE_9->setObjectName(QString::fromUtf8("TITLE_9"));
        TITLE_9->setGeometry(QRect(290, 32, 191, 25));
        TITLE_9->setFont(font2);
        Rivista_2 = new QLabel(PaginaArticoliOrdinati);
        Rivista_2->setObjectName(QString::fromUtf8("Rivista_2"));
        Rivista_2->setGeometry(QRect(60, 72, 16, 25));
        QFont font12;
        font12.setPointSize(9);
        Rivista_2->setFont(font12);
        OrdinaConferenze = new QPushButton(PaginaArticoliOrdinati);
        OrdinaConferenze->setObjectName(QString::fromUtf8("OrdinaConferenze"));
        OrdinaConferenze->setGeometry(QRect(90, 160, 141, 25));
        OrdinaConferenze->setFont(font1);
        OrdinaConferenze->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        SEZIONED = new QLabel(PaginaArticoliOrdinati);
        SEZIONED->setObjectName(QString::fromUtf8("SEZIONED"));
        SEZIONED->setGeometry(QRect(40, 32, 81, 19));
        SEZIONED->setFont(font10);
        label_16 = new QLabel(PaginaArticoliOrdinati);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(90, 56, 151, 65));
        label_16->setFont(font12);
        SvuotaFinestra_3 = new QPushButton(PaginaArticoliOrdinati);
        SvuotaFinestra_3->setObjectName(QString::fromUtf8("SvuotaFinestra_3"));
        SvuotaFinestra_3->setGeometry(QRect(310, 184, 131, 16));
        VisualizzaArticoliOdirnati = new QPlainTextEdit(PaginaArticoliOrdinati);
        VisualizzaArticoliOdirnati->setObjectName(QString::fromUtf8("VisualizzaArticoliOdirnati"));
        VisualizzaArticoliOdirnati->setGeometry(QRect(0, 200, 781, 353));
        ConferenzeBox_2 = new QComboBox(PaginaArticoliOrdinati);
        ConferenzeBox_2->setObjectName(QString::fromUtf8("ConferenzeBox_2"));
        ConferenzeBox_2->setGeometry(QRect(60, 120, 221, 25));
        KeywordBox = new QComboBox(PaginaArticoliOrdinati);
        KeywordBox->setObjectName(QString::fromUtf8("KeywordBox"));
        KeywordBox->setGeometry(QRect(530, 120, 221, 25));
        Rivista_3 = new QLabel(PaginaArticoliOrdinati);
        Rivista_3->setObjectName(QString::fromUtf8("Rivista_3"));
        Rivista_3->setGeometry(QRect(530, 72, 16, 25));
        Rivista_3->setFont(font12);
        label_17 = new QLabel(PaginaArticoliOrdinati);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(560, 56, 151, 65));
        label_17->setFont(font12);
        OrdinaKeyword = new QPushButton(PaginaArticoliOrdinati);
        OrdinaKeyword->setObjectName(QString::fromUtf8("OrdinaKeyword"));
        OrdinaKeyword->setGeometry(QRect(560, 160, 141, 25));
        OrdinaKeyword->setFont(font1);
        OrdinaKeyword->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(PaginaArticoliOrdinati);
        PaginaRivisteSpecialistiche = new QWidget();
        PaginaRivisteSpecialistiche->setObjectName(QString::fromUtf8("PaginaRivisteSpecialistiche"));
        TITLE_10 = new QLabel(PaginaRivisteSpecialistiche);
        TITLE_10->setObjectName(QString::fromUtf8("TITLE_10"));
        TITLE_10->setGeometry(QRect(270, 32, 231, 25));
        TITLE_10->setFont(font2);
        VisualizzaRivisteSpecialistiche = new QPlainTextEdit(PaginaRivisteSpecialistiche);
        VisualizzaRivisteSpecialistiche->setObjectName(QString::fromUtf8("VisualizzaRivisteSpecialistiche"));
        VisualizzaRivisteSpecialistiche->setGeometry(QRect(0, 200, 781, 353));
        TastoRivisteSpecilistiche = new QPushButton(PaginaRivisteSpecialistiche);
        TastoRivisteSpecilistiche->setObjectName(QString::fromUtf8("TastoRivisteSpecilistiche"));
        TastoRivisteSpecilistiche->setGeometry(QRect(270, 128, 231, 25));
        TastoRivisteSpecilistiche->setFont(font1);
        TastoRivisteSpecilistiche->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        SEZIONEE = new QLabel(PaginaRivisteSpecialistiche);
        SEZIONEE->setObjectName(QString::fromUtf8("SEZIONEE"));
        SEZIONEE->setGeometry(QRect(40, 32, 81, 19));
        SEZIONEE->setFont(font10);
        SvuotaFinestra_4 = new QPushButton(PaginaRivisteSpecialistiche);
        SvuotaFinestra_4->setObjectName(QString::fromUtf8("SvuotaFinestra_4"));
        SvuotaFinestra_4->setGeometry(QRect(320, 184, 131, 16));
        label_21 = new QLabel(PaginaRivisteSpecialistiche);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(240, 88, 281, 25));
        stackedWidget->addWidget(PaginaRivisteSpecialistiche);
        PaginaOperazioniAvanzate = new QWidget();
        PaginaOperazioniAvanzate->setObjectName(QString::fromUtf8("PaginaOperazioniAvanzate"));
        SEZIONEE_2 = new QLabel(PaginaOperazioniAvanzate);
        SEZIONEE_2->setObjectName(QString::fromUtf8("SEZIONEE_2"));
        SEZIONEE_2->setGeometry(QRect(40, 32, 81, 19));
        SEZIONEE_2->setFont(font10);
        TITLE_11 = new QLabel(PaginaOperazioniAvanzate);
        TITLE_11->setObjectName(QString::fromUtf8("TITLE_11"));
        TITLE_11->setGeometry(QRect(270, 32, 231, 25));
        TITLE_11->setFont(font2);
        VisualizzaOperazioniAvanzate = new QPlainTextEdit(PaginaOperazioniAvanzate);
        VisualizzaOperazioniAvanzate->setObjectName(QString::fromUtf8("VisualizzaOperazioniAvanzate"));
        VisualizzaOperazioniAvanzate->setGeometry(QRect(0, 200, 781, 353));
        SvuotaFinestra_5 = new QPushButton(PaginaOperazioniAvanzate);
        SvuotaFinestra_5->setObjectName(QString::fromUtf8("SvuotaFinestra_5"));
        SvuotaFinestra_5->setGeometry(QRect(320, 184, 131, 16));
        TastoOrdinaCorrelati = new QPushButton(PaginaOperazioniAvanzate);
        TastoOrdinaCorrelati->setObjectName(QString::fromUtf8("TastoOrdinaCorrelati"));
        TastoOrdinaCorrelati->setGeometry(QRect(50, 144, 141, 25));
        TastoOrdinaCorrelati->setFont(font1);
        TastoOrdinaCorrelati->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        label_18 = new QLabel(PaginaOperazioniAvanzate);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 64, 181, 73));
        ConferenzeBox_3 = new QComboBox(PaginaOperazioniAvanzate);
        ConferenzeBox_3->setObjectName(QString::fromUtf8("ConferenzeBox_3"));
        ConferenzeBox_3->setGeometry(QRect(330, 80, 161, 27));
        Conferenze = new QLabel(PaginaOperazioniAvanzate);
        Conferenze->setObjectName(QString::fromUtf8("Conferenze"));
        Conferenze->setGeometry(QRect(240, 80, 81, 25));
        Conferenze->setFont(font8);
        TastoConferenzeSimili = new QPushButton(PaginaOperazioniAvanzate);
        TastoConferenzeSimili->setObjectName(QString::fromUtf8("TastoConferenzeSimili"));
        TastoConferenzeSimili->setGeometry(QRect(300, 128, 141, 25));
        TastoConferenzeSimili->setFont(font1);
        TastoConferenzeSimili->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(PaginaOperazioniAvanzate);
        Home = new QPushButton(centralwidget);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(9, 570, 80, 27));
        Home->setFont(font1);
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Progetto", nullptr));
        VaiPaginaAutori->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        VaiPaginaConferenze->setText(QCoreApplication::translate("MainWindow", "Conferenza", nullptr));
        VaiPaginaRiviste->setText(QCoreApplication::translate("MainWindow", "Rivista", nullptr));
        VaiPaginaArticoli->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Sezione A", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Sezione B", nullptr));
        VaiPaginaVisualizzaArticoli->setText(QCoreApplication::translate("MainWindow", "Visualizza articoli di", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Sezione C", nullptr));
        VaiPaginaPrezziGuadagni->setText(QCoreApplication::translate("MainWindow", "Visualizza prezzi/guadagni...", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Sezione D", nullptr));
        VaiPaginaArticoliOridnati->setText(QCoreApplication::translate("MainWindow", "Visualizza articoli ordinati", nullptr));
        VaiPaginaRivisteSpecialistche->setText(QCoreApplication::translate("MainWindow", "Visualizza Riviste Specialistiche", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Sezione E", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Sezione F", nullptr));
        VaiPaginaOperazioniAvanzate->setText(QCoreApplication::translate("MainWindow", "Vai Pagina Operazioni Avanzate", nullptr));
        ID->setText(QCoreApplication::translate("MainWindow", "Identificativo", nullptr));
        Nome->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        Cognome->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        TITLE->setText(QCoreApplication::translate("MainWindow", "AGGIUNGI AUTORE", nullptr));
        Afferenze->setText(QCoreApplication::translate("MainWindow", "Afferenze", nullptr));
        AggiungiAutore->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        VisualizzaAutori->setText(QCoreApplication::translate("MainWindow", "Visualizza Autori", nullptr));
        NomeInput->setText(QString());
        IDinput->setText(QString());
        AfferenzaInput->setText(QString());
        TITLE_2->setText(QCoreApplication::translate("MainWindow", "CREA AFFERENZA", nullptr));
        SpiegazioneAfferenze->setText(QCoreApplication::translate("MainWindow", "L'afferenza che creerai\n"
"dev'essere unica.\n"
"Essa sar\303\240 aggiunta\n"
"nel riquadro \"Afferenze\"\n"
"dove potrai associarla\n"
"ad un autore.", nullptr));
        CreaAfferenza->setText(QCoreApplication::translate("MainWindow", "Crea afferenza", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Seleziona le\n"
"afferenze da\n"
" aggiungere\n"
"all'autore", nullptr));
        SvuotaAutori->setText(QCoreApplication::translate("MainWindow", "Svuota Autori", nullptr));
        Nome_2->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        Acronimo->setText(QCoreApplication::translate("MainWindow", "Acronimo", nullptr));
        Luogo->setText(QCoreApplication::translate("MainWindow", "Luogo", nullptr));
        Partecipanti->setText(QCoreApplication::translate("MainWindow", "Partecipanti", nullptr));
        Organizzatori->setText(QCoreApplication::translate("MainWindow", "Inserisci organizzatori", nullptr));
        AggiungiConferenza->setText(QCoreApplication::translate("MainWindow", "Aggiungi Conferenza", nullptr));
        CreaOrganizzatore->setText(QCoreApplication::translate("MainWindow", "Crea Organizzatore", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nome ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        TITLE_3->setText(QCoreApplication::translate("MainWindow", "AGGIUNGI CONFERENZA", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Per creare una conferenza:\n"
" - Inserire un nome;\n"
" - Inserire un acronimo;\n"
" -Inserire una data;\n"
" - Inserire un luogo;\n"
" - Inserire il numero di partecipanti;\n"
" - Inserire almeno un organizzatore.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Crea prima un organizzatore\n"
"e poi aggiungilo alla conferenza\n"
"che stai creando.", nullptr));
        VisualizzaConferenze->setText(QCoreApplication::translate("MainWindow", "Visualizza Conferenze", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Seleziona l'organizzatore o gli organizzatori", nullptr));
        AggiungiRivista->setText(QCoreApplication::translate("MainWindow", "Aggiungi Rivista", nullptr));
        Volume->setText(QCoreApplication::translate("MainWindow", "Volume", nullptr));
        Editore->setText(QCoreApplication::translate("MainWindow", "Editore", nullptr));
        Nome_3->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        Acronimo_2->setText(QCoreApplication::translate("MainWindow", "Acronimo", nullptr));
        TITLE_4->setText(QCoreApplication::translate("MainWindow", "AGGIUNGI RIVISTA", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Per creare una rivista:\n"
" - Inserire un nome;\n"
" - Inserire un acronimo;\n"
" -Inserire una data;\n"
" - Inserire la casa editrice;\n"
" - Inserire il volume.\n"
"", nullptr));
        VisualizzaRiviste->setText(QCoreApplication::translate("MainWindow", "Visualizza Riviste", nullptr));
        SvuotaDivulgazioni->setText(QCoreApplication::translate("MainWindow", "Svuota Conferenze e Riviste", nullptr));
        VisualizzaDivulgazioni->setText(QCoreApplication::translate("MainWindow", "Visualizza Conferenze e Riviste", nullptr));
        TITLE_5->setText(QCoreApplication::translate("MainWindow", "VISUALIZZA CONFERENZE E RIVISTE", nullptr));
        Identificativo->setText(QCoreApplication::translate("MainWindow", "Identificativo", nullptr));
        Pagine->setText(QCoreApplication::translate("MainWindow", "Pagine", nullptr));
        Titolo->setText(QCoreApplication::translate("MainWindow", "Titolo", nullptr));
        Prezzo->setText(QCoreApplication::translate("MainWindow", "Prezzo", nullptr));
        TITLE_6->setText(QCoreApplication::translate("MainWindow", "AGGIUNGI ARTICOLI", nullptr));
        Autori->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        Articoli->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        ConferenzeRiviste->setText(QCoreApplication::translate("MainWindow", "Conferenze\n"
"Riviste", nullptr));
        VisualizzaArticoli->setText(QCoreApplication::translate("MainWindow", "Visualizza Articoli", nullptr));
        SvuotaArticoli->setText(QCoreApplication::translate("MainWindow", "Svuota Articoli", nullptr));
        keyword->setText(QCoreApplication::translate("MainWindow", "Keywords", nullptr));
        CreaKeyword->setText(QCoreApplication::translate("MainWindow", "Crea keyword", nullptr));
        AggiungiArticolo->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Seleziona gli articoli\n"
"da aggiungere\n"
"all'articolo . . .", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Seleziona gli autori\n"
"da aggiungere\n"
"all'articolo . . .", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Seleziona la conferenza oppure la rivista\n"
"da aggiungere all'articolo.", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Seleziona la keyword o le keywords", nullptr));
        TITLE_7->setText(QCoreApplication::translate("MainWindow", "VISUALIZZA ARTICOLI DI...", nullptr));
        VisualizzaArticoliAutore->setText(QCoreApplication::translate("MainWindow", "Articoli autore", nullptr));
        SvuotaFinestra->setText(QCoreApplication::translate("MainWindow", "Svuota Finestra", nullptr));
        Struttura->setText(QCoreApplication::translate("MainWindow", "3) Struttura", nullptr));
        Conferenza->setText(QCoreApplication::translate("MainWindow", "4) Conferenza", nullptr));
        VisualizzaArticoliStruttura->setText(QCoreApplication::translate("MainWindow", "Articoli struttura", nullptr));
        VisualizzaArticoliConferenza->setText(QCoreApplication::translate("MainWindow", "Articoli conferenza", nullptr));
        SEZIONEB->setText(QCoreApplication::translate("MainWindow", "SEZIONE B", nullptr));
        Struttura_2->setText(QCoreApplication::translate("MainWindow", "1) Autore", nullptr));
        TITLE_8->setText(QCoreApplication::translate("MainWindow", "PREZZI <-> GUADAGNI", nullptr));
        SvuotaFinestra_2->setText(QCoreApplication::translate("MainWindow", "Svuota Finestra", nullptr));
        SEZIONEC->setText(QCoreApplication::translate("MainWindow", "SEZIONE C", nullptr));
        Rivista->setText(QCoreApplication::translate("MainWindow", "5) Rivista", nullptr));
        ArticoliCostosiAutore->setText(QCoreApplication::translate("MainWindow", "Articoli costosi autore", nullptr));
        KeywordMaggiorGuadagno->setText(QCoreApplication::translate("MainWindow", "Keyword\n"
"associata\n"
"alla maggior\n"
" entrata", nullptr));
        EntrateRivista->setText(QCoreApplication::translate("MainWindow", "Entrata annuale rivista", nullptr));
        Autore->setText(QCoreApplication::translate("MainWindow", "2) Autore", nullptr));
        Anno->setText(QCoreApplication::translate("MainWindow", "Anno", nullptr));
        TITLE_9->setText(QCoreApplication::translate("MainWindow", "ARTICOLI ORDINATI", nullptr));
        Rivista_2->setText(QCoreApplication::translate("MainWindow", "3) ", nullptr));
        OrdinaConferenze->setText(QCoreApplication::translate("MainWindow", "Ordina", nullptr));
        SEZIONED->setText(QCoreApplication::translate("MainWindow", "SEZIONE D", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "    Ordina gli ariticoli di una\n"
"conferenza in base al prezzo\n"
"                 crescente", nullptr));
        SvuotaFinestra_3->setText(QCoreApplication::translate("MainWindow", "Svuota Finestra", nullptr));
        Rivista_3->setText(QCoreApplication::translate("MainWindow", "5)", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "    Ordina gli articoli relativi\n"
"            ad una keyword\n"
"        secondo le modalit\303\240", nullptr));
        OrdinaKeyword->setText(QCoreApplication::translate("MainWindow", "Ordina", nullptr));
        TITLE_10->setText(QCoreApplication::translate("MainWindow", "RIVISTE SPECIALISTICHE", nullptr));
        TastoRivisteSpecilistiche->setText(QCoreApplication::translate("MainWindow", "Visualizza Riviste Specialistiche", nullptr));
        SEZIONEE->setText(QCoreApplication::translate("MainWindow", "SEZIONE E", nullptr));
        SvuotaFinestra_4->setText(QCoreApplication::translate("MainWindow", "Svuota Finestra", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "6) Stampa le riviste che sono specialistiche", nullptr));
        SEZIONEE_2->setText(QCoreApplication::translate("MainWindow", "SEZIONE F", nullptr));
        TITLE_11->setText(QCoreApplication::translate("MainWindow", "OPERAZIONI AVANZATE", nullptr));
        SvuotaFinestra_5->setText(QCoreApplication::translate("MainWindow", "Svuota Finestra", nullptr));
        TastoOrdinaCorrelati->setText(QCoreApplication::translate("MainWindow", "Visualizza", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "2) Visualizza gli articoli\n"
"in ordine decrescente dal\n"
"numero di articoli correlati", nullptr));
        Conferenze->setText(QCoreApplication::translate("MainWindow", "5) Conferenze", nullptr));
        TastoConferenzeSimili->setText(QCoreApplication::translate("MainWindow", "Visualizza", nullptr));
        Home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
