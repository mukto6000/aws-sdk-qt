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

#ifndef QTAWS_APIGATEWAYREQUEST_P_H
#define QTAWS_APIGATEWAYREQUEST_P_H

namespace QtAws {
namespace APIGateway {

class APIGatewayRequest;

class APIGatewayRequestPrivate {

public:
    APIGatewayRequest::Action action; ///< APIGateway action to be performed.
    QString apiVersion;        ///< APIGateway API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< APIGateway request (query string) parameters. @todo?

    APIGatewayRequestPrivate(const APIGatewayRequest::Action action, APIGatewayRequest * const q);
    APIGatewayRequestPrivate(const APIGatewayRequestPrivate &other, APIGatewayRequest * const q);

    static QString toString(const APIGatewayRequest::Action &action);

protected:
    APIGatewayRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(APIGatewayRequest)

};

} // namespace APIGateway
} // namespace QtAws

#endif
