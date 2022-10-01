// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGEOFENCERESPONSE_H
#define QTAWS_PUTGEOFENCERESPONSE_H

#include "locationresponse.h"
#include "putgeofencerequest.h"

namespace QtAws {
namespace Location {

class PutGeofenceResponsePrivate;

class QTAWSLOCATION_EXPORT PutGeofenceResponse : public LocationResponse {
    Q_OBJECT

public:
    PutGeofenceResponse(const PutGeofenceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutGeofenceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGeofenceResponse)
    Q_DISABLE_COPY(PutGeofenceResponse)

};

} // namespace Location
} // namespace QtAws

#endif
