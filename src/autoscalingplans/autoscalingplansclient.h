/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_AUTOSCALINGPLANSCLIENT_H
#define QTAWS_AUTOSCALINGPLANSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsautoscalingplansglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansClientPrivate;
class CreateScalingPlanRequest;
class CreateScalingPlanResponse;
class DeleteScalingPlanRequest;
class DeleteScalingPlanResponse;
class DescribeScalingPlanResourcesRequest;
class DescribeScalingPlanResourcesResponse;
class DescribeScalingPlansRequest;
class DescribeScalingPlansResponse;
class GetScalingPlanResourceForecastDataRequest;
class GetScalingPlanResourceForecastDataResponse;
class UpdateScalingPlanRequest;
class UpdateScalingPlanResponse;

class QTAWSAUTOSCALINGPLANS_EXPORT AutoScalingPlansClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AutoScalingPlansClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AutoScalingPlansClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateScalingPlanResponse * createScalingPlan(const CreateScalingPlanRequest &request);
    DeleteScalingPlanResponse * deleteScalingPlan(const DeleteScalingPlanRequest &request);
    DescribeScalingPlanResourcesResponse * describeScalingPlanResources(const DescribeScalingPlanResourcesRequest &request);
    DescribeScalingPlansResponse * describeScalingPlans(const DescribeScalingPlansRequest &request);
    GetScalingPlanResourceForecastDataResponse * getScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest &request);
    UpdateScalingPlanResponse * updateScalingPlan(const UpdateScalingPlanRequest &request);

protected:
    /// @cond internal
    AutoScalingPlansClientPrivate * const d_ptr; ///< Internal d-pointer.
    AutoScalingPlansClient(AutoScalingPlansClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansClient)
    Q_DISABLE_COPY(AutoScalingPlansClient)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
