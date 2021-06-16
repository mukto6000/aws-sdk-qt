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

#ifndef QTAWS_EBSREQUEST_P_H
#define QTAWS_EBSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ebsrequest.h"

namespace QtAws {
namespace EBS {

class EbsRequest;

class QTAWS_EXPORT EbsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EbsRequest::Action action; ///< EBS action to be performed.
    QString apiVersion;        ///< EBS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EBS request (query string) parameters. @todo?

    EbsRequestPrivate(const EbsRequest::Action action, EbsRequest * const q);
    EbsRequestPrivate(const EbsRequestPrivate &other, EbsRequest * const q);

    static QString toString(const EbsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EbsRequest)

};

} // namespace EBS
} // namespace QtAws

#endif
