// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADOBJECTREQUEST_H
#define QTAWS_HEADOBJECTREQUEST_H

#include "s3request.h"

namespace QtAws {
namespace S3 {

class HeadObjectRequestPrivate;

class QTAWSS3_EXPORT HeadObjectRequest : public S3Request {

public:
    HeadObjectRequest(const HeadObjectRequest &other);
    HeadObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HeadObjectRequest)

};

} // namespace S3
} // namespace QtAws

#endif
