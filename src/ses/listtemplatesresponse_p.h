// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTEMPLATESRESPONSE_P_H
#define QTAWS_LISTTEMPLATESRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class ListTemplatesResponse;

class ListTemplatesResponsePrivate : public SesResponsePrivate {

public:

    explicit ListTemplatesResponsePrivate(ListTemplatesResponse * const q);

    void parseListTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTemplatesResponse)
    Q_DISABLE_COPY(ListTemplatesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
