// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELPIPELINEREPROCESSINGREQUEST_H
#define QTAWS_CANCELPIPELINEREPROCESSINGREQUEST_H

#include "iotanalyticsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CancelPipelineReprocessingRequestPrivate;

class QTAWSIOTANALYTICS_EXPORT CancelPipelineReprocessingRequest : public IoTAnalyticsRequest {

public:
    CancelPipelineReprocessingRequest(const CancelPipelineReprocessingRequest &other);
    CancelPipelineReprocessingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelPipelineReprocessingRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
