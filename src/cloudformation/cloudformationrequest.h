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

#ifndef QTAWS_CLOUDFORMATIONREQUEST_H
#define QTAWS_CLOUDFORMATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudformationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudFormation {

class CloudFormationRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CloudFormationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudFormation.
    enum Action {
        CancelUpdateStackAction,
        ContinueUpdateRollbackAction,
        CreateChangeSetAction,
        CreateStackAction,
        CreateStackInstancesAction,
        CreateStackSetAction,
        DeleteChangeSetAction,
        DeleteStackAction,
        DeleteStackInstancesAction,
        DeleteStackSetAction,
        DeregisterTypeAction,
        DescribeAccountLimitsAction,
        DescribeChangeSetAction,
        DescribeStackDriftDetectionStatusAction,
        DescribeStackEventsAction,
        DescribeStackInstanceAction,
        DescribeStackResourceAction,
        DescribeStackResourceDriftsAction,
        DescribeStackResourcesAction,
        DescribeStackSetAction,
        DescribeStackSetOperationAction,
        DescribeStacksAction,
        DescribeTypeAction,
        DescribeTypeRegistrationAction,
        DetectStackDriftAction,
        DetectStackResourceDriftAction,
        DetectStackSetDriftAction,
        EstimateTemplateCostAction,
        ExecuteChangeSetAction,
        GetStackPolicyAction,
        GetTemplateAction,
        GetTemplateSummaryAction,
        ListChangeSetsAction,
        ListExportsAction,
        ListImportsAction,
        ListStackInstancesAction,
        ListStackResourcesAction,
        ListStackSetOperationResultsAction,
        ListStackSetOperationsAction,
        ListStackSetsAction,
        ListStacksAction,
        ListTypeRegistrationsAction,
        ListTypeVersionsAction,
        ListTypesAction,
        RecordHandlerProgressAction,
        RegisterTypeAction,
        SetStackPolicyAction,
        SetTypeDefaultVersionAction,
        SignalResourceAction,
        StopStackSetOperationAction,
        UpdateStackAction,
        UpdateStackInstancesAction,
        UpdateStackSetAction,
        UpdateTerminationProtectionAction,
        ValidateTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudFormationRequest(const Action action);
    CloudFormationRequest(const CloudFormationRequest &other);
    CloudFormationRequest &operator=(const CloudFormationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudFormationRequest &other) const;


protected:
    /// @cond internal
    CloudFormationRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit CloudFormationRequest(CloudFormationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudFormationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
