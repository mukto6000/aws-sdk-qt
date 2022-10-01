// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPACKAGEREQUEST_P_H
#define QTAWS_DELETEPACKAGEREQUEST_P_H

#include "panoramarequest_p.h"
#include "deletepackagerequest.h"

namespace QtAws {
namespace Panorama {

class DeletePackageRequest;

class DeletePackageRequestPrivate : public PanoramaRequestPrivate {

public:
    DeletePackageRequestPrivate(const PanoramaRequest::Action action,
                                   DeletePackageRequest * const q);
    DeletePackageRequestPrivate(const DeletePackageRequestPrivate &other,
                                   DeletePackageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePackageRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
