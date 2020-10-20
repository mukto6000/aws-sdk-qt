/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTATTACKSREQUEST_P_H
#define QTAWS_LISTATTACKSREQUEST_P_H

#include "shieldrequest_p.h"
#include "listattacksrequest.h"

namespace QtAws {
namespace Shield {

class ListAttacksRequest;

class QTAWS_EXPORT ListAttacksRequestPrivate : public ShieldRequestPrivate {

public:
    ListAttacksRequestPrivate(const ShieldRequest::Action action,
                                   ListAttacksRequest * const q);
    ListAttacksRequestPrivate(const ListAttacksRequestPrivate &other,
                                   ListAttacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAttacksRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
