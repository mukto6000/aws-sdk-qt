// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKPROFILERESPONSE_H
#define QTAWS_GETNETWORKPROFILERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "getnetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetNetworkProfileResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT GetNetworkProfileResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    GetNetworkProfileResponse(const GetNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkProfileResponse)
    Q_DISABLE_COPY(GetNetworkProfileResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
