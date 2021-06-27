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

#ifndef QTAWS_MEDIACONVERTREQUEST_H
#define QTAWS_MEDIACONVERTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaConvert {

class MediaConvertRequestPrivate;

class QTAWS_EXPORT MediaConvertRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaConvert.
    enum Action {
        AssociateCertificateAction,
        CancelJobAction,
        CreateJobAction,
        CreateJobTemplateAction,
        CreatePresetAction,
        CreateQueueAction,
        DeleteJobTemplateAction,
        DeletePresetAction,
        DeleteQueueAction,
        DescribeEndpointsAction,
        DisassociateCertificateAction,
        GetJobAction,
        GetJobTemplateAction,
        GetPresetAction,
        GetQueueAction,
        ListJobTemplatesAction,
        ListJobsAction,
        ListPresetsAction,
        ListQueuesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateJobTemplateAction,
        UpdatePresetAction,
        UpdateQueueAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaConvertRequest(const Action action);
    MediaConvertRequest(const MediaConvertRequest &other);
    MediaConvertRequest &operator=(const MediaConvertRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaConvertRequest &other) const;


protected:
    /// @cond internal
    MediaConvertRequestPrivate * const d_ptr; ///< Internal d-pointer.
    MediaConvertRequest(MediaConvertRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaConvertRequest)

};

} // namespace MediaConvert
} // namespace QtAws

#endif
