/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_RESYNCMFADEVICERESPONSE_H
#define QTAWS_RESYNCMFADEVICERESPONSE_H

#include "iamresponse.h"
#include "resyncmfadevicerequest.h"

namespace QtAws {
namespace IAM {

class ResyncMFADeviceResponsePrivate;

class QTAWS_EXPORT ResyncMFADeviceResponse : public IamResponse {
    Q_OBJECT

public:
    ResyncMFADeviceResponse(const ResyncMFADeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResyncMFADeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResyncMFADeviceResponse)
    Q_DISABLE_COPY(ResyncMFADeviceResponse)

};

} // namespace IAM
} // namespace QtAws

#endif
