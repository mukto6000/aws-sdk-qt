// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSRESPONSE_P_H
#define QTAWS_LISTENTITYRECOGNIZERSRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizersResponse;

class ListEntityRecognizersResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListEntityRecognizersResponsePrivate(ListEntityRecognizersResponse * const q);

    void parseListEntityRecognizersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntityRecognizersResponse)
    Q_DISABLE_COPY(ListEntityRecognizersResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
