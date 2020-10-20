/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CREATEDELIVERYSTREAMRESPONSE_H
#define QTAWS_CREATEDELIVERYSTREAMRESPONSE_H

#include "firehoseresponse.h"
#include "createdeliverystreamrequest.h"

namespace QtAws {
namespace Firehose {

class CreateDeliveryStreamResponsePrivate;

class QTAWS_EXPORT CreateDeliveryStreamResponse : public FirehoseResponse {
    Q_OBJECT

public:
    CreateDeliveryStreamResponse(const CreateDeliveryStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeliveryStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeliveryStreamResponse)
    Q_DISABLE_COPY(CreateDeliveryStreamResponse)

};

} // namespace Firehose
} // namespace QtAws

#endif
