// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWEBACLFORRESOURCEREQUEST_H
#define QTAWS_GETWEBACLFORRESOURCEREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetWebACLForResourceRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetWebACLForResourceRequest : public WafRegionalRequest {

public:
    GetWebACLForResourceRequest(const GetWebACLForResourceRequest &other);
    GetWebACLForResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWebACLForResourceRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
