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

#ifndef QTAWS_LISTTHINGTYPESREQUEST_P_H
#define QTAWS_LISTTHINGTYPESREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingtypesrequest.h"

namespace QtAws {
namespace IoT {

class ListThingTypesRequest;

class ListThingTypesRequestPrivate : public IoTRequestPrivate {

public:
    ListThingTypesRequestPrivate(const IoTRequest::Action action,
                                   ListThingTypesRequest * const q);
    ListThingTypesRequestPrivate(const ListThingTypesRequestPrivate &other,
                                   ListThingTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingTypesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
