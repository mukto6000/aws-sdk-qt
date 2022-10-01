// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEADDRESSREQUEST_P_H
#define QTAWS_ALLOCATEADDRESSREQUEST_P_H

#include "ec2request_p.h"
#include "allocateaddressrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateAddressRequest;

class AllocateAddressRequestPrivate : public Ec2RequestPrivate {

public:
    AllocateAddressRequestPrivate(const Ec2Request::Action action,
                                   AllocateAddressRequest * const q);
    AllocateAddressRequestPrivate(const AllocateAddressRequestPrivate &other,
                                   AllocateAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(AllocateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
