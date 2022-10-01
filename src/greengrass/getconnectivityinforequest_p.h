// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIVITYINFOREQUEST_P_H
#define QTAWS_GETCONNECTIVITYINFOREQUEST_P_H

#include "greengrassrequest_p.h"
#include "getconnectivityinforequest.h"

namespace QtAws {
namespace Greengrass {

class GetConnectivityInfoRequest;

class GetConnectivityInfoRequestPrivate : public GreengrassRequestPrivate {

public:
    GetConnectivityInfoRequestPrivate(const GreengrassRequest::Action action,
                                   GetConnectivityInfoRequest * const q);
    GetConnectivityInfoRequestPrivate(const GetConnectivityInfoRequestPrivate &other,
                                   GetConnectivityInfoRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConnectivityInfoRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
