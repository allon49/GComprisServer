/* GComprisServer - messages.h
 *
 * Copyright (C) 2016 Emmanuel Charruau <echarruau@gmail.com>, Johnny Jazeix <jazeix@gmail.com>
 *
 * Authors:
 *   Emmanuel Charruau <echarruau@gmail.com>
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
#ifndef MESSAGES_H
#define MESSAGES_H

#include <QtGlobal>

enum MessageIdentifier : int {
    LOGIN = 0,
    REQUEST_CONTROL,
    REQUEST_USERNAME,
    SET_ACTIVITIES_FILTERS
};

struct Identifier {
    MessageIdentifier _id;
};

struct Login {
    char *_name;
};

#endif
