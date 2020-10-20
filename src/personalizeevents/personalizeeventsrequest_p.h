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

#ifndef QTAWS_PERSONALIZEEVENTSREQUEST_P_H
#define QTAWS_PERSONALIZEEVENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "personalizeeventsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsRequest;

class QTAWS_EXPORT PersonalizeEventsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PersonalizeEventsRequest::Action action; ///< PersonalizeEvents action to be performed.
    QString apiVersion;        ///< PersonalizeEvents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< PersonalizeEvents request (query string) parameters. @todo?

    PersonalizeEventsRequestPrivate(const PersonalizeEventsRequest::Action action, PersonalizeEventsRequest * const q);
    PersonalizeEventsRequestPrivate(const PersonalizeEventsRequestPrivate &other, PersonalizeEventsRequest * const q);

    static QString toString(const PersonalizeEventsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PersonalizeEventsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
