// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTCOPYRESPONSE_P_H
#define QTAWS_UPLOADPARTCOPYRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class UploadPartCopyResponse;

class UploadPartCopyResponsePrivate : public S3ResponsePrivate {

public:

    explicit UploadPartCopyResponsePrivate(UploadPartCopyResponse * const q);

    void parseUploadPartCopyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadPartCopyResponse)
    Q_DISABLE_COPY(UploadPartCopyResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
