// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONHEALTHREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONHEALTHREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationHealthRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeOrganizationHealthRequest : public DevOpsGuruRequest {

public:
    DescribeOrganizationHealthRequest(const DescribeOrganizationHealthRequest &other);
    DescribeOrganizationHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
