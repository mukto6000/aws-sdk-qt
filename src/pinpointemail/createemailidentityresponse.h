// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYRESPONSE_H
#define QTAWS_CREATEEMAILIDENTITYRESPONSE_H

#include "pinpointemailresponse.h"
#include "createemailidentityrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateEmailIdentityResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT CreateEmailIdentityResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    CreateEmailIdentityResponse(const CreateEmailIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEmailIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailIdentityResponse)
    Q_DISABLE_COPY(CreateEmailIdentityResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
