// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTTAGGINGREQUEST_H
#define QTAWS_GETOBJECTTAGGINGREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class GetObjectTaggingRequestPrivate;

class QTAWSS3_EXPORT GetObjectTaggingRequest : public S3Request {

public:
    GetObjectTaggingRequest(const GetObjectTaggingRequest &other);
    GetObjectTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectTaggingRequest)

};

} // namespace S3
} // namespace QtAws

#endif
