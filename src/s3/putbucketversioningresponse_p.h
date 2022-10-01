// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETVERSIONINGRESPONSE_P_H
#define QTAWS_PUTBUCKETVERSIONINGRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketVersioningResponse;

class PutBucketVersioningResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketVersioningResponsePrivate(PutBucketVersioningResponse * const q);

    void parsePutBucketVersioningResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketVersioningResponse)
    Q_DISABLE_COPY(PutBucketVersioningResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
