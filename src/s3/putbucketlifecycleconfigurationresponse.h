// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONRESPONSE_H
#define QTAWS_PUTBUCKETLIFECYCLECONFIGURATIONRESPONSE_H

#include "s3response.h"
#include "putbucketlifecycleconfigurationrequest.h"

namespace QtAws {
namespace S3 {

class PutBucketLifecycleConfigurationResponsePrivate;

class QTAWSS3_EXPORT PutBucketLifecycleConfigurationResponse : public S3Response {
    Q_OBJECT

public:
    PutBucketLifecycleConfigurationResponse(const PutBucketLifecycleConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutBucketLifecycleConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBucketLifecycleConfigurationResponse)
    Q_DISABLE_COPY(PutBucketLifecycleConfigurationResponse)

};

} // namespace S3
} // namespace QtAws

#endif
