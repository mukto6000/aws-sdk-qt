// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTCOMPONENTSRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListComponentsResponse;

class ListComponentsResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ListComponentsResponsePrivate(ListComponentsResponse * const q);

    void parseListComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListComponentsResponse)
    Q_DISABLE_COPY(ListComponentsResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
