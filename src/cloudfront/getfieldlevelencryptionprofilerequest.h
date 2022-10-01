// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILEREQUEST_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILEREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionProfileRequest : public CloudFrontRequest {

public:
    GetFieldLevelEncryptionProfileRequest(const GetFieldLevelEncryptionProfileRequest &other);
    GetFieldLevelEncryptionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
