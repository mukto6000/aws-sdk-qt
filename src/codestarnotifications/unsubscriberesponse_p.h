// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSUBSCRIBERESPONSE_P_H
#define QTAWS_UNSUBSCRIBERESPONSE_P_H

#include "codestarnotificationsresponse_p.h"

namespace QtAws {
namespace CodestarNotifications {

class UnsubscribeResponse;

class UnsubscribeResponsePrivate : public CodestarNotificationsResponsePrivate {

public:

    explicit UnsubscribeResponsePrivate(UnsubscribeResponse * const q);

    void parseUnsubscribeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnsubscribeResponse)
    Q_DISABLE_COPY(UnsubscribeResponsePrivate)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
