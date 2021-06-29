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

#ifndef QTAWS_GLOBALACCELERATORREQUEST_H
#define QTAWS_GLOBALACCELERATORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsglobalacceleratorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT GlobalAcceleratorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GlobalAccelerator.
    enum Action {
        AddCustomRoutingEndpointsAction,
        AdvertiseByoipCidrAction,
        AllowCustomRoutingTrafficAction,
        CreateAcceleratorAction,
        CreateCustomRoutingAcceleratorAction,
        CreateCustomRoutingEndpointGroupAction,
        CreateCustomRoutingListenerAction,
        CreateEndpointGroupAction,
        CreateListenerAction,
        DeleteAcceleratorAction,
        DeleteCustomRoutingAcceleratorAction,
        DeleteCustomRoutingEndpointGroupAction,
        DeleteCustomRoutingListenerAction,
        DeleteEndpointGroupAction,
        DeleteListenerAction,
        DenyCustomRoutingTrafficAction,
        DeprovisionByoipCidrAction,
        DescribeAcceleratorAction,
        DescribeAcceleratorAttributesAction,
        DescribeCustomRoutingAcceleratorAction,
        DescribeCustomRoutingAcceleratorAttributesAction,
        DescribeCustomRoutingEndpointGroupAction,
        DescribeCustomRoutingListenerAction,
        DescribeEndpointGroupAction,
        DescribeListenerAction,
        ListAcceleratorsAction,
        ListByoipCidrsAction,
        ListCustomRoutingAcceleratorsAction,
        ListCustomRoutingEndpointGroupsAction,
        ListCustomRoutingListenersAction,
        ListCustomRoutingPortMappingsAction,
        ListCustomRoutingPortMappingsByDestinationAction,
        ListEndpointGroupsAction,
        ListListenersAction,
        ListTagsForResourceAction,
        ProvisionByoipCidrAction,
        RemoveCustomRoutingEndpointsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAcceleratorAction,
        UpdateAcceleratorAttributesAction,
        UpdateCustomRoutingAcceleratorAction,
        UpdateCustomRoutingAcceleratorAttributesAction,
        UpdateCustomRoutingListenerAction,
        UpdateEndpointGroupAction,
        UpdateListenerAction,
        WithdrawByoipCidrAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GlobalAcceleratorRequest(const Action action);
    GlobalAcceleratorRequest(const GlobalAcceleratorRequest &other);
    GlobalAcceleratorRequest &operator=(const GlobalAcceleratorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GlobalAcceleratorRequest &other) const;


protected:
    /// @cond internal
    GlobalAcceleratorRequestPrivate * const d_ptr; ///< Internal d-pointer.
    GlobalAcceleratorRequest(GlobalAcceleratorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlobalAcceleratorRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
