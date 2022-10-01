// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONVERSIONRESPONSE_P_H
#define QTAWS_CREATESOLUTIONVERSIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionVersionResponse;

class CreateSolutionVersionResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit CreateSolutionVersionResponsePrivate(CreateSolutionVersionResponse * const q);

    void parseCreateSolutionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSolutionVersionResponse)
    Q_DISABLE_COPY(CreateSolutionVersionResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
