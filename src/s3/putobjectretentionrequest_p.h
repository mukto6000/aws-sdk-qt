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

#ifndef QTAWS_PUTOBJECTRETENTIONREQUEST_P_H
#define QTAWS_PUTOBJECTRETENTIONREQUEST_P_H

#include "s3request_p.h"
#include "putobjectretentionrequest.h"

namespace QtAws {
namespace S3 {

class PutObjectRetentionRequest;

class QTAWS_EXPORT PutObjectRetentionRequestPrivate : public S3RequestPrivate {

public:
    PutObjectRetentionRequestPrivate(const S3Request::Action action,
                                   PutObjectRetentionRequest * const q);
    PutObjectRetentionRequestPrivate(const PutObjectRetentionRequestPrivate &other,
                                   PutObjectRetentionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectRetentionRequest)

};

} // namespace S3
} // namespace QtAws

#endif
