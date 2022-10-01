// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUPDATEREQUEST_H
#define QTAWS_DESCRIBEUPDATEREQUEST_H

#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class DescribeUpdateRequestPrivate;

class QTAWSEKS_EXPORT DescribeUpdateRequest : public EksRequest {

public:
    DescribeUpdateRequest(const DescribeUpdateRequest &other);
    DescribeUpdateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUpdateRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
