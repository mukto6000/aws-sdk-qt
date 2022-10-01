// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTRESPONSE_P_H
#define QTAWS_UPDATECOMPONENTRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateComponentResponse;

class UpdateComponentResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit UpdateComponentResponsePrivate(UpdateComponentResponse * const q);

    void parseUpdateComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateComponentResponse)
    Q_DISABLE_COPY(UpdateComponentResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
