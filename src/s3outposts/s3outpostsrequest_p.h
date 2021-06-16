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

#ifndef QTAWS_S3OUTPOSTSREQUEST_P_H
#define QTAWS_S3OUTPOSTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3outpostsrequest.h"

namespace QtAws {
namespace S3Outposts {

class S3OutpostsRequest;

class QTAWS_EXPORT S3OutpostsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3OutpostsRequest::Action action; ///< S3Outposts action to be performed.
    QString apiVersion;        ///< S3Outposts API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3Outposts request (query string) parameters. @todo?

    S3OutpostsRequestPrivate(const S3OutpostsRequest::Action action, S3OutpostsRequest * const q);
    S3OutpostsRequestPrivate(const S3OutpostsRequestPrivate &other, S3OutpostsRequest * const q);

    static QString toString(const S3OutpostsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(S3OutpostsRequest)

};

} // namespace S3Outposts
} // namespace QtAws

#endif
