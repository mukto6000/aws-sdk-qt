// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATERESPONSE_H
#define QTAWS_UPDATECERTIFICATERESPONSE_H

#include "transferresponse.h"
#include "updatecertificaterequest.h"

namespace QtAws {
namespace Transfer {

class UpdateCertificateResponsePrivate;

class QTAWSTRANSFER_EXPORT UpdateCertificateResponse : public TransferResponse {
    Q_OBJECT

public:
    UpdateCertificateResponse(const UpdateCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateResponse)
    Q_DISABLE_COPY(UpdateCertificateResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
