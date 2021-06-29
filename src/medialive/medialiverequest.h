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

#ifndef QTAWS_MEDIALIVEREQUEST_H
#define QTAWS_MEDIALIVEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmedialiveglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MediaLive {

class MediaLiveRequestPrivate;

class QTAWSMEDIALIVE_EXPORT MediaLiveRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MediaLive.
    enum Action {
        AcceptInputDeviceTransferAction,
        BatchDeleteAction,
        BatchStartAction,
        BatchStopAction,
        BatchUpdateScheduleAction,
        CancelInputDeviceTransferAction,
        CreateChannelAction,
        CreateInputAction,
        CreateInputSecurityGroupAction,
        CreateMultiplexAction,
        CreateMultiplexProgramAction,
        CreatePartnerInputAction,
        CreateTagsAction,
        DeleteChannelAction,
        DeleteInputAction,
        DeleteInputSecurityGroupAction,
        DeleteMultiplexAction,
        DeleteMultiplexProgramAction,
        DeleteReservationAction,
        DeleteScheduleAction,
        DeleteTagsAction,
        DescribeChannelAction,
        DescribeInputAction,
        DescribeInputDeviceAction,
        DescribeInputDeviceThumbnailAction,
        DescribeInputSecurityGroupAction,
        DescribeMultiplexAction,
        DescribeMultiplexProgramAction,
        DescribeOfferingAction,
        DescribeReservationAction,
        DescribeScheduleAction,
        ListChannelsAction,
        ListInputDeviceTransfersAction,
        ListInputDevicesAction,
        ListInputSecurityGroupsAction,
        ListInputsAction,
        ListMultiplexProgramsAction,
        ListMultiplexesAction,
        ListOfferingsAction,
        ListReservationsAction,
        ListTagsForResourceAction,
        PurchaseOfferingAction,
        RejectInputDeviceTransferAction,
        StartChannelAction,
        StartMultiplexAction,
        StopChannelAction,
        StopMultiplexAction,
        TransferInputDeviceAction,
        UpdateChannelAction,
        UpdateChannelClassAction,
        UpdateInputAction,
        UpdateInputDeviceAction,
        UpdateInputSecurityGroupAction,
        UpdateMultiplexAction,
        UpdateMultiplexProgramAction,
        UpdateReservationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MediaLiveRequest(const Action action);
    MediaLiveRequest(const MediaLiveRequest &other);
    MediaLiveRequest &operator=(const MediaLiveRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MediaLiveRequest &other) const;


protected:
    /// @cond internal
    MediaLiveRequestPrivate * const d_ptr; ///< Internal d-pointer.
    MediaLiveRequest(MediaLiveRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MediaLiveRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
