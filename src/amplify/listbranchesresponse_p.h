// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBRANCHESRESPONSE_P_H
#define QTAWS_LISTBRANCHESRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class ListBranchesResponse;

class ListBranchesResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit ListBranchesResponsePrivate(ListBranchesResponse * const q);

    void parseListBranchesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBranchesResponse)
    Q_DISABLE_COPY(ListBranchesResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
