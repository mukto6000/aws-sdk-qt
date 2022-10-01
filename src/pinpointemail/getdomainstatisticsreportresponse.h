// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDOMAINSTATISTICSREPORTRESPONSE_H
#define QTAWS_GETDOMAINSTATISTICSREPORTRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdomainstatisticsreportrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDomainStatisticsReportResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDomainStatisticsReportResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDomainStatisticsReportResponse(const GetDomainStatisticsReportRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDomainStatisticsReportRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDomainStatisticsReportResponse)
    Q_DISABLE_COPY(GetDomainStatisticsReportResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
