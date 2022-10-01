// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRINCIPALIDFORMATREQUEST_H
#define QTAWS_DESCRIBEPRINCIPALIDFORMATREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribePrincipalIdFormatRequestPrivate;

class QTAWSEC2_EXPORT DescribePrincipalIdFormatRequest : public Ec2Request {

public:
    DescribePrincipalIdFormatRequest(const DescribePrincipalIdFormatRequest &other);
    DescribePrincipalIdFormatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePrincipalIdFormatRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
