// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEDOMAINCONFIGURATIONRESPONSE_H

#include "iotresponse.h"
#include "describedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDomainConfigurationResponsePrivate;

class QTAWSIOT_EXPORT DescribeDomainConfigurationResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeDomainConfigurationResponse(const DescribeDomainConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainConfigurationResponse)
    Q_DISABLE_COPY(DescribeDomainConfigurationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
