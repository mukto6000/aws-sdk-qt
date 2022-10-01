// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYEXPORTREQUEST_P_H
#define QTAWS_CREATEEXPLAINABILITYEXPORTREQUEST_P_H

#include "forecastrequest_p.h"
#include "createexplainabilityexportrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityExportRequest;

class CreateExplainabilityExportRequestPrivate : public ForecastRequestPrivate {

public:
    CreateExplainabilityExportRequestPrivate(const ForecastRequest::Action action,
                                   CreateExplainabilityExportRequest * const q);
    CreateExplainabilityExportRequestPrivate(const CreateExplainabilityExportRequestPrivate &other,
                                   CreateExplainabilityExportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExplainabilityExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
