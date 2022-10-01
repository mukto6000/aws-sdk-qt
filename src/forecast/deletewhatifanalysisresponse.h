// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFANALYSISRESPONSE_H
#define QTAWS_DELETEWHATIFANALYSISRESPONSE_H

#include "forecastresponse.h"
#include "deletewhatifanalysisrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfAnalysisResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteWhatIfAnalysisResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteWhatIfAnalysisResponse(const DeleteWhatIfAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteWhatIfAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWhatIfAnalysisResponse)
    Q_DISABLE_COPY(DeleteWhatIfAnalysisResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
