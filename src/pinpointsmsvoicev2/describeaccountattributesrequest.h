// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEACCOUNTATTRIBUTESREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeAccountAttributesRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DescribeAccountAttributesRequest : public PinpointSmsVoiceV2Request {

public:
    DescribeAccountAttributesRequest(const DescribeAccountAttributesRequest &other);
    DescribeAccountAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAttributesRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
