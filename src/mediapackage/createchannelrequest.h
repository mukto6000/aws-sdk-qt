// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECHANNELREQUEST_H
#define QTAWS_CREATECHANNELREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class CreateChannelRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT CreateChannelRequest : public MediaPackageRequest {

public:
    CreateChannelRequest(const CreateChannelRequest &other);
    CreateChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateChannelRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
