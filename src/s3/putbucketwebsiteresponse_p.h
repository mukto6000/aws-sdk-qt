// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETWEBSITERESPONSE_P_H
#define QTAWS_PUTBUCKETWEBSITERESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketWebsiteResponse;

class PutBucketWebsiteResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketWebsiteResponsePrivate(PutBucketWebsiteResponse * const q);

    void parsePutBucketWebsiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketWebsiteResponse)
    Q_DISABLE_COPY(PutBucketWebsiteResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
