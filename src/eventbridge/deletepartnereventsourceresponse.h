// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCERESPONSE_H
#define QTAWS_DELETEPARTNEREVENTSOURCERESPONSE_H

#include "eventbridgeresponse.h"
#include "deletepartnereventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DeletePartnerEventSourceResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DeletePartnerEventSourceResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DeletePartnerEventSourceResponse(const DeletePartnerEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePartnerEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartnerEventSourceResponse)
    Q_DISABLE_COPY(DeletePartnerEventSourceResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
