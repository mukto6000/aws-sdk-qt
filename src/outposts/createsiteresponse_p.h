// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESITERESPONSE_P_H
#define QTAWS_CREATESITERESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class CreateSiteResponse;

class CreateSiteResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit CreateSiteResponsePrivate(CreateSiteResponse * const q);

    void parseCreateSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSiteResponse)
    Q_DISABLE_COPY(CreateSiteResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
