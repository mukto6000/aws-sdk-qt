// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTKEYRESPONSE_H
#define QTAWS_UPDATEHOSTKEYRESPONSE_H

#include "transferresponse.h"
#include "updatehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateHostKeyResponsePrivate;

class QTAWSTRANSFER_EXPORT UpdateHostKeyResponse : public TransferResponse {
    Q_OBJECT

public:
    UpdateHostKeyResponse(const UpdateHostKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHostKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHostKeyResponse)
    Q_DISABLE_COPY(UpdateHostKeyResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
