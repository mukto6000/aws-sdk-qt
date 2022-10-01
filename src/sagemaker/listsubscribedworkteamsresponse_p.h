// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDWORKTEAMSRESPONSE_P_H
#define QTAWS_LISTSUBSCRIBEDWORKTEAMSRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class ListSubscribedWorkteamsResponse;

class ListSubscribedWorkteamsResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit ListSubscribedWorkteamsResponsePrivate(ListSubscribedWorkteamsResponse * const q);

    void parseListSubscribedWorkteamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSubscribedWorkteamsResponse)
    Q_DISABLE_COPY(ListSubscribedWorkteamsResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
