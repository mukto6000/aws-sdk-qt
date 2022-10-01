// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVGWROUTEPROPAGATIONREQUEST_H
#define QTAWS_ENABLEVGWROUTEPROPAGATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class EnableVgwRoutePropagationRequestPrivate;

class QTAWSEC2_EXPORT EnableVgwRoutePropagationRequest : public Ec2Request {

public:
    EnableVgwRoutePropagationRequest(const EnableVgwRoutePropagationRequest &other);
    EnableVgwRoutePropagationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVgwRoutePropagationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
