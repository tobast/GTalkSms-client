
/*
 * SOFTWARE:
 *   GTalkSms Client
 * 
 * AUTHOR:
 *   Theophile BASTIAN "Tobast" <contact@tobast.fr>
 *
 * LICENCE:
 *   GNU GPL v3
 *
 * DESCRIPTION:
 *   A simple XMPP client made to be used as a GTalkSMS client
 *
 * LICENCE HEADER:
 *   Copyright (C) 2014 Théophile BASTIAN
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/gpl.txt>.
 */

#include <QApplication>
#include <QTranslator>
#include <QLibraryInfo>
#include <QLocale>

int main(int argc, char** argv)
{
	QApplication a(argc, argv);

	// Setup translator
	QString locale = QLocale::system().name().section('_', 0, 0);
	QTranslator translator;
	translator.load(QString("qt_") + locale,
			QLibraryInfo::location(QLibraryInfo::TranslationsPath));
	a.installTranslator(&translator);

	return a.exec();
}

