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
    QPushButton *Home;
    QStackedWidget *stackedWidget;
    QWidget *PaginaPrincipale;
    QPushButton *VaiPaginaAutori;
    QPushButton *VaiPaginaConferenze;
    QPushButton *VaiPaginaRiviste;
    QPushButton *VaiPaginaArticoli;
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
    QComboBox *AfferenzeBox;
    QLabel *SpiegazioneAfferenze;
    QPushButton *CreaAfferenza;
    QPushButton *AggiungiAfferenza;
    QLabel *label;
    QPushButton *SvuotaAutori;
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
    QPushButton *AggiungiOrganizzatore;
    QLabel *TITLE_3;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *VisualizzaConferenze;
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
    QComboBox *AutoriBox;
    QLabel *Articoli;
    QComboBox *ArticoliBox;
    QLabel *ConferenzeRiviste;
    QComboBox *ConferenzeRivisteBox;
    QPushButton *VisualizzaArticoli;
    QPushButton *SvuotaArticoli;
    QPlainTextEdit *StampaArticoli;
    QLabel *keyword;
    QLineEdit *KeywordInput;
    QPushButton *CreaKeyword;
    QListWidget *ListaKeyword;
    QPushButton *AggiungiKeyword;
    QPushButton *AggiungiArticolo;
    QPushButton *AddAutore;
    QPushButton *AddArticolo;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;

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
        MainWindow->setLocale(QLocale(QLocale::Italian, QLocale::Italy));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Home = new QPushButton(centralwidget);
        Home->setObjectName(QString::fromUtf8("Home"));
        Home->setGeometry(QRect(350, 576, 80, 27));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Home->setFont(font);
        Home->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 801, 569));
        PaginaPrincipale = new QWidget();
        PaginaPrincipale->setObjectName(QString::fromUtf8("PaginaPrincipale"));
        VaiPaginaAutori = new QPushButton(PaginaPrincipale);
        VaiPaginaAutori->setObjectName(QString::fromUtf8("VaiPaginaAutori"));
        VaiPaginaAutori->setGeometry(QRect(40, 56, 88, 27));
        VaiPaginaConferenze = new QPushButton(PaginaPrincipale);
        VaiPaginaConferenze->setObjectName(QString::fromUtf8("VaiPaginaConferenze"));
        VaiPaginaConferenze->setGeometry(QRect(160, 56, 88, 27));
        QFont font1;
        font1.setPointSize(11);
        VaiPaginaConferenze->setFont(font1);
        VaiPaginaRiviste = new QPushButton(PaginaPrincipale);
        VaiPaginaRiviste->setObjectName(QString::fromUtf8("VaiPaginaRiviste"));
        VaiPaginaRiviste->setGeometry(QRect(280, 56, 88, 27));
        VaiPaginaArticoli = new QPushButton(PaginaPrincipale);
        VaiPaginaArticoli->setObjectName(QString::fromUtf8("VaiPaginaArticoli"));
        VaiPaginaArticoli->setGeometry(QRect(400, 56, 88, 27));
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
        Afferenze->setGeometry(QRect(270, 88, 71, 25));
        AggiungiAutore = new QPushButton(PaginaAutori);
        AggiungiAutore->setObjectName(QString::fromUtf8("AggiungiAutore"));
        AggiungiAutore->setGeometry(QRect(70, 200, 91, 25));
        AggiungiAutore->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        StampaAutori = new QPlainTextEdit(PaginaAutori);
        StampaAutori->setObjectName(QString::fromUtf8("StampaAutori"));
        StampaAutori->setGeometry(QRect(10, 256, 781, 305));
        VisualizzaAutori = new QPushButton(PaginaAutori);
        VisualizzaAutori->setObjectName(QString::fromUtf8("VisualizzaAutori"));
        VisualizzaAutori->setGeometry(QRect(290, 208, 201, 33));
        VisualizzaAutori->setFont(font);
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
        AfferenzeBox = new QComboBox(PaginaAutori);
        AfferenzeBox->setObjectName(QString::fromUtf8("AfferenzeBox"));
        AfferenzeBox->setGeometry(QRect(350, 88, 191, 25));
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
        CreaAfferenza->setFont(font1);
        AggiungiAfferenza = new QPushButton(PaginaAutori);
        AggiungiAfferenza->setObjectName(QString::fromUtf8("AggiungiAfferenza"));
        AggiungiAfferenza->setGeometry(QRect(310, 160, 161, 33));
        QFont font5;
        font5.setPointSize(10);
        AggiungiAfferenza->setFont(font5);
        label = new QLabel(PaginaAutori);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 104, 161, 57));
        QFont font6;
        font6.setPointSize(8);
        font6.setItalic(true);
        font6.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font6);
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        SvuotaAutori = new QPushButton(PaginaAutori);
        SvuotaAutori->setObjectName(QString::fromUtf8("SvuotaAutori"));
        SvuotaAutori->setGeometry(QRect(20, 235, 201, 16));
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
        QFont font7;
        font7.setBold(true);
        font7.setItalic(false);
        font7.setWeight(75);
        Organizzatori->setFont(font7);
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
        QFont font8;
        font8.setPointSize(8);
        label_3->setFont(font8);
        label_4 = new QLabel(PaginaConferenze);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(680, 200, 51, 19));
        label_4->setFont(font8);
        ListaOrganizzatori = new QListWidget(PaginaConferenze);
        ListaOrganizzatori->setObjectName(QString::fromUtf8("ListaOrganizzatori"));
        ListaOrganizzatori->setGeometry(QRect(500, 296, 261, 153));
        AggiungiOrganizzatore = new QPushButton(PaginaConferenze);
        AggiungiOrganizzatore->setObjectName(QString::fromUtf8("AggiungiOrganizzatore"));
        AggiungiOrganizzatore->setGeometry(QRect(560, 464, 161, 25));
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
        VisualizzaDivulgazioni->setFont(font);
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
        Autori->setGeometry(QRect(500, 80, 51, 19));
        AutoriBox = new QComboBox(PaginaArticoli);
        AutoriBox->setObjectName(QString::fromUtf8("AutoriBox"));
        AutoriBox->setGeometry(QRect(580, 80, 201, 27));
        Articoli = new QLabel(PaginaArticoli);
        Articoli->setObjectName(QString::fromUtf8("Articoli"));
        Articoli->setGeometry(QRect(500, 160, 51, 19));
        ArticoliBox = new QComboBox(PaginaArticoli);
        ArticoliBox->setObjectName(QString::fromUtf8("ArticoliBox"));
        ArticoliBox->setGeometry(QRect(580, 160, 201, 27));
        ConferenzeRiviste = new QLabel(PaginaArticoli);
        ConferenzeRiviste->setObjectName(QString::fromUtf8("ConferenzeRiviste"));
        ConferenzeRiviste->setGeometry(QRect(500, 232, 81, 41));
        ConferenzeRiviste->setFont(font5);
        ConferenzeRivisteBox = new QComboBox(PaginaArticoli);
        ConferenzeRivisteBox->setObjectName(QString::fromUtf8("ConferenzeRivisteBox"));
        ConferenzeRivisteBox->setGeometry(QRect(580, 240, 201, 27));
        VisualizzaArticoli = new QPushButton(PaginaArticoli);
        VisualizzaArticoli->setObjectName(QString::fromUtf8("VisualizzaArticoli"));
        VisualizzaArticoli->setGeometry(QRect(270, 280, 201, 33));
        VisualizzaArticoli->setFont(font);
        VisualizzaArticoli->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        SvuotaArticoli = new QPushButton(PaginaArticoli);
        SvuotaArticoli->setObjectName(QString::fromUtf8("SvuotaArticoli"));
        SvuotaArticoli->setGeometry(QRect(20, 299, 201, 16));
        StampaArticoli = new QPlainTextEdit(PaginaArticoli);
        StampaArticoli->setObjectName(QString::fromUtf8("StampaArticoli"));
        StampaArticoli->setGeometry(QRect(10, 320, 781, 241));
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
        ListaKeyword->setGeometry(QRect(260, 136, 201, 65));
        AggiungiKeyword = new QPushButton(PaginaArticoli);
        AggiungiKeyword->setObjectName(QString::fromUtf8("AggiungiKeyword"));
        AggiungiKeyword->setGeometry(QRect(300, 208, 121, 41));
        QFont font11;
        font11.setPointSize(9);
        AggiungiKeyword->setFont(font11);
        AggiungiArticolo = new QPushButton(PaginaArticoli);
        AggiungiArticolo->setObjectName(QString::fromUtf8("AggiungiArticolo"));
        AggiungiArticolo->setGeometry(QRect(60, 240, 91, 25));
        AggiungiArticolo->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        AddAutore = new QPushButton(PaginaArticoli);
        AddAutore->setObjectName(QString::fromUtf8("AddAutore"));
        AddAutore->setGeometry(QRect(670, 128, 121, 16));
        AddArticolo = new QPushButton(PaginaArticoli);
        AddArticolo->setObjectName(QString::fromUtf8("AddArticolo"));
        AddArticolo->setGeometry(QRect(670, 208, 121, 16));
        label_7 = new QLabel(PaginaArticoli);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(530, 192, 131, 33));
        QFont font12;
        font12.setPointSize(7);
        font12.setItalic(true);
        label_7->setFont(font12);
        label_8 = new QLabel(PaginaArticoli);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(530, 112, 131, 33));
        label_8->setFont(font12);
        label_9 = new QLabel(PaginaArticoli);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(540, 272, 241, 41));
        label_9->setFont(font12);
        stackedWidget->addWidget(PaginaArticoli);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Progetto", nullptr));
        Home->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        VaiPaginaAutori->setText(QCoreApplication::translate("MainWindow", "Autori", nullptr));
        VaiPaginaConferenze->setText(QCoreApplication::translate("MainWindow", "Conferenza", nullptr));
        VaiPaginaRiviste->setText(QCoreApplication::translate("MainWindow", "Rivista", nullptr));
        VaiPaginaArticoli->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
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
        AggiungiAfferenza->setText(QCoreApplication::translate("MainWindow", "Aggiungi afferenza\n"
"all'autore", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Salvi le afferenze che hai\n"
"creato ma poi devi aggiungerle\n"
"all'autore.", nullptr));
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
        AggiungiOrganizzatore->setText(QCoreApplication::translate("MainWindow", "Aggiungi Organizzatore", nullptr));
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
        AggiungiKeyword->setText(QCoreApplication::translate("MainWindow", "Aggiungi keyword\n"
"all'articolo che\n"
" creerai", nullptr));
        AggiungiArticolo->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        AddAutore->setText(QCoreApplication::translate("MainWindow", "Aggiungi Autore", nullptr));
        AddArticolo->setText(QCoreApplication::translate("MainWindow", "Aggiungi Articolo", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Seleziona gli articoli\n"
"da aggiungere all'articolo . . .", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Seleziona gli autori\n"
"da aggiungere all'articolo . . .", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Seleziona la conferenza oppure la rivista\n"
"da aggiungere all'articolo.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
