// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_H
#define QTAWS_PUTAPPINSTANCERETENTIONSETTINGSRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "putappinstanceretentionsettingsrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class PutAppInstanceRetentionSettingsResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT PutAppInstanceRetentionSettingsResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    PutAppInstanceRetentionSettingsResponse(const PutAppInstanceRetentionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppInstanceRetentionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppInstanceRetentionSettingsResponse)
    Q_DISABLE_COPY(PutAppInstanceRetentionSettingsResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
