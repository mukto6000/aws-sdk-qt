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

#ifndef QTAWS_ACMREQUEST_P_H
#define QTAWS_ACMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "acmrequest.h"

namespace QtAws {
namespace ACM {

class AcmRequest;

class QTAWS_EXPORT AcmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AcmRequest::Action action; ///< ACM action to be performed.
    QString apiVersion;        ///< ACM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ACM request (query string) parameters. @todo?

    AcmRequestPrivate(const AcmRequest::Action action, AcmRequest * const q);
    AcmRequestPrivate(const AcmRequestPrivate &other, AcmRequest * const q);

    static QString toString(const AcmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AcmRequest)

};

} // namespace ACM
} // namespace QtAws

#endif
