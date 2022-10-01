// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULESETREQUEST_H
#define QTAWS_DESCRIBERECEIPTRULESETREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleSetRequestPrivate;

class QTAWSSES_EXPORT DescribeReceiptRuleSetRequest : public SesRequest {

public:
    DescribeReceiptRuleSetRequest(const DescribeReceiptRuleSetRequest &other);
    DescribeReceiptRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
