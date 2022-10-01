// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEIMAGEGENERATIONCONFIGURATIONREQUEST_H

#include "kinesisvideorequest.h"

namespace QtAws {
namespace KinesisVideo {

class UpdateImageGenerationConfigurationRequestPrivate;

class QTAWSKINESISVIDEO_EXPORT UpdateImageGenerationConfigurationRequest : public KinesisVideoRequest {

public:
    UpdateImageGenerationConfigurationRequest(const UpdateImageGenerationConfigurationRequest &other);
    UpdateImageGenerationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateImageGenerationConfigurationRequest)

};

} // namespace KinesisVideo
} // namespace QtAws

#endif
