// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICACHEREQUEST_H
#define QTAWS_ELASTICACHEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawselasticacheglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ElastiCache {

class ElastiCacheRequestPrivate;

class QTAWSELASTICACHE_EXPORT ElastiCacheRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ElastiCache.
    enum Action {
        AddTagsToResourceAction,
        AuthorizeCacheSecurityGroupIngressAction,
        BatchApplyUpdateActionAction,
        BatchStopUpdateActionAction,
        CompleteMigrationAction,
        CopySnapshotAction,
        CreateCacheClusterAction,
        CreateCacheParameterGroupAction,
        CreateCacheSecurityGroupAction,
        CreateCacheSubnetGroupAction,
        CreateGlobalReplicationGroupAction,
        CreateReplicationGroupAction,
        CreateSnapshotAction,
        CreateUserAction,
        CreateUserGroupAction,
        DecreaseNodeGroupsInGlobalReplicationGroupAction,
        DecreaseReplicaCountAction,
        DeleteCacheClusterAction,
        DeleteCacheParameterGroupAction,
        DeleteCacheSecurityGroupAction,
        DeleteCacheSubnetGroupAction,
        DeleteGlobalReplicationGroupAction,
        DeleteReplicationGroupAction,
        DeleteSnapshotAction,
        DeleteUserAction,
        DeleteUserGroupAction,
        DescribeCacheClustersAction,
        DescribeCacheEngineVersionsAction,
        DescribeCacheParameterGroupsAction,
        DescribeCacheParametersAction,
        DescribeCacheSecurityGroupsAction,
        DescribeCacheSubnetGroupsAction,
        DescribeEngineDefaultParametersAction,
        DescribeEventsAction,
        DescribeGlobalReplicationGroupsAction,
        DescribeReplicationGroupsAction,
        DescribeReservedCacheNodesAction,
        DescribeReservedCacheNodesOfferingsAction,
        DescribeServiceUpdatesAction,
        DescribeSnapshotsAction,
        DescribeUpdateActionsAction,
        DescribeUserGroupsAction,
        DescribeUsersAction,
        DisassociateGlobalReplicationGroupAction,
        FailoverGlobalReplicationGroupAction,
        IncreaseNodeGroupsInGlobalReplicationGroupAction,
        IncreaseReplicaCountAction,
        ListAllowedNodeTypeModificationsAction,
        ListTagsForResourceAction,
        ModifyCacheClusterAction,
        ModifyCacheParameterGroupAction,
        ModifyCacheSubnetGroupAction,
        ModifyGlobalReplicationGroupAction,
        ModifyReplicationGroupAction,
        ModifyReplicationGroupShardConfigurationAction,
        ModifyUserAction,
        ModifyUserGroupAction,
        PurchaseReservedCacheNodesOfferingAction,
        RebalanceSlotsInGlobalReplicationGroupAction,
        RebootCacheClusterAction,
        RemoveTagsFromResourceAction,
        ResetCacheParameterGroupAction,
        RevokeCacheSecurityGroupIngressAction,
        StartMigrationAction,
        TestFailoverAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ElastiCacheRequest(const Action action);
    ElastiCacheRequest(const ElastiCacheRequest &other);
    ElastiCacheRequest &operator=(const ElastiCacheRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ElastiCacheRequest &other) const;


protected:
    /// @cond internal
    explicit ElastiCacheRequest(ElastiCacheRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ElastiCacheRequest)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
