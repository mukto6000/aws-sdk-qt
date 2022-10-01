// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSDETAILSREQUEST_H
#define QTAWS_GETINSTANCEACCESSDETAILSREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceAccessDetailsRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetInstanceAccessDetailsRequest : public LightsailRequest {

public:
    GetInstanceAccessDetailsRequest(const GetInstanceAccessDetailsRequest &other);
    GetInstanceAccessDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceAccessDetailsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
