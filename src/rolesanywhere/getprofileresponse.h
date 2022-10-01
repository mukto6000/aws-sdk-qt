// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILERESPONSE_H
#define QTAWS_GETPROFILERESPONSE_H

#include "rolesanywhereresponse.h"
#include "getprofilerequest.h"

namespace QtAws {
namespace RolesAnywhere {

class GetProfileResponsePrivate;

class QTAWSROLESANYWHERE_EXPORT GetProfileResponse : public RolesAnywhereResponse {
    Q_OBJECT

public:
    GetProfileResponse(const GetProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProfileResponse)
    Q_DISABLE_COPY(GetProfileResponse)

};

} // namespace RolesAnywhere
} // namespace QtAws

#endif
