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

#ifndef QTAWS_GETACTIONREQUEST_P_H
#define QTAWS_GETACTIONREQUEST_P_H

#include "fisrequest_p.h"
#include "getactionrequest.h"

namespace QtAws {
namespace Fis {

class GetActionRequest;

class GetActionRequestPrivate : public FisRequestPrivate {

public:
    GetActionRequestPrivate(const FisRequest::Action action,
                                   GetActionRequest * const q);
    GetActionRequestPrivate(const GetActionRequestPrivate &other,
                                   GetActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetActionRequest)

};

} // namespace Fis
} // namespace QtAws

#endif
