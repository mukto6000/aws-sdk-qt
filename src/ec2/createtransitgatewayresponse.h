// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRANSITGATEWAYRESPONSE_H
#define QTAWS_CREATETRANSITGATEWAYRESPONSE_H

#include "ec2response.h"
#include "createtransitgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateTransitGatewayResponsePrivate;

class QTAWSEC2_EXPORT CreateTransitGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateTransitGatewayResponse(const CreateTransitGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTransitGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTransitGatewayResponse)
    Q_DISABLE_COPY(CreateTransitGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
