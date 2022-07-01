// ------------------------------------------------------------------------------
// Copyright (C) 2022 -> Carlos Enrique Duarte Ortiz
//                       -> https://www.youtube.com/c/duartecorporationtutoriales
//                       -> carlosduarte.1@hotmail.com
// ------------------------------------------------------------------------------

//                 GNU LESSER GENERAL PUBLIC LICENSE
//                     Version 3, 29 June 2007

// Copyright (C) 2007 Free Software Foundation, Inc. <https:// fsf.org/>
// Everyone is permitted to copy and distribute verbatim copies
// of this license document, but changing it is not allowed.


// This version of the GNU Lesser General Public License incorporates
// the terms and conditions of version 3 of the GNU General Public
// License, supplemented by the additional permissions listed below.

// 0. Additional Definitions.

// As used herein, "this License" refers to version 3 of the GNU Lesser
// General Public License, and the "GNU GPL" refers to version 3 of the GNU
// General Public License.

// "The Library" refers to a covered work governed by this License,
// other than an Application or a Combined Work as defined below.

// An "Application" is any work that makes use of an interface provided
// by the Library, but which is not otherwise based on the Library.
// Defining a subclass of a class defined by the Library is deemed a mode
// of using an interface provided by the Library.

// A "Combined Work" is a work produced by combining or linking an
// Application with the Library.  The particular version of the Library
// with which the Combined Work was made is also called the "Linked
// Version".

// The "Minimal Corresponding Source" for a Combined Work means the
// Corresponding Source for the Combined Work, excluding any source code
// for portions of the Combined Work that, considered in isolation, are
// based on the Application, and not on the Linked Version.

// The "Corresponding Application Code" for a Combined Work means the
// object code and/or source code for the Application, including any data
// and utility programs needed for reproducing the Combined Work from the
// Application, but excluding the System Libraries of the Combined Work.

// 1. Exception to Section 3 of the GNU GPL.

// You may convey a covered work under sections 3 and 4 of this License
// without being bound by section 3 of the GNU GPL.

// 2. Conveying Modified Versions.

// If you modify a copy of the Library, and, in your modifications, a
// facility refers to a function or data to be supplied by an Application
// that uses the facility (other than as an argument passed when the
// facility is invoked), then you may convey a copy of the modified
// version:

// a) under this License, provided that you make a good faith effort to
// ensure that, in the event an Application does not supply the
// function or data, the facility still operates, and performs
// whatever part of its purpose remains meaningful, or

// b) under the GNU GPL, with none of the additional permissions of
// this License applicable to that copy.

// 3. Object Code Incorporating Material from Library Header Files.

// The object code form of an Application may incorporate material from
// a header file that is part of the Library.  You may convey such object
// code under terms of your choice, provided that, if the incorporated
// material is not limited to numerical parameters, data structure
// layouts and accessors, or small macros, inline functions and templates
// (ten or fewer lines in length), you do both of the following:

// a) Give prominent notice with each copy of the object code that the
// Library is used in it and that the Library and its use are
// covered by this License.

// b) Accompany the object code with a copy of the GNU GPL and this license
// document.

// 4. Combined Works.

// You may convey a Combined Work under terms of your choice that,
// taken together, effectively do not restrict modification of the
// portions of the Library contained in the Combined Work and reverse
// engineering for debugging such modifications, if you also do each of
// the following:

// a) Give prominent notice with each copy of the Combined Work that
// the Library is used in it and that the Library and its use are
// covered by this License.

// b) Accompany the Combined Work with a copy of the GNU GPL and this license
// document.

// c) For a Combined Work that displays copyright notices during
// execution, include the copyright notice for the Library among
// these notices, as well as a reference directing the user to the
// copies of the GNU GPL and this license document.

// d) Do one of the following:

// 0) Convey the Minimal Corresponding Source under the terms of this
// License, and the Corresponding Application Code in a form
// suitable for, and under terms that permit, the user to
// recombine or relink the Application with a modified version of
// the Linked Version to produce a modified Combined Work, in the
// manner specified by section 6 of the GNU GPL for conveying
// Corresponding Source.

// 1) Use a suitable shared library mechanism for linking with the
// Library.  A suitable mechanism is one that (a) uses at run time
// a copy of the Library already present on the user's computer
// system, and (b) will operate properly with a modified version
// of the Library that is interface-compatible with the Linked
// Version.

// e) Provide Installation Information, but only if you would otherwise
// be required to provide such information under section 6 of the
// GNU GPL, and only to the extent that such information is
// necessary to install and execute a modified version of the
// Combined Work produced by recombining or relinking the
// Application with a modified version of the Linked Version. (If
// you use option 4d0, the Installation Information must accompany
// the Minimal Corresponding Source and Corresponding Application
// Code. If you use option 4d1, you must provide the Installation
// Information in the manner specified by section 6 of the GNU GPL
// for conveying Corresponding Source.)

// 5. Combined Libraries.

// You may place library facilities that are a work based on the
// Library side by side in a single library together with other library
// facilities that are not Applications and are not covered by this
// License, and convey such a combined library under terms of your
// choice, if you do both of the following:

// a) Accompany the combined library with a copy of the same work based
// on the Library, uncombined with any other library facilities,
// conveyed under the terms of this License.

// b) Give prominent notice with the combined library that part of it
// is a work based on the Library, and explaining where to find the
// accompanying uncombined form of the same work.

// 6. Revised Versions of the GNU Lesser General Public License.

// The Free Software Foundation may publish revised and/or new versions
// of the GNU Lesser General Public License from time to time. Such new
// versions will be similar in spirit to the present version, but may
// differ in detail to address new problems or concerns.

// Each version is given a distinguishing version number. If the
// Library as you received it specifies that a certain numbered version
// of the GNU Lesser General Public License "or any later version"
// applies to it, you have the option of following the terms and
// conditions either of that published version or of any later version
// published by the Free Software Foundation. If the Library as you
// received it does not specify a version number of the GNU Lesser
// General Public License, you may choose any version of the GNU Lesser
// General Public License ever published by the Free Software Foundation.

// If the Library as you received it specifies that a proxy can decide
// whether future versions of the GNU Lesser General Public License shall
// apply, that proxy's public statement of acceptance of any version is
// permanent authorization for you to choose that version for the
// Library.

#include "qnotepaddialog.h"

#include <QFile>
#include <QMenu>
#include <QDebug>
#include <QAction>
#include <QToolBar>
#include <QMenuBar>
#include <QPrinter>
#include <QFileInfo>
#include <QTextEdit>
#include <QTextStream>
#include <QFileDialog>
#include <QMessageBox>
#include <QFontDialog>
#include <QColorDialog>
#include <QPrintDialog>
#include <qmenuaction.h>
#include <qfinddialog.h>
#include <qfindreplacedialog.h>

const int QNotepadDialog::s_width = 830;
const int QNotepadDialog::s_height = 550;

QNotepadDialog::QNotepadDialog(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowIcon(QIcon(":/img/qfilesystemdialog_notepad.png"));
    setAttribute(Qt::WA_DeleteOnClose);
    init();
    packMenu();
    packToolBar();
    packMenuBar();
    setMenuBar(m_menuBar);
    addToolBar(m_toolBar);
    setCentralWidget(m_textEdit);
    connectSlots();
}

QNotepadDialog::~QNotepadDialog()
{
    //  nothing to do here
}

void QNotepadDialog::init()
{
    m_textEdit = new QTextEdit(this);
    m_findDialog = new QFindDialog(this);
    m_findDialog->setModal(false);
    m_findDialog->setTextEdit(m_textEdit);
    m_findReplaceDialog = new QFindReplaceDialog(this);
    m_findReplaceDialog->setModal(false);
    m_findReplaceDialog->setTextEdit(m_textEdit);
    m_menuBar = new QMenuBar(this);    
    m_toolBar = new QToolBar("Herramientas", this);
    m_fileMenu = new QMenu("Archivo", this);
    m_editMenu = new QMenu("Editar", this);
    m_fontMenu = new QMenu("Fuente", this);
    m_toolsMenu = new QMenu("Herramientas", this);
    m_open = new QAction(QIcon(":/img/qfilesystemdialog_folder.png"), "Abrir", this);
    m_new = new QAction(QIcon(":/img/qfilesystemdialog_new.png"), "Nuevo", this);
    m_save = new QAction(QIcon(":/img/qfilesystemdialog_save.png"), "Guardar", this);
    m_saveAs = new QAction(QIcon(":/img/qfilesystemdialog_save.png"), "Guardar como", this);
    m_close = new QAction(QIcon(":/img/qfilesystemdialog_remove.png"), "Salir", this);
    m_cut = new QAction(QIcon(":/img/qfilesystemdialog_cut.png"), "Cortar", this);
    m_copy = new QAction(QIcon(":/img/qfilesystemdialog_copy.png"), "Copiar", this);
    m_paste = new QAction(QIcon(":/img/qfilesystemdialog_paste.png"), "Pegar", this);
    m_selectAll = new QAction(QIcon(":/img/qfilesystemdialog_selectAll.png"), "Seleccionar todo", this);
    m_fontFamily = new QAction(QIcon(":/img/qfilesystemdialog_fonts.png"), "Cambiar fuente", this);
    m_textColor = new QAction(QIcon(":/img/qfilesystemdialog_foregrondColor.png"), "Color de letra", this);
    m_highlightColor = new QAction(QIcon(":/img/qfilesystemdialog_highlightColor.png"), "Color de resaltado", this);
    m_backgroundColor = new QAction(QIcon(":/img/qfilesystemdialog_backgroundColor.png"), "Color de fondo", this);
    m_print = new QAction(QIcon(":/img/qfilesystemdialog_print.png"), "Imprimir", this);
    m_undo = new QAction(QIcon(":/img/qfilesystemdialog_undo.png"), "Deshacer", this);
    m_redo = new QAction(QIcon(":/img/qfilesystemdialog_redo.png"), "Rehacer", this);
    m_find = new QAction(QIcon(":/img/qfilesystemdialog_find.png"), "Buscar", this);
    m_replace = new QAction(QIcon(":/img/qfilesystemdialog_replace.png"), "Reemplazar", this);
}

void QNotepadDialog::packMenu()
{
    m_fileMenu->addAction(m_open);
    m_fileMenu->addAction(m_new);
    m_fileMenu->addAction(QMenuAction::makeSeparator());
    m_fileMenu->addAction(m_save);
    m_fileMenu->addAction(m_saveAs);
    m_fileMenu->addAction(QMenuAction::makeSeparator());
    m_fileMenu->addAction(m_print);
    m_fileMenu->addAction(QMenuAction::makeSeparator());
    m_fileMenu->addAction(m_close);
    m_editMenu->addAction(m_copy);
    m_editMenu->addAction(m_cut);
    m_editMenu->addAction(m_paste);
    m_fileMenu->addAction(QMenuAction::makeSeparator());
    m_editMenu->addAction(m_selectAll);
    m_fontMenu->addAction(m_fontFamily);
    m_fontMenu->addAction(m_textColor);
    m_fontMenu->addAction(m_highlightColor);
    m_fontMenu->addAction(m_backgroundColor);
    m_toolsMenu->addAction(m_undo);
    m_toolsMenu->addAction(m_redo);
    m_fileMenu->addAction(QMenuAction::makeSeparator());
    m_toolsMenu->addAction(m_find);
    m_toolsMenu->addAction(m_replace);
}

void QNotepadDialog::packToolBar()
{
    m_toolBar->addAction(m_open);
    m_toolBar->addAction(m_new);
    m_toolBar->addAction(m_save);
    m_toolBar->addAction(QMenuAction::makeSeparator());
    m_toolBar->addAction(m_copy);
    m_toolBar->addAction(m_cut);
    m_toolBar->addAction(m_paste);
    m_toolBar->addAction(m_selectAll);
    m_toolBar->addAction(QMenuAction::makeSeparator());
    m_toolBar->addAction(m_fontFamily);
    m_toolBar->addAction(m_textColor);
    m_toolBar->addAction(m_highlightColor);
    m_toolBar->addAction(QMenuAction::makeSeparator());
    m_toolBar->addAction(m_print);
    m_toolBar->addAction(QMenuAction::makeSeparator());
    m_toolBar->addAction(m_undo);
    m_toolBar->addAction(m_redo);
    m_toolBar->addAction(QMenuAction::makeSeparator());
    m_toolBar->addAction(m_find);
    m_toolBar->addAction(m_replace);
}

void QNotepadDialog::packMenuBar()
{
    m_menuBar->addMenu(m_fileMenu);
    m_menuBar->addMenu(m_editMenu);
    m_menuBar->addMenu(m_fontMenu);
    m_menuBar->addMenu(m_toolsMenu);
}

void QNotepadDialog::setCentralPosition(QWidget *widget)
{
    QRect dGeo = widget->geometry();
    const int x = dGeo.x() + (dGeo.width() - s_width) / 2.0;
    const int y = dGeo.y() + (dGeo.height() - s_height) / 2.0;
    setGeometry(x, y, s_width, s_height);
}

void QNotepadDialog::connectSlots()
{
    connect(m_open, &QAction::triggered, this, &QNotepadDialog::openDocument);
    connect(m_new, &QAction::triggered, this, &QNotepadDialog::newDocument);
    connect(m_save, &QAction::triggered, this, &QNotepadDialog::saveDocument);
    connect(m_saveAs, &QAction::triggered, this, &QNotepadDialog::saveDocumentAs);
    connect(m_close, &QAction::triggered, this, &QNotepadDialog::close);
    connect(m_copy, &QAction::triggered, m_textEdit, &QTextEdit::copy);
    connect(m_cut, &QAction::triggered, m_textEdit, &QTextEdit::cut);
    connect(m_paste, &QAction::triggered, m_textEdit, &QTextEdit::paste);
    connect(m_selectAll, &QAction::triggered, m_textEdit, &QTextEdit::selectAll);
    connect(m_fontFamily, &QAction::triggered, this, &QNotepadDialog::fontFamily);
    connect(m_textColor, &QAction::triggered, this, &QNotepadDialog::documentTextColor);
    connect(m_highlightColor, &QAction::triggered, this, &QNotepadDialog::documentHighlightColor);
    connect(m_backgroundColor, &QAction::triggered, this, &QNotepadDialog::documentBackgroundColor);
    connect(m_print, &QAction::triggered, this, &QNotepadDialog::printDocument);
    connect(m_undo, &QAction::triggered, m_textEdit, &QTextEdit::undo);
    connect(m_redo, &QAction::triggered, m_textEdit, &QTextEdit::redo);
    connect(m_find, &QAction::triggered, this, &QNotepadDialog::findInDocument);
    connect(m_replace, &QAction::triggered, this, &QNotepadDialog::replaceInDocument);
}

void QNotepadDialog::fileWriteText()
{
    QFile F(m_currentFilepath);
    if (F.open(QIODevice::Text | QIODevice::WriteOnly))
    {
        QTextStream stream(&F);
        stream << m_textEdit->toPlainText();
        F.flush();
        F.close();
    }
    else
    {
        QMessageBox::critical(this, "Error", QString("No se pudo guardar el archivo: %1").arg(F.errorString()));
    }
}

void QNotepadDialog::changeCurrentFilepath(const QString &filepath)
{
    m_currentFilepath = filepath;
    setWindowTitle(QString("Editor de texto: \"%1\"").arg(QFileInfo(m_currentFilepath).fileName()));
}

void QNotepadDialog::open(const QString &filepath)
{
    QFile F(filepath);
    if (F.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream stream(&F);
        m_textEdit->setText(stream.readAll());
        F.close();
        changeCurrentFilepath(filepath);
    }
    else
    {
        QMessageBox::critical(this, "Error", QString("No se pudo leer el archivo: %1").arg(F.errorString()));
    }
}

void QNotepadDialog::openDocument()
{
    QString filepath = QFileDialog::getOpenFileName(this, "Abrir archivo", QFileInfo(m_currentFilepath).path(), "Any file (*.*)");
    if (!filepath.isEmpty())
    {
        open(filepath);
    }
}

void QNotepadDialog::newDocument()
{
    changeCurrentFilepath("");
    m_textEdit->clear();
}

void QNotepadDialog::saveDocument()
{
    if (!m_currentFilepath.isEmpty())
    {
        fileWriteText();
    }
}

void QNotepadDialog::saveDocumentAs()
{
    QString filepath = QFileDialog::getSaveFileName(this, "Guardar archivo", QFileInfo(m_currentFilepath).path(), "Any file (*.*)");
    if (!filepath.isEmpty())
    {
        changeCurrentFilepath(filepath);
        fileWriteText();
    }
}

void QNotepadDialog::fontFamily()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, m_textEdit->font(), this, "Seleccionar fuente");
    if (ok)
    {
        m_textEdit->setFont(font);
    }
}

void QNotepadDialog::documentTextColor()
{
    QColor color = QColorDialog::getColor(m_textEdit->textColor(), this, "Seleccionar color");
    m_textEdit->setTextColor(color);
}

void QNotepadDialog::documentHighlightColor()
{
    QColor color = QColorDialog::getColor(m_textEdit->textColor(), this, "Seleccionar color");
    m_textEdit->setTextBackgroundColor(color);
}

void QNotepadDialog::documentBackgroundColor()
{
    QColor color = QColorDialog::getColor(m_textEdit->textColor(), this, "Seleccionar color");
    m_textEdit->setStyleSheet(QString("background-color: %1").arg(color.name()));
}

void QNotepadDialog::printDocument()
{
    QPrintDialog d(this);
    if (d.exec() == QDialog::Accepted)
    {
        m_textEdit->print(d.printer());
    }
}

void QNotepadDialog::findInDocument()
{
    m_findDialog->show();
}

void QNotepadDialog::replaceInDocument()
{
    m_findReplaceDialog->show();
}
