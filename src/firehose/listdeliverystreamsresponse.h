// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDELIVERYSTREAMSRESPONSE_H
#define QTAWS_LISTDELIVERYSTREAMSRESPONSE_H

#include "firehoseresponse.h"
#include "listdeliverystreamsrequest.h"

namespace QtAws {
namespace Firehose {

class ListDeliveryStreamsResponsePrivate;

class QTAWSFIREHOSE_EXPORT ListDeliveryStreamsResponse : public FirehoseResponse {
    Q_OBJECT

public:
    ListDeliveryStreamsResponse(const ListDeliveryStreamsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDeliveryStreamsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDeliveryStreamsResponse)
    Q_DISABLE_COPY(ListDeliveryStreamsResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
