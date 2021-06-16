/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_PUTUSERSREQUEST_P_H
#define QTAWS_PUTUSERSREQUEST_P_H

#include "personalizeeventsrequest_p.h"
#include "putusersrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutUsersRequest;

class QTAWS_EXPORT PutUsersRequestPrivate : public PersonalizeEventsRequestPrivate {

public:
    PutUsersRequestPrivate(const PersonalizeEventsRequest::Action action,
                                   PutUsersRequest * const q);
    PutUsersRequestPrivate(const PutUsersRequestPrivate &other,
                                   PutUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutUsersRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
