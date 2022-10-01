// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEASSETREQUEST_P_H
#define QTAWS_CREATEASSETREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createassetrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAssetRequest;

class CreateAssetRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateAssetRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateAssetRequest * const q);
    CreateAssetRequestPrivate(const CreateAssetRequestPrivate &other,
                                   CreateAssetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAssetRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
