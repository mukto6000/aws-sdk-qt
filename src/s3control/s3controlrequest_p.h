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

#ifndef QTAWS_S3CONTROLREQUEST_P_H
#define QTAWS_S3CONTROLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class S3ControlRequest;

class S3ControlRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3ControlRequest::Action action; ///< S3Control action to be performed.
    QString apiVersion;        ///< S3Control API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3Control request (query string) parameters. @todo?

    S3ControlRequestPrivate(const S3ControlRequest::Action action, S3ControlRequest * const q);
    S3ControlRequestPrivate(const S3ControlRequestPrivate &other, S3ControlRequest * const q);

    static QString toString(const S3ControlRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(S3ControlRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
