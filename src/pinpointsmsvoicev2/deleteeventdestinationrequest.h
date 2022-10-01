// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDESTINATIONREQUEST_H
#define QTAWS_DELETEEVENTDESTINATIONREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteEventDestinationRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteEventDestinationRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteEventDestinationRequest(const DeleteEventDestinationRequest &other);
    DeleteEventDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventDestinationRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
