// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSRESPONSE_H
#define QTAWS_LISTPREDICTORBACKTESTEXPORTJOBSRESPONSE_H

#include "forecastresponse.h"
#include "listpredictorbacktestexportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListPredictorBacktestExportJobsResponsePrivate;

class QTAWSFORECAST_EXPORT ListPredictorBacktestExportJobsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListPredictorBacktestExportJobsResponse(const ListPredictorBacktestExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListPredictorBacktestExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPredictorBacktestExportJobsResponse)
    Q_DISABLE_COPY(ListPredictorBacktestExportJobsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
