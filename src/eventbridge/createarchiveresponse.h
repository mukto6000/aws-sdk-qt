// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEARCHIVERESPONSE_H
#define QTAWS_CREATEARCHIVERESPONSE_H

#include "eventbridgeresponse.h"
#include "createarchiverequest.h"

namespace QtAws {
namespace EventBridge {

class CreateArchiveResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateArchiveResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    CreateArchiveResponse(const CreateArchiveRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateArchiveRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateArchiveResponse)
    Q_DISABLE_COPY(CreateArchiveResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
