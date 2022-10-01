// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERRESPONSE_H
#define QTAWS_DISABLEUSERRESPONSE_H

#include "appstreamresponse.h"
#include "disableuserrequest.h"

namespace QtAws {
namespace AppStream {

class DisableUserResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DisableUserResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DisableUserResponse(const DisableUserRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableUserRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableUserResponse)
    Q_DISABLE_COPY(DisableUserResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
