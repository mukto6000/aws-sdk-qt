// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLREQUEST_H
#define QTAWS_GETWEBACLREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class GetWebACLRequestPrivate;

class QTAWSWAF_EXPORT GetWebACLRequest : public WafRequest {

public:
    GetWebACLRequest(const GetWebACLRequest &other);
    GetWebACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
