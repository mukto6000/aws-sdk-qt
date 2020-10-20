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

#ifndef QTAWS_GETACCOUNTREQUEST_P_H
#define QTAWS_GETACCOUNTREQUEST_P_H

#include "apigatewayrequest_p.h"
#include "getaccountrequest.h"

namespace QtAws {
namespace APIGateway {

class GetAccountRequest;

class QTAWS_EXPORT GetAccountRequestPrivate : public APIGatewayRequestPrivate {

public:
    GetAccountRequestPrivate(const APIGatewayRequest::Action action,
                                   GetAccountRequest * const q);
    GetAccountRequestPrivate(const GetAccountRequestPrivate &other,
                                   GetAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
