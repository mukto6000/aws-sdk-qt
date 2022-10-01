// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONREQUEST_H
#define QTAWS_DESCRIBESTATEMACHINEFOREXECUTIONREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineForExecutionRequestPrivate;

class QTAWSSFN_EXPORT DescribeStateMachineForExecutionRequest : public SfnRequest {

public:
    DescribeStateMachineForExecutionRequest(const DescribeStateMachineForExecutionRequest &other);
    DescribeStateMachineForExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStateMachineForExecutionRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
