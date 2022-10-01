// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHAPGREQUEST_P_H
#define QTAWS_DESCRIBEHAPGREQUEST_P_H

#include "cloudhsmrequest_p.h"
#include "describehapgrequest.h"

namespace QtAws {
namespace CloudHsm {

class DescribeHapgRequest;

class DescribeHapgRequestPrivate : public CloudHsmRequestPrivate {

public:
    DescribeHapgRequestPrivate(const CloudHsmRequest::Action action,
                                   DescribeHapgRequest * const q);
    DescribeHapgRequestPrivate(const DescribeHapgRequestPrivate &other,
                                   DescribeHapgRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHapgRequest)

};

} // namespace CloudHsm
} // namespace QtAws

#endif
