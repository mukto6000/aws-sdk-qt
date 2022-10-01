// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERDATAREQUEST_H
#define QTAWS_GETCURRENTUSERDATAREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentUserDataRequestPrivate;

class QTAWSCONNECT_EXPORT GetCurrentUserDataRequest : public ConnectRequest {

public:
    GetCurrentUserDataRequest(const GetCurrentUserDataRequest &other);
    GetCurrentUserDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCurrentUserDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
