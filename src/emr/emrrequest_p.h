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

#ifndef QTAWS_EMRREQUEST_P_H
#define QTAWS_EMRREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "emrrequest.h"

namespace QtAws {
namespace EMR {

class EmrRequest;

class QTAWS_EXPORT EmrRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EmrRequest::Action action; ///< EMR action to be performed.
    QString apiVersion;        ///< EMR API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EMR request (query string) parameters. @todo?

    EmrRequestPrivate(const EmrRequest::Action action, EmrRequest * const q);
    EmrRequestPrivate(const EmrRequestPrivate &other, EmrRequest * const q);

    static QString toString(const EmrRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EmrRequest)

};

} // namespace EMR
} // namespace QtAws

#endif
