// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGMFADEVICERESPONSE_P_H
#define QTAWS_UNTAGMFADEVICERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagMFADeviceResponse;

class UntagMFADeviceResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagMFADeviceResponsePrivate(UntagMFADeviceResponse * const q);

    void parseUntagMFADeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagMFADeviceResponse)
    Q_DISABLE_COPY(UntagMFADeviceResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
