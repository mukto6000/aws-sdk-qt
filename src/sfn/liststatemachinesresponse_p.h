// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTATEMACHINESRESPONSE_P_H
#define QTAWS_LISTSTATEMACHINESRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class ListStateMachinesResponse;

class ListStateMachinesResponsePrivate : public SfnResponsePrivate {

public:

    explicit ListStateMachinesResponsePrivate(ListStateMachinesResponse * const q);

    void parseListStateMachinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStateMachinesResponse)
    Q_DISABLE_COPY(ListStateMachinesResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
