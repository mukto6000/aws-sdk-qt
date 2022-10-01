// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRATIONCODERESPONSE_H
#define QTAWS_GETREGISTRATIONCODERESPONSE_H

#include "iotresponse.h"
#include "getregistrationcoderequest.h"

namespace QtAws {
namespace IoT {

class GetRegistrationCodeResponsePrivate;

class QTAWSIOT_EXPORT GetRegistrationCodeResponse : public IoTResponse {
    Q_OBJECT

public:
    GetRegistrationCodeResponse(const GetRegistrationCodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRegistrationCodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRegistrationCodeResponse)
    Q_DISABLE_COPY(GetRegistrationCodeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
