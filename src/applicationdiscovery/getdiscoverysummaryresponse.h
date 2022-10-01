// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISCOVERYSUMMARYRESPONSE_H
#define QTAWS_GETDISCOVERYSUMMARYRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "getdiscoverysummaryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class GetDiscoverySummaryResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT GetDiscoverySummaryResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    GetDiscoverySummaryResponse(const GetDiscoverySummaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiscoverySummaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiscoverySummaryResponse)
    Q_DISABLE_COPY(GetDiscoverySummaryResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
