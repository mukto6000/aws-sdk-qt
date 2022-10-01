// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFPGAIMAGESREQUEST_H
#define QTAWS_DESCRIBEFPGAIMAGESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeFpgaImagesRequestPrivate;

class QTAWSEC2_EXPORT DescribeFpgaImagesRequest : public Ec2Request {

public:
    DescribeFpgaImagesRequest(const DescribeFpgaImagesRequest &other);
    DescribeFpgaImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFpgaImagesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
