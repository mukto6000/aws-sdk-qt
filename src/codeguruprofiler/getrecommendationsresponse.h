// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECOMMENDATIONSRESPONSE_H
#define QTAWS_GETRECOMMENDATIONSRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "getrecommendationsrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetRecommendationsResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT GetRecommendationsResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    GetRecommendationsResponse(const GetRecommendationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRecommendationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRecommendationsResponse)
    Q_DISABLE_COPY(GetRecommendationsResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
