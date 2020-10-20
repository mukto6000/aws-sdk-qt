/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_SSMREQUEST_H
#define QTAWS_SSMREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SSM {

class SsmRequestPrivate;

class QTAWS_EXPORT SsmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SSM.
    enum Action {
        AddTagsToResourceAction,
        CancelCommandAction,
        CancelMaintenanceWindowExecutionAction,
        CreateActivationAction,
        CreateAssociationAction,
        CreateAssociationBatchAction,
        CreateDocumentAction,
        CreateMaintenanceWindowAction,
        CreateOpsItemAction,
        CreatePatchBaselineAction,
        CreateResourceDataSyncAction,
        DeleteActivationAction,
        DeleteAssociationAction,
        DeleteDocumentAction,
        DeleteInventoryAction,
        DeleteMaintenanceWindowAction,
        DeleteParameterAction,
        DeleteParametersAction,
        DeletePatchBaselineAction,
        DeleteResourceDataSyncAction,
        DeregisterManagedInstanceAction,
        DeregisterPatchBaselineForPatchGroupAction,
        DeregisterTargetFromMaintenanceWindowAction,
        DeregisterTaskFromMaintenanceWindowAction,
        DescribeActivationsAction,
        DescribeAssociationAction,
        DescribeAssociationExecutionTargetsAction,
        DescribeAssociationExecutionsAction,
        DescribeAutomationExecutionsAction,
        DescribeAutomationStepExecutionsAction,
        DescribeAvailablePatchesAction,
        DescribeDocumentAction,
        DescribeDocumentPermissionAction,
        DescribeEffectiveInstanceAssociationsAction,
        DescribeEffectivePatchesForPatchBaselineAction,
        DescribeInstanceAssociationsStatusAction,
        DescribeInstanceInformationAction,
        DescribeInstancePatchStatesAction,
        DescribeInstancePatchStatesForPatchGroupAction,
        DescribeInstancePatchesAction,
        DescribeInventoryDeletionsAction,
        DescribeMaintenanceWindowExecutionTaskInvocationsAction,
        DescribeMaintenanceWindowExecutionTasksAction,
        DescribeMaintenanceWindowExecutionsAction,
        DescribeMaintenanceWindowScheduleAction,
        DescribeMaintenanceWindowTargetsAction,
        DescribeMaintenanceWindowTasksAction,
        DescribeMaintenanceWindowsAction,
        DescribeMaintenanceWindowsForTargetAction,
        DescribeOpsItemsAction,
        DescribeParametersAction,
        DescribePatchBaselinesAction,
        DescribePatchGroupStateAction,
        DescribePatchGroupsAction,
        DescribePatchPropertiesAction,
        DescribeSessionsAction,
        GetAutomationExecutionAction,
        GetCommandInvocationAction,
        GetConnectionStatusAction,
        GetDefaultPatchBaselineAction,
        GetDeployablePatchSnapshotForInstanceAction,
        GetDocumentAction,
        GetInventoryAction,
        GetInventorySchemaAction,
        GetMaintenanceWindowAction,
        GetMaintenanceWindowExecutionAction,
        GetMaintenanceWindowExecutionTaskAction,
        GetMaintenanceWindowExecutionTaskInvocationAction,
        GetMaintenanceWindowTaskAction,
        GetOpsItemAction,
        GetOpsSummaryAction,
        GetParameterAction,
        GetParameterHistoryAction,
        GetParametersAction,
        GetParametersByPathAction,
        GetPatchBaselineAction,
        GetPatchBaselineForPatchGroupAction,
        GetServiceSettingAction,
        LabelParameterVersionAction,
        ListAssociationVersionsAction,
        ListAssociationsAction,
        ListCommandInvocationsAction,
        ListCommandsAction,
        ListComplianceItemsAction,
        ListComplianceSummariesAction,
        ListDocumentVersionsAction,
        ListDocumentsAction,
        ListInventoryEntriesAction,
        ListResourceComplianceSummariesAction,
        ListResourceDataSyncAction,
        ListTagsForResourceAction,
        ModifyDocumentPermissionAction,
        PutComplianceItemsAction,
        PutInventoryAction,
        PutParameterAction,
        RegisterDefaultPatchBaselineAction,
        RegisterPatchBaselineForPatchGroupAction,
        RegisterTargetWithMaintenanceWindowAction,
        RegisterTaskWithMaintenanceWindowAction,
        RemoveTagsFromResourceAction,
        ResetServiceSettingAction,
        ResumeSessionAction,
        SendAutomationSignalAction,
        SendCommandAction,
        StartAssociationsOnceAction,
        StartAutomationExecutionAction,
        StartSessionAction,
        StopAutomationExecutionAction,
        TerminateSessionAction,
        UpdateAssociationAction,
        UpdateAssociationStatusAction,
        UpdateDocumentAction,
        UpdateDocumentDefaultVersionAction,
        UpdateMaintenanceWindowAction,
        UpdateMaintenanceWindowTargetAction,
        UpdateMaintenanceWindowTaskAction,
        UpdateManagedInstanceRoleAction,
        UpdateOpsItemAction,
        UpdatePatchBaselineAction,
        UpdateServiceSettingAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsmRequest(const Action action);
    SsmRequest(const SsmRequest &other);
    SsmRequest &operator=(const SsmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsmRequest &other) const;


protected:
    /// @cond internal
    SsmRequest(SsmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmRequest)

};

} // namespace SSM
} // namespace QtAws

#endif
