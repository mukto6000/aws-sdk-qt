// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPUBLICKEYSREQUEST_H
#define QTAWS_LISTPUBLICKEYSREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class ListPublicKeysRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT ListPublicKeysRequest : public CloudFrontRequest {

public:
    ListPublicKeysRequest(const ListPublicKeysRequest &other);
    ListPublicKeysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPublicKeysRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
