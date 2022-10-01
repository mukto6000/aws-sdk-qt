// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGACTIVITIESRESPONSE_H
#define QTAWS_DESCRIBESCALINGACTIVITIESRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "describescalingactivitiesrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalingActivitiesResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScalingActivitiesResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    DescribeScalingActivitiesResponse(const DescribeScalingActivitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeScalingActivitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingActivitiesResponse)
    Q_DISABLE_COPY(DescribeScalingActivitiesResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
