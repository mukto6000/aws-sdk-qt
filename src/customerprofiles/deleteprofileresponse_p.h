// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILERESPONSE_P_H
#define QTAWS_DELETEPROFILERESPONSE_P_H

#include "customerprofilesresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileResponse;

class DeleteProfileResponsePrivate : public CustomerProfilesResponsePrivate {

public:

    explicit DeleteProfileResponsePrivate(DeleteProfileResponse * const q);

    void parseDeleteProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProfileResponse)
    Q_DISABLE_COPY(DeleteProfileResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
