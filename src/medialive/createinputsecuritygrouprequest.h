// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINPUTSECURITYGROUPREQUEST_H
#define QTAWS_CREATEINPUTSECURITYGROUPREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreateInputSecurityGroupRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreateInputSecurityGroupRequest : public MediaLiveRequest {

public:
    CreateInputSecurityGroupRequest(const CreateInputSecurityGroupRequest &other);
    CreateInputSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
