// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUNDLESREQUEST_H
#define QTAWS_GETBUNDLESREQUEST_H

#include "lightsailrequest.h"

namespace QtAws {
namespace Lightsail {

class GetBundlesRequestPrivate;

class QTAWSLIGHTSAIL_EXPORT GetBundlesRequest : public LightsailRequest {

public:
    GetBundlesRequest(const GetBundlesRequest &other);
    GetBundlesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBundlesRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
