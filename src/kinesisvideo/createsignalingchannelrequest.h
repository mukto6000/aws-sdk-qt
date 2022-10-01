// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIGNALINGCHANNELREQUEST_H
#define QTAWS_CREATESIGNALINGCHANNELREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class CreateSignalingChannelRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT CreateSignalingChannelRequest : public KinesisVideoRequest {

public:
    CreateSignalingChannelRequest(const CreateSignalingChannelRequest &other);
    CreateSignalingChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSignalingChannelRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
