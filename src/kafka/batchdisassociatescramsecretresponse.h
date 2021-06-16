/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_H
#define QTAWS_BATCHDISASSOCIATESCRAMSECRETRESPONSE_H

#include "kafkaresponse.h"
#include "batchdisassociatescramsecretrequest.h"

namespace QtAws {
namespace Kafka {

class BatchDisassociateScramSecretResponsePrivate;

class QTAWS_EXPORT BatchDisassociateScramSecretResponse : public KafkaResponse {
    Q_OBJECT

public:
    BatchDisassociateScramSecretResponse(const BatchDisassociateScramSecretRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDisassociateScramSecretRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDisassociateScramSecretResponse)
    Q_DISABLE_COPY(BatchDisassociateScramSecretResponse)

};

} // namespace Kafka
} // namespace QtAws

#endif
