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

#ifndef QTAWS_LOOKOUTFORVISIONREQUEST_H
#define QTAWS_LOOKOUTFORVISIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslookoutforvisionglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LookoutforVision {

class LookoutforVisionRequestPrivate;

class QTAWSLOOKOUTFORVISION_EXPORT LookoutforVisionRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LookoutforVision.
    enum Action {
        CreateDatasetAction,
        CreateModelAction,
        CreateProjectAction,
        DeleteDatasetAction,
        DeleteModelAction,
        DeleteProjectAction,
        DescribeDatasetAction,
        DescribeModelAction,
        DescribeProjectAction,
        DetectAnomaliesAction,
        ListDatasetEntriesAction,
        ListModelsAction,
        ListProjectsAction,
        ListTagsForResourceAction,
        StartModelAction,
        StopModelAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDatasetEntriesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LookoutforVisionRequest(const Action action);
    LookoutforVisionRequest(const LookoutforVisionRequest &other);
    LookoutforVisionRequest &operator=(const LookoutforVisionRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LookoutforVisionRequest &other) const;


protected:
    /// @cond internal
    LookoutforVisionRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit LookoutforVisionRequest(LookoutforVisionRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookoutforVisionRequest)

};

} // namespace LookoutforVision
} // namespace QtAws

#endif
