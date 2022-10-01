// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFORECASTREQUEST_H
#define QTAWS_DESCRIBEFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeForecastRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeForecastRequest : public ForecastRequest {

public:
    DescribeForecastRequest(const DescribeForecastRequest &other);
    DescribeForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
