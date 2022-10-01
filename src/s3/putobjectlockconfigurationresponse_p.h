// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTLOCKCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTOBJECTLOCKCONFIGURATIONRESPONSE_P_H

#include "s3response_p.h"

namespace QtAws {
namespace S3 {

class PutObjectLockConfigurationResponse;

class PutObjectLockConfigurationResponsePrivate : public S3ResponsePrivate {

public:

    explicit PutObjectLockConfigurationResponsePrivate(PutObjectLockConfigurationResponse * const q);

    void parsePutObjectLockConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutObjectLockConfigurationResponse)
    Q_DISABLE_COPY(PutObjectLockConfigurationResponsePrivate)

};

} // namespace S3
} // namespace QtAws

#endif
