// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMAPREQUEST_H
#define QTAWS_CREATEMAPREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CreateMapRequestPrivate;

class QTAWSLOCATION_EXPORT CreateMapRequest : public LocationRequest {

public:
    CreateMapRequest(const CreateMapRequest &other);
    CreateMapRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMapRequest)

};

} // namespace Location
} // namespace QtAws

#endif
