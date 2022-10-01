// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLREQUEST_H
#define QTAWS_DISASSOCIATEWEBACLREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DisassociateWebACLRequestPrivate;

class QTAWSWAFV2_EXPORT DisassociateWebACLRequest : public Wafv2Request {

public:
    DisassociateWebACLRequest(const DisassociateWebACLRequest &other);
    DisassociateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWebACLRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
