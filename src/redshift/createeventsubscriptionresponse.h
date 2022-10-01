// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEEVENTSUBSCRIPTIONRESPONSE_H

#include "redshiftresponse.h"
#include "createeventsubscriptionrequest.h"

namespace QtAws {
namespace Redshift {

class CreateEventSubscriptionResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateEventSubscriptionResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateEventSubscriptionResponse(const CreateEventSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventSubscriptionResponse)
    Q_DISABLE_COPY(CreateEventSubscriptionResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
