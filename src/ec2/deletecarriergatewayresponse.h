// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECARRIERGATEWAYRESPONSE_H
#define QTAWS_DELETECARRIERGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deletecarriergatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteCarrierGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteCarrierGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteCarrierGatewayResponse(const DeleteCarrierGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCarrierGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCarrierGatewayResponse)
    Q_DISABLE_COPY(DeleteCarrierGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
