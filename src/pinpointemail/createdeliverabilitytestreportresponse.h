// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTRESPONSE_H

#include "pinpointemailresponse.h"
#include "createdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateDeliverabilityTestReportResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT CreateDeliverabilityTestReportResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    CreateDeliverabilityTestReportResponse(const CreateDeliverabilityTestReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeliverabilityTestReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliverabilityTestReportResponse)
    Q_DISABLE_COPY(CreateDeliverabilityTestReportResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
