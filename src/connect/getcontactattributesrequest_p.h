// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTATTRIBUTESREQUEST_P_H
#define QTAWS_GETCONTACTATTRIBUTESREQUEST_P_H

#include "connectrequest_p.h"
#include "getcontactattributesrequest.h"

namespace QtAws {
namespace Connect {

class GetContactAttributesRequest;

class GetContactAttributesRequestPrivate : public ConnectRequestPrivate {

public:
    GetContactAttributesRequestPrivate(const ConnectRequest::Action action,
                                   GetContactAttributesRequest * const q);
    GetContactAttributesRequestPrivate(const GetContactAttributesRequestPrivate &other,
                                   GetContactAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactAttributesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
