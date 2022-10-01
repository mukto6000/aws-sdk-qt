// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETTAGGINGRESPONSE_H
#define QTAWS_GETBUCKETTAGGINGRESPONSE_H

#include "s3controlresponse.h"
#include "getbuckettaggingrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketTaggingResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetBucketTaggingResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetBucketTaggingResponse(const GetBucketTaggingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketTaggingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketTaggingResponse)
    Q_DISABLE_COPY(GetBucketTaggingResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
