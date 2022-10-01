// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREADDRESSTOCLASSICRESPONSE_P_H
#define QTAWS_RESTOREADDRESSTOCLASSICRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class RestoreAddressToClassicResponse;

class RestoreAddressToClassicResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit RestoreAddressToClassicResponsePrivate(RestoreAddressToClassicResponse * const q);

    void parseRestoreAddressToClassicResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RestoreAddressToClassicResponse)
    Q_DISABLE_COPY(RestoreAddressToClassicResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
