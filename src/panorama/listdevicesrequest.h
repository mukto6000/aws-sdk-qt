// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESREQUEST_H
#define QTAWS_LISTDEVICESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListDevicesRequestPrivate;

class QTAWSPANORAMA_EXPORT ListDevicesRequest : public PanoramaRequest {

public:
    ListDevicesRequest(const ListDevicesRequest &other);
    ListDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
