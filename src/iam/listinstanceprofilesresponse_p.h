// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESRESPONSE_P_H
#define QTAWS_LISTINSTANCEPROFILESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesResponse;

class ListInstanceProfilesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListInstanceProfilesResponsePrivate(ListInstanceProfilesResponse * const q);

    void parseListInstanceProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInstanceProfilesResponse)
    Q_DISABLE_COPY(ListInstanceProfilesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
