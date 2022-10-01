// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFORCEREQUEST_P_H
#define QTAWS_DESCRIBEWORKFORCEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeworkforcerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeWorkforceRequest;

class DescribeWorkforceRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeWorkforceRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeWorkforceRequest * const q);
    DescribeWorkforceRequestPrivate(const DescribeWorkforceRequestPrivate &other,
                                   DescribeWorkforceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkforceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
