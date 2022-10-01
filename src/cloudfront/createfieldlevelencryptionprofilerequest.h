// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILEREQUEST_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILEREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionProfileRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreateFieldLevelEncryptionProfileRequest : public CloudFrontRequest {

public:
    CreateFieldLevelEncryptionProfileRequest(const CreateFieldLevelEncryptionProfileRequest &other);
    CreateFieldLevelEncryptionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
