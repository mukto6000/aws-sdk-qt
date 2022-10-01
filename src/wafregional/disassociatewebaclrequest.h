// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBACLREQUEST_H
#define QTAWS_DISASSOCIATEWEBACLREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DisassociateWebACLRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DisassociateWebACLRequest : public WafRegionalRequest {

public:
    DisassociateWebACLRequest(const DisassociateWebACLRequest &other);
    DisassociateWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWebACLRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
