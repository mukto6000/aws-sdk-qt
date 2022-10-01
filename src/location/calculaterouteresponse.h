// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CALCULATEROUTERESPONSE_H
#define QTAWS_CALCULATEROUTERESPONSE_H

#include "locationresponse.h"
#include "calculaterouterequest.h"

namespace QtAws {
namespace Location {

class CalculateRouteResponsePrivate;

class QTAWSLOCATION_EXPORT CalculateRouteResponse : public LocationResponse {
    Q_OBJECT

public:
    CalculateRouteResponse(const CalculateRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CalculateRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CalculateRouteResponse)
    Q_DISABLE_COPY(CalculateRouteResponse)

};

} // namespace Location
} // namespace QtAws

#endif
