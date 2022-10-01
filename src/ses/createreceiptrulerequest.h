// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECEIPTRULEREQUEST_H
#define QTAWS_CREATERECEIPTRULEREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class CreateReceiptRuleRequestPrivate;

class QTAWSSES_EXPORT CreateReceiptRuleRequest : public SesRequest {

public:
    CreateReceiptRuleRequest(const CreateReceiptRuleRequest &other);
    CreateReceiptRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
