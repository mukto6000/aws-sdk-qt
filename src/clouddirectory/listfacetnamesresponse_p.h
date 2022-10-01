// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFACETNAMESRESPONSE_P_H
#define QTAWS_LISTFACETNAMESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListFacetNamesResponse;

class ListFacetNamesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListFacetNamesResponsePrivate(ListFacetNamesResponse * const q);

    void parseListFacetNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFacetNamesResponse)
    Q_DISABLE_COPY(ListFacetNamesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
