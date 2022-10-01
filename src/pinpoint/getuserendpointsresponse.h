// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERENDPOINTSRESPONSE_H
#define QTAWS_GETUSERENDPOINTSRESPONSE_H

#include "pinpointresponse.h"
#include "getuserendpointsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetUserEndpointsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetUserEndpointsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetUserEndpointsResponse(const GetUserEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUserEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUserEndpointsResponse)
    Q_DISABLE_COPY(GetUserEndpointsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
