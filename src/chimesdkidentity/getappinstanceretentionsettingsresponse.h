// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_H
#define QTAWS_GETAPPINSTANCERETENTIONSETTINGSRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "getappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class GetAppInstanceRetentionSettingsResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT GetAppInstanceRetentionSettingsResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    GetAppInstanceRetentionSettingsResponse(const GetAppInstanceRetentionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppInstanceRetentionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(GetAppInstanceRetentionSettingsResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
