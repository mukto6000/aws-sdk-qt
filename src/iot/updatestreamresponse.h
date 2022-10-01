// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMRESPONSE_H
#define QTAWS_UPDATESTREAMRESPONSE_H

#include "iotresponse.h"
#include "updatestreamrequest.h"

namespace QtAws {
namespace IoT {

class UpdateStreamResponsePrivate;

class QTAWSIOT_EXPORT UpdateStreamResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateStreamResponse(const UpdateStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateStreamResponse)
    Q_DISABLE_COPY(UpdateStreamResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
