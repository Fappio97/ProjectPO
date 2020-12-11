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
    QLabel *TITLE_3;
    QPushButton *AggiungiConferenza;
    QPlainTextEdit *StampaConferenze;
    QPushButton *VisualizzaConferenze;
    QPushButton *SvuotaConferenze;
    QComboBox *ArticoliConferenza;
    QLabel *label_2;
    QLineEdit *NomePersona;
    QPushButton *CreaOrganizzatore;
    QLineEdit *CognomePersona;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *ListaOrganizzatori;
    QPushButton *AggiungiOrganizzatore;
    QWidget *PaginaRiviste;
    QWidget *PaginaArticoli;

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
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        TITLE->setFont(font1);
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
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(true);
        font2.setWeight(50);
        TITLE_2->setFont(font2);
        AfferenzeBox = new QComboBox(PaginaAutori);
        AfferenzeBox->setObjectName(QString::fromUtf8("AfferenzeBox"));
        AfferenzeBox->setGeometry(QRect(350, 88, 191, 25));
        SpiegazioneAfferenze = new QLabel(PaginaAutori);
        SpiegazioneAfferenze->setObjectName(QString::fromUtf8("SpiegazioneAfferenze"));
        SpiegazioneAfferenze->setGeometry(QRect(580, 64, 261, 121));
        QFont font3;
        font3.setPointSize(10);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setStyleStrategy(QFont::NoAntialias);
        SpiegazioneAfferenze->setFont(font3);
        CreaAfferenza = new QPushButton(PaginaAutori);
        CreaAfferenza->setObjectName(QString::fromUtf8("CreaAfferenza"));
        CreaAfferenza->setGeometry(QRect(580, 224, 141, 17));
        QFont font4;
        font4.setPointSize(11);
        CreaAfferenza->setFont(font4);
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
        NomeInput_2->setGeometry(QRect(121, 73, 125, 27));
        AcronimoInput = new QLineEdit(PaginaConferenze);
        AcronimoInput->setObjectName(QString::fromUtf8("AcronimoInput"));
        AcronimoInput->setGeometry(QRect(121, 106, 125, 27));
        LuogoInput = new QLineEdit(PaginaConferenze);
        LuogoInput->setObjectName(QString::fromUtf8("LuogoInput"));
        LuogoInput->setGeometry(QRect(121, 139, 125, 27));
        CalendarioConferenza = new QCalendarWidget(PaginaConferenze);
        CalendarioConferenza->setObjectName(QString::fromUtf8("CalendarioConferenza"));
        CalendarioConferenza->setGeometry(QRect(270, 56, 231, 145));
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
        numPartecipanti->setGeometry(QRect(200, 176, 45, 28));
        Nome_2 = new QLabel(PaginaConferenze);
        Nome_2->setObjectName(QString::fromUtf8("Nome_2"));
        Nome_2->setGeometry(QRect(30, 80, 42, 19));
        Acronimo = new QLabel(PaginaConferenze);
        Acronimo->setObjectName(QString::fromUtf8("Acronimo"));
        Acronimo->setGeometry(QRect(30, 112, 66, 19));
        Luogo = new QLabel(PaginaConferenze);
        Luogo->setObjectName(QString::fromUtf8("Luogo"));
        Luogo->setGeometry(QRect(30, 144, 42, 19));
        Partecipanti = new QLabel(PaginaConferenze);
        Partecipanti->setObjectName(QString::fromUtf8("Partecipanti"));
        Partecipanti->setGeometry(QRect(30, 184, 91, 17));
        Organizzatori = new QLabel(PaginaConferenze);
        Organizzatori->setObjectName(QString::fromUtf8("Organizzatori"));
        Organizzatori->setGeometry(QRect(610, 0, 91, 25));
        QFont font7;
        font7.setItalic(false);
        Organizzatori->setFont(font7);
        TITLE_3 = new QLabel(PaginaConferenze);
        TITLE_3->setObjectName(QString::fromUtf8("TITLE_3"));
        TITLE_3->setGeometry(QRect(260, 16, 241, 33));
        TITLE_3->setFont(font1);
        AggiungiConferenza = new QPushButton(PaginaConferenze);
        AggiungiConferenza->setObjectName(QString::fromUtf8("AggiungiConferenza"));
        AggiungiConferenza->setGeometry(QRect(90, 208, 91, 25));
        AggiungiConferenza->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        StampaConferenze = new QPlainTextEdit(PaginaConferenze);
        StampaConferenze->setObjectName(QString::fromUtf8("StampaConferenze"));
        StampaConferenze->setGeometry(QRect(10, 256, 781, 305));
        VisualizzaConferenze = new QPushButton(PaginaConferenze);
        VisualizzaConferenze->setObjectName(QString::fromUtf8("VisualizzaConferenze"));
        VisualizzaConferenze->setGeometry(QRect(290, 216, 201, 33));
        VisualizzaConferenze->setFont(font);
        VisualizzaConferenze->setStyleSheet(QString::fromUtf8("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));
        SvuotaConferenze = new QPushButton(PaginaConferenze);
        SvuotaConferenze->setObjectName(QString::fromUtf8("SvuotaConferenze"));
        SvuotaConferenze->setGeometry(QRect(50, 240, 201, 16));
        ArticoliConferenza = new QComboBox(PaginaConferenze);
        ArticoliConferenza->setObjectName(QString::fromUtf8("ArticoliConferenza"));
        ArticoliConferenza->setGeometry(QRect(600, 216, 171, 27));
        label_2 = new QLabel(PaginaConferenze);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(530, 218, 61, 25));
        QFont font8;
        font8.setItalic(true);
        label_2->setFont(font8);
        NomePersona = new QLineEdit(PaginaConferenze);
        NomePersona->setObjectName(QString::fromUtf8("NomePersona"));
        NomePersona->setGeometry(QRect(520, 42, 111, 25));
        CreaOrganizzatore = new QPushButton(PaginaConferenze);
        CreaOrganizzatore->setObjectName(QString::fromUtf8("CreaOrganizzatore"));
        CreaOrganizzatore->setGeometry(QRect(580, 72, 161, 16));
        CognomePersona = new QLineEdit(PaginaConferenze);
        CognomePersona->setObjectName(QString::fromUtf8("CognomePersona"));
        CognomePersona->setGeometry(QRect(670, 42, 111, 25));
        label_3 = new QLabel(PaginaConferenze);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(560, 24, 31, 19));
        QFont font9;
        font9.setPointSize(8);
        label_3->setFont(font9);
        label_4 = new QLabel(PaginaConferenze);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(700, 24, 51, 19));
        label_4->setFont(font9);
        ListaOrganizzatori = new QListWidget(PaginaConferenze);
        ListaOrganizzatori->setObjectName(QString::fromUtf8("ListaOrganizzatori"));
        ListaOrganizzatori->setGeometry(QRect(515, 95, 271, 89));
        AggiungiOrganizzatore = new QPushButton(PaginaConferenze);
        AggiungiOrganizzatore->setObjectName(QString::fromUtf8("AggiungiOrganizzatore"));
        AggiungiOrganizzatore->setGeometry(QRect(570, 192, 161, 16));
        stackedWidget->addWidget(PaginaConferenze);
        PaginaRiviste = new QWidget();
        PaginaRiviste->setObjectName(QString::fromUtf8("PaginaRiviste"));
        stackedWidget->addWidget(PaginaRiviste);
        PaginaArticoli = new QWidget();
        PaginaArticoli->setObjectName(QString::fromUtf8("PaginaArticoli"));
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
        Organizzatori->setText(QCoreApplication::translate("MainWindow", "Organizzatori", nullptr));
        TITLE_3->setText(QCoreApplication::translate("MainWindow", "AGGIUNGI CONFERENZA", nullptr));
        AggiungiConferenza->setText(QCoreApplication::translate("MainWindow", "Aggiungi", nullptr));
        VisualizzaConferenze->setText(QCoreApplication::translate("MainWindow", "Visualizza Conferenze", nullptr));
        SvuotaConferenze->setText(QCoreApplication::translate("MainWindow", "Svuota Conferenze", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Articoli", nullptr));
        CreaOrganizzatore->setText(QCoreApplication::translate("MainWindow", "Crea Organizzatore", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nome ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        AggiungiOrganizzatore->setText(QCoreApplication::translate("MainWindow", "Aggiungi Organizzatore", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
