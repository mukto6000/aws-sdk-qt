// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53REQUEST_H
#define QTAWS_ROUTE53REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53 {

class Route53RequestPrivate;

class QTAWSROUTE53_EXPORT Route53Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53.
    enum Action {
        ActivateKeySigningKeyAction,
        AssociateVPCWithHostedZoneAction,
        ChangeCidrCollectionAction,
        ChangeResourceRecordSetsAction,
        ChangeTagsForResourceAction,
        CreateCidrCollectionAction,
        CreateHealthCheckAction,
        CreateHostedZoneAction,
        CreateKeySigningKeyAction,
        CreateQueryLoggingConfigAction,
        CreateReusableDelegationSetAction,
        CreateTrafficPolicyAction,
        CreateTrafficPolicyInstanceAction,
        CreateTrafficPolicyVersionAction,
        CreateVPCAssociationAuthorizationAction,
        DeactivateKeySigningKeyAction,
        DeleteCidrCollectionAction,
        DeleteHealthCheckAction,
        DeleteHostedZoneAction,
        DeleteKeySigningKeyAction,
        DeleteQueryLoggingConfigAction,
        DeleteReusableDelegationSetAction,
        DeleteTrafficPolicyAction,
        DeleteTrafficPolicyInstanceAction,
        DeleteVPCAssociationAuthorizationAction,
        DisableHostedZoneDNSSECAction,
        DisassociateVPCFromHostedZoneAction,
        EnableHostedZoneDNSSECAction,
        GetAccountLimitAction,
        GetChangeAction,
        GetCheckerIpRangesAction,
        GetDNSSECAction,
        GetGeoLocationAction,
        GetHealthCheckAction,
        GetHealthCheckCountAction,
        GetHealthCheckLastFailureReasonAction,
        GetHealthCheckStatusAction,
        GetHostedZoneAction,
        GetHostedZoneCountAction,
        GetHostedZoneLimitAction,
        GetQueryLoggingConfigAction,
        GetReusableDelegationSetAction,
        GetReusableDelegationSetLimitAction,
        GetTrafficPolicyAction,
        GetTrafficPolicyInstanceAction,
        GetTrafficPolicyInstanceCountAction,
        ListCidrBlocksAction,
        ListCidrCollectionsAction,
        ListCidrLocationsAction,
        ListGeoLocationsAction,
        ListHealthChecksAction,
        ListHostedZonesAction,
        ListHostedZonesByNameAction,
        ListHostedZonesByVPCAction,
        ListQueryLoggingConfigsAction,
        ListResourceRecordSetsAction,
        ListReusableDelegationSetsAction,
        ListTagsForResourceAction,
        ListTagsForResourcesAction,
        ListTrafficPoliciesAction,
        ListTrafficPolicyInstancesAction,
        ListTrafficPolicyInstancesByHostedZoneAction,
        ListTrafficPolicyInstancesByPolicyAction,
        ListTrafficPolicyVersionsAction,
        ListVPCAssociationAuthorizationsAction,
        TestDNSAnswerAction,
        UpdateHealthCheckAction,
        UpdateHostedZoneCommentAction,
        UpdateTrafficPolicyCommentAction,
        UpdateTrafficPolicyInstanceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53Request(const Action action);
    Route53Request(const Route53Request &other);
    Route53Request &operator=(const Route53Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53Request &other) const;


protected:
    /// @cond internal
    explicit Route53Request(Route53RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53Request)

};

} // namespace Route53
} // namespace QtAws

#endif
