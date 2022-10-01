// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELREQUEST_H
#define QTAWS_DESCRIBECHANNELREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelRequestPrivate;

class QTAWSCHIME_EXPORT DescribeChannelRequest : public ChimeRequest {

public:
    DescribeChannelRequest(const DescribeChannelRequest &other);
    DescribeChannelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
