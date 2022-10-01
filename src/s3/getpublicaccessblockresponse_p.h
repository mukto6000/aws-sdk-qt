// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICACCESSBLOCKRESPONSE_P_H
#define QTAWS_GETPUBLICACCESSBLOCKRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class GetPublicAccessBlockResponse;

class GetPublicAccessBlockResponsePrivate : public S3ResponsePrivate {

public:

    explicit GetPublicAccessBlockResponsePrivate(GetPublicAccessBlockResponse * const q);

    void parseGetPublicAccessBlockResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPublicAccessBlockResponse)
    Q_DISABLE_COPY(GetPublicAccessBlockResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
