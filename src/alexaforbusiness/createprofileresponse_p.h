// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILERESPONSE_P_H
#define QTAWS_CREATEPROFILERESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateProfileResponse;

class CreateProfileResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit CreateProfileResponsePrivate(CreateProfileResponse * const q);

    void parseCreateProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProfileResponse)
    Q_DISABLE_COPY(CreateProfileResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
