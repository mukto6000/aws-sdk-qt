// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETPOLICYRESPONSE_H
#define QTAWS_PUTBUCKETPOLICYRESPONSE_H

#include "s3response.h"
#include "putbucketpolicyrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketPolicyResponsePrivate;

class QTAWSS3_EXPORT PutBucketPolicyResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketPolicyResponse(const PutBucketPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketPolicyResponse)
    Q_DISABLE_COPY(PutBucketPolicyResponse)

};

} // namespace S3
} // namespace QtAws

#endif
