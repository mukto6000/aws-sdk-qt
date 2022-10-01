// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERSTATUSREQUEST_H
#define QTAWS_PUTUSERSTATUSREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class PutUserStatusRequestPrivate;

class QTAWSCONNECT_EXPORT PutUserStatusRequest : public ConnectRequest {

public:
    PutUserStatusRequest(const PutUserStatusRequest &other);
    PutUserStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUserStatusRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
