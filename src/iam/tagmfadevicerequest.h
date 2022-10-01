// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGMFADEVICEREQUEST_H
#define QTAWS_TAGMFADEVICEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class TagMFADeviceRequestPrivate;

class QTAWSIAM_EXPORT TagMFADeviceRequest : public IamRequest {

public:
    TagMFADeviceRequest(const TagMFADeviceRequest &other);
    TagMFADeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
