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

#ifndef QTAWS_S3CONTROLREQUEST_H
#define QTAWS_S3CONTROLREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawss3controlglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace S3Control {

class S3ControlRequestPrivate;

class QTAWSS3CONTROL_EXPORT S3ControlRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by S3Control.
    enum Action {
        CreateAccessPointAction,
        CreateAccessPointForObjectLambdaAction,
        CreateBucketAction,
        CreateJobAction,
        DeleteAccessPointAction,
        DeleteAccessPointForObjectLambdaAction,
        DeleteAccessPointPolicyAction,
        DeleteAccessPointPolicyForObjectLambdaAction,
        DeleteBucketAction,
        DeleteBucketLifecycleConfigurationAction,
        DeleteBucketPolicyAction,
        DeleteBucketTaggingAction,
        DeleteJobTaggingAction,
        DeletePublicAccessBlockAction,
        DeleteStorageLensConfigurationAction,
        DeleteStorageLensConfigurationTaggingAction,
        DescribeJobAction,
        GetAccessPointAction,
        GetAccessPointConfigurationForObjectLambdaAction,
        GetAccessPointForObjectLambdaAction,
        GetAccessPointPolicyAction,
        GetAccessPointPolicyForObjectLambdaAction,
        GetAccessPointPolicyStatusAction,
        GetAccessPointPolicyStatusForObjectLambdaAction,
        GetBucketAction,
        GetBucketLifecycleConfigurationAction,
        GetBucketPolicyAction,
        GetBucketTaggingAction,
        GetJobTaggingAction,
        GetPublicAccessBlockAction,
        GetStorageLensConfigurationAction,
        GetStorageLensConfigurationTaggingAction,
        ListAccessPointsAction,
        ListAccessPointsForObjectLambdaAction,
        ListJobsAction,
        ListRegionalBucketsAction,
        ListStorageLensConfigurationsAction,
        PutAccessPointConfigurationForObjectLambdaAction,
        PutAccessPointPolicyAction,
        PutAccessPointPolicyForObjectLambdaAction,
        PutBucketLifecycleConfigurationAction,
        PutBucketPolicyAction,
        PutBucketTaggingAction,
        PutJobTaggingAction,
        PutPublicAccessBlockAction,
        PutStorageLensConfigurationAction,
        PutStorageLensConfigurationTaggingAction,
        UpdateJobPriorityAction,
        UpdateJobStatusAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    S3ControlRequest(const Action action);
    S3ControlRequest(const S3ControlRequest &other);
    S3ControlRequest &operator=(const S3ControlRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const S3ControlRequest &other) const;


protected:
    /// @cond internal
    S3ControlRequest(S3ControlRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(S3ControlRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
