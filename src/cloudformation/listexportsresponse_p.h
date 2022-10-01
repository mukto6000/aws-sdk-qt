// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXPORTSRESPONSE_P_H
#define QTAWS_LISTEXPORTSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class ListExportsResponse;

class ListExportsResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit ListExportsResponsePrivate(ListExportsResponse * const q);

    void parseListExportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExportsResponse)
    Q_DISABLE_COPY(ListExportsResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
