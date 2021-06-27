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

#ifndef QTAWS_ROUTE53DOMAINSREQUEST_P_H
#define QTAWS_ROUTE53DOMAINSREQUEST_P_H

namespace QtAws {
namespace Route53Domains {

class Route53DomainsRequest;

class Route53DomainsRequestPrivate {

public:
    Route53DomainsRequest::Action action; ///< Route53Domains action to be performed.
    QString apiVersion;        ///< Route53Domains API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53Domains request (query string) parameters. @todo?

    Route53DomainsRequestPrivate(const Route53DomainsRequest::Action action, Route53DomainsRequest * const q);
    Route53DomainsRequestPrivate(const Route53DomainsRequestPrivate &other, Route53DomainsRequest * const q);

    static QString toString(const Route53DomainsRequest::Action &action);

protected:
    Route53DomainsRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Route53DomainsRequest)

};

} // namespace Route53Domains
} // namespace QtAws

#endif
