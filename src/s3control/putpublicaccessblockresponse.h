// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPUBLICACCESSBLOCKRESPONSE_H
#define QTAWS_PUTPUBLICACCESSBLOCKRESPONSE_H

#include "s3controlresponse.h"
#include "putpublicaccessblockrequest.h"

namespace QtAws {
namespace S3Control {

class PutPublicAccessBlockResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutPublicAccessBlockResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutPublicAccessBlockResponse(const PutPublicAccessBlockRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPublicAccessBlockRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPublicAccessBlockResponse)
    Q_DISABLE_COPY(PutPublicAccessBlockResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
