// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSREQUEST_H
#define QTAWS_ADDTAGSREQUEST_H

#include "elasticloadbalancingv2request.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class AddTagsRequestPrivate;

class QTAWSELASTICLOADBALANCINGV2_EXPORT AddTagsRequest : public ElasticLoadBalancingv2Request {

public:
    AddTagsRequest(const AddTagsRequest &other);
    AddTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsRequest)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
