// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAPSREQUEST_H
#define QTAWS_LISTMAPSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListMapsRequestPrivate;

class QTAWSLOCATION_EXPORT ListMapsRequest : public LocationRequest {

public:
    ListMapsRequest(const ListMapsRequest &other);
    ListMapsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMapsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
