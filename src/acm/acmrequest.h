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

#ifndef QTAWS_ACMREQUEST_H
#define QTAWS_ACMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsacmglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ACM {

class AcmRequestPrivate;

class QTAWSACM_EXPORT AcmRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ACM.
    enum Action {
        AddTagsToCertificateAction,
        DeleteCertificateAction,
        DescribeCertificateAction,
        ExportCertificateAction,
        GetAccountConfigurationAction,
        GetCertificateAction,
        ImportCertificateAction,
        ListCertificatesAction,
        ListTagsForCertificateAction,
        PutAccountConfigurationAction,
        RemoveTagsFromCertificateAction,
        RenewCertificateAction,
        RequestCertificateAction,
        ResendValidationEmailAction,
        UpdateCertificateOptionsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AcmRequest(const Action action);
    AcmRequest(const AcmRequest &other);
    AcmRequest &operator=(const AcmRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AcmRequest &other) const;


protected:
    /// @cond internal
    AcmRequestPrivate * const d_ptr; ///< Internal d-pointer.
    AcmRequest(AcmRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcmRequest)

};

} // namespace ACM
} // namespace QtAws

#endif
