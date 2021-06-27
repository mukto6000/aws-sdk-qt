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

#ifndef QTAWS_LOCATIONSERVICEREQUEST_P_H
#define QTAWS_LOCATIONSERVICEREQUEST_P_H

namespace QtAws {
namespace LocationService {

class LocationServiceRequest;

class LocationServiceRequestPrivate {

public:
    LocationServiceRequest::Action action; ///< LocationService action to be performed.
    QString apiVersion;        ///< LocationService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< LocationService request (query string) parameters. @todo?

    LocationServiceRequestPrivate(const LocationServiceRequest::Action action, LocationServiceRequest * const q);
    LocationServiceRequestPrivate(const LocationServiceRequestPrivate &other, LocationServiceRequest * const q);

    static QString toString(const LocationServiceRequest::Action &action);

protected:
    LocationServiceRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(LocationServiceRequest)

};

} // namespace LocationService
} // namespace QtAws

#endif
