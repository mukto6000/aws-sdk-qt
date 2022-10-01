// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERREQUEST_P_H
#define QTAWS_UPDATEPHONENUMBERREQUEST_P_H

#include "connectrequest_p.h"
#include "updatephonenumberrequest.h"

namespace QtAws {
namespace Connect {

class UpdatePhoneNumberRequest;

class UpdatePhoneNumberRequestPrivate : public ConnectRequestPrivate {

public:
    UpdatePhoneNumberRequestPrivate(const ConnectRequest::Action action,
                                   UpdatePhoneNumberRequest * const q);
    UpdatePhoneNumberRequestPrivate(const UpdatePhoneNumberRequestPrivate &other,
                                   UpdatePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
