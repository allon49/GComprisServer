/* GComprisServer - MyListener.cpp
 *
 * Copyright (C) 2016 Johnny Jazeix <jazeix@gmail.com>
 *
 * Authors:
 *   Johnny Jazeix <jazeix@gmail.com>
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <QDebug>
#include "server.h"
#include "MyListener.h"

MyListener::MyListener(const Server &server) : _server(server)
{
    connect(&server, &Server::loginReceived, this, &MyListener::onLoginReceived);
}

void MyListener::onLoginReceived(const Login &data)
{
    qDebug() << "Login received '" << data._name << "'";
}
