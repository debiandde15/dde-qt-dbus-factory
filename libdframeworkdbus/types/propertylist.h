/*
 * Copyright (C) 2016 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * Maintainer: sbw <sbw@sbw.so>
 *             kirigaya <kirigaya@mkacg.com>
 *             Hualet <mr.asianwang@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PROPERTYLIST_H
#define PROPERTYLIST_H

#include <QObject>
#include <QDBusArgument>

class Property
{
public:
    explicit Property();

    QString key;
    QString value;

    friend QDBusArgument &operator<<(QDBusArgument &arg, const Property &value);
    friend const QDBusArgument &operator>>(const QDBusArgument &arg, Property &value);
};

typedef QList<Property> PropertyList;

Q_DECLARE_METATYPE(Property)
Q_DECLARE_METATYPE(PropertyList)

void registerPropertyListMetaType();

#endif // PROPERTYLIST_H
