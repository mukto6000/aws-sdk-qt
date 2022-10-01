// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESREQUEST_H
#define QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SetPlatformApplicationAttributesRequestPrivate;

class QTAWSSNS_EXPORT SetPlatformApplicationAttributesRequest : public SnsRequest {

public:
    SetPlatformApplicationAttributesRequest(const SetPlatformApplicationAttributesRequest &other);
    SetPlatformApplicationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetPlatformApplicationAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
