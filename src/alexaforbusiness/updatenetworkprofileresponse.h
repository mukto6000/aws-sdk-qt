// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKPROFILERESPONSE_H
#define QTAWS_UPDATENETWORKPROFILERESPONSE_H

#include "alexaforbusinessresponse.h"
#include "updatenetworkprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateNetworkProfileResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT UpdateNetworkProfileResponse : public AlexaForBusinessResponse {
    Q_OBJECT

public:
    UpdateNetworkProfileResponse(const UpdateNetworkProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkProfileResponse)
    Q_DISABLE_COPY(UpdateNetworkProfileResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
