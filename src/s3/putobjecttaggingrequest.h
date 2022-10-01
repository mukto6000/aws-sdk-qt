// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTTAGGINGREQUEST_H
#define QTAWS_PUTOBJECTTAGGINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutObjectTaggingRequestPrivate;

class QTAWSS3_EXPORT PutObjectTaggingRequest : public S3Request {

public:
    PutObjectTaggingRequest(const PutObjectTaggingRequest &other);
    PutObjectTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
