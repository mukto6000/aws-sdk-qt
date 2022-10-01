// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAVSDEVICERESPONSE_H
#define QTAWS_REGISTERAVSDEVICERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "registeravsdevicerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RegisterAVSDeviceResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT RegisterAVSDeviceResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    RegisterAVSDeviceResponse(const RegisterAVSDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterAVSDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterAVSDeviceResponse)
    Q_DISABLE_COPY(RegisterAVSDeviceResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
