// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICERESPONSE_P_H
#define QTAWS_DELETEDEVICERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteDeviceResponse;

class DeleteDeviceResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit DeleteDeviceResponsePrivate(DeleteDeviceResponse * const q);

    void parseDeleteDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceResponse)
    Q_DISABLE_COPY(DeleteDeviceResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
