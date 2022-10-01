// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEFAULTSENDERIDREQUEST_H
#define QTAWS_DELETEDEFAULTSENDERIDREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteDefaultSenderIdRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteDefaultSenderIdRequest : public PinpointSmsVoiceV2Request {

public:
    DeleteDefaultSenderIdRequest(const DeleteDefaultSenderIdRequest &other);
    DeleteDefaultSenderIdRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDefaultSenderIdRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
