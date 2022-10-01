// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENDERIDSRESPONSE_H
#define QTAWS_DESCRIBESENDERIDSRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "describesenderidsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSenderIdsResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeSenderIdsResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DescribeSenderIdsResponse(const DescribeSenderIdsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSenderIdsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSenderIdsResponse)
    Q_DISABLE_COPY(DescribeSenderIdsResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
