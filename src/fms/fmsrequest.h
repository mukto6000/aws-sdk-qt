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

#ifndef QTAWS_FMSREQUEST_H
#define QTAWS_FMSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsfmsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace FMS {

class FmsRequestPrivate;

class QTAWSFMS_EXPORT FmsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by FMS.
    enum Action {
        AssociateAdminAccountAction,
        DeleteAppsListAction,
        DeleteNotificationChannelAction,
        DeletePolicyAction,
        DeleteProtocolsListAction,
        DisassociateAdminAccountAction,
        GetAdminAccountAction,
        GetAppsListAction,
        GetComplianceDetailAction,
        GetNotificationChannelAction,
        GetPolicyAction,
        GetProtectionStatusAction,
        GetProtocolsListAction,
        GetViolationDetailsAction,
        ListAppsListsAction,
        ListComplianceStatusAction,
        ListMemberAccountsAction,
        ListPoliciesAction,
        ListProtocolsListsAction,
        ListTagsForResourceAction,
        PutAppsListAction,
        PutNotificationChannelAction,
        PutPolicyAction,
        PutProtocolsListAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    FmsRequest(const Action action);
    FmsRequest(const FmsRequest &other);
    FmsRequest &operator=(const FmsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const FmsRequest &other) const;


protected:
    /// @cond internal
    FmsRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit FmsRequest(FmsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FmsRequest)

};

} // namespace FMS
} // namespace QtAws

#endif
