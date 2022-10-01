// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBUCKETREPLICATIONRESPONSE_P_H
#define QTAWS_PUTBUCKETREPLICATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutBucketReplicationResponse;

class PutBucketReplicationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutBucketReplicationResponsePrivate(PutBucketReplicationResponse * const q);

    void parsePutBucketReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutBucketReplicationResponse)
    Q_DISABLE_COPY(PutBucketReplicationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
