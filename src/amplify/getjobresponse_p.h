// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRESPONSE_P_H
#define QTAWS_GETJOBRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class GetJobResponse;

class GetJobResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit GetJobResponsePrivate(GetJobResponse * const q);

    void parseGetJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobResponse)
    Q_DISABLE_COPY(GetJobResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
