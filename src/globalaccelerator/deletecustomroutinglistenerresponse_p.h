// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMROUTINGLISTENERRESPONSE_P_H
#define QTAWS_DELETECUSTOMROUTINGLISTENERRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteCustomRoutingListenerResponse;

class DeleteCustomRoutingListenerResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeleteCustomRoutingListenerResponsePrivate(DeleteCustomRoutingListenerResponse * const q);

    void parseDeleteCustomRoutingListenerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomRoutingListenerResponse)
    Q_DISABLE_COPY(DeleteCustomRoutingListenerResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
