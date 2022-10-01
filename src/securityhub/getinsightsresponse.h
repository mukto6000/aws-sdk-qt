// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTSRESPONSE_H
#define QTAWS_GETINSIGHTSRESPONSE_H

#include "securityhubresponse.h"
#include "getinsightsrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInsightsResponsePrivate;

class QTAWSSECURITYHUB_EXPORT GetInsightsResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    GetInsightsResponse(const GetInsightsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInsightsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInsightsResponse)
    Q_DISABLE_COPY(GetInsightsResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
