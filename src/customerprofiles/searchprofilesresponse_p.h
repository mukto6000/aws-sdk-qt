// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHPROFILESRESPONSE_P_H
#define QTAWS_SEARCHPROFILESRESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class SearchProfilesResponse;

class SearchProfilesResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit SearchProfilesResponsePrivate(SearchProfilesResponse * const q);

    void parseSearchProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchProfilesResponse)
    Q_DISABLE_COPY(SearchProfilesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
