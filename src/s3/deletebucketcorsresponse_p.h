// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETCORSRESPONSE_P_H
#define QTAWS_DELETEBUCKETCORSRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class DeleteBucketCorsResponse;

class DeleteBucketCorsResponsePrivate : public S3ResponsePrivate {

public:

    explicit DeleteBucketCorsResponsePrivate(DeleteBucketCorsResponse * const q);

    void parseDeleteBucketCorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBucketCorsResponse)
    Q_DISABLE_COPY(DeleteBucketCorsResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
