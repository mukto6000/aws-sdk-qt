// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORREQUEST_H
#define QTAWS_CREATEPREDICTORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorRequestPrivate;

class QTAWSFORECAST_EXPORT CreatePredictorRequest : public ForecastRequest {

public:
    CreatePredictorRequest(const CreatePredictorRequest &other);
    CreatePredictorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
