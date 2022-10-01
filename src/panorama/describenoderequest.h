// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEREQUEST_H
#define QTAWS_DESCRIBENODEREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeRequestPrivate;

class QTAWSPANORAMA_EXPORT DescribeNodeRequest : public PanoramaRequest {

public:
    DescribeNodeRequest(const DescribeNodeRequest &other);
    DescribeNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNodeRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
