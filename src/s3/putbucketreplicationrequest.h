// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREPLICATIONREQUEST_H
#define QTAWS_PUTBUCKETREPLICATIONREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class PutBucketReplicationRequestPrivate;

class QTAWSS3_EXPORT PutBucketReplicationRequest : public S3Request {

public:
    PutBucketReplicationRequest(const PutBucketReplicationRequest &other);
    PutBucketReplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketReplicationRequest)

};

} // namespace S3
} // namespace QtAws

#endif
