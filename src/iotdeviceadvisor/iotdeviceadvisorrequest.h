// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDEVICEADVISORREQUEST_H
#define QTAWS_IOTDEVICEADVISORREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotdeviceadvisorglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IotDeviceAdvisor {

class IotDeviceAdvisorRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT IotDeviceAdvisorRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IotDeviceAdvisor.
    enum Action {
        CreateSuiteDefinitionAction,
        DeleteSuiteDefinitionAction,
        GetEndpointAction,
        GetSuiteDefinitionAction,
        GetSuiteRunAction,
        GetSuiteRunReportAction,
        ListSuiteDefinitionsAction,
        ListSuiteRunsAction,
        ListTagsForResourceAction,
        StartSuiteRunAction,
        StopSuiteRunAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateSuiteDefinitionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IotDeviceAdvisorRequest(const Action action);
    IotDeviceAdvisorRequest(const IotDeviceAdvisorRequest &other);
    IotDeviceAdvisorRequest &operator=(const IotDeviceAdvisorRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IotDeviceAdvisorRequest &other) const;


protected:
    /// @cond internal
    explicit IotDeviceAdvisorRequest(IotDeviceAdvisorRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IotDeviceAdvisorRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
