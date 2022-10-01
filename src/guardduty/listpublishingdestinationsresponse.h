// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLISHINGDESTINATIONSRESPONSE_H
#define QTAWS_LISTPUBLISHINGDESTINATIONSRESPONSE_H

#include "guarddutyresponse.h"
#include "listpublishingdestinationsrequest.h"

namespace QtAws {
namespace GuardDuty {

class ListPublishingDestinationsResponsePrivate;

class QTAWSGUARDDUTY_EXPORT ListPublishingDestinationsResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    ListPublishingDestinationsResponse(const ListPublishingDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPublishingDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublishingDestinationsResponse)
    Q_DISABLE_COPY(ListPublishingDestinationsResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
