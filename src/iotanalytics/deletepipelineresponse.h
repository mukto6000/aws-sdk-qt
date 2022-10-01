// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINERESPONSE_H
#define QTAWS_DELETEPIPELINERESPONSE_H

#include "iotanalyticsresponse.h"
#include "deletepipelinerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DeletePipelineResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT DeletePipelineResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    DeletePipelineResponse(const DeletePipelineRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePipelineRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePipelineResponse)
    Q_DISABLE_COPY(DeletePipelineResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
