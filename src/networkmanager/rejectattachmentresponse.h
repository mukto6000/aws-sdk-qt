// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTATTACHMENTRESPONSE_H
#define QTAWS_REJECTATTACHMENTRESPONSE_H

#include "networkmanagerresponse.h"
#include "rejectattachmentrequest.h"

namespace QtAws {
namespace NetworkManager {

class RejectAttachmentResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT RejectAttachmentResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    RejectAttachmentResponse(const RejectAttachmentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectAttachmentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectAttachmentResponse)
    Q_DISABLE_COPY(RejectAttachmentResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
