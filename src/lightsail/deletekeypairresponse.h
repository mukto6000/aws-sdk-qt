// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYPAIRRESPONSE_H
#define QTAWS_DELETEKEYPAIRRESPONSE_H

#include "lightsailresponse.h"
#include "deletekeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteKeyPairResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteKeyPairResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteKeyPairResponse(const DeleteKeyPairRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteKeyPairRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeyPairResponse)
    Q_DISABLE_COPY(DeleteKeyPairResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
