// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONRESPONSE_P_H

#include "docdbresponse_p.h"

namespace QtAws {
namespace DocDb {

class DeleteEventSubscriptionResponse;

class DeleteEventSubscriptionResponsePrivate : public DocDbResponsePrivate {

public:

    explicit DeleteEventSubscriptionResponsePrivate(DeleteEventSubscriptionResponse * const q);

    void parseDeleteEventSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventSubscriptionResponse)
    Q_DISABLE_COPY(DeleteEventSubscriptionResponsePrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
