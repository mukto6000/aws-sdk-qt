// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAVAILABILITYOPTIONSREQUEST_H
#define QTAWS_UPDATEAVAILABILITYOPTIONSREQUEST_H

#include "cloudsearchrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateAvailabilityOptionsRequestPrivate;

class QTAWSCLOUDSEARCH_EXPORT UpdateAvailabilityOptionsRequest : public CloudSearchRequest {

public:
    UpdateAvailabilityOptionsRequest(const UpdateAvailabilityOptionsRequest &other);
    UpdateAvailabilityOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAvailabilityOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
