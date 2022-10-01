// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGDATAREQUEST_H
#define QTAWS_APPCONFIGDATAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappconfigdataglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppConfigData {

class AppConfigDataRequestPrivate;

class QTAWSAPPCONFIGDATA_EXPORT AppConfigDataRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppConfigData.
    enum Action {
        GetLatestConfigurationAction,
        StartConfigurationSessionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppConfigDataRequest(const Action action);
    AppConfigDataRequest(const AppConfigDataRequest &other);
    AppConfigDataRequest &operator=(const AppConfigDataRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppConfigDataRequest &other) const;


protected:
    /// @cond internal
    explicit AppConfigDataRequest(AppConfigDataRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppConfigDataRequest)

};

} // namespace AppConfigData
} // namespace QtAws

#endif
