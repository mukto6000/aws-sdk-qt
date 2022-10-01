// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREMOTEACCESSSESSIONRESPONSE_H
#define QTAWS_CREATEREMOTEACCESSSESSIONRESPONSE_H

#include "devicefarmresponse.h"
#include "createremoteaccesssessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateRemoteAccessSessionResponsePrivate;

class QTAWSDEVICEFARM_EXPORT CreateRemoteAccessSessionResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    CreateRemoteAccessSessionResponse(const CreateRemoteAccessSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRemoteAccessSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRemoteAccessSessionResponse)
    Q_DISABLE_COPY(CreateRemoteAccessSessionResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
