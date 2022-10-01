// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOADMINRESPONSE_P_H
#define QTAWS_SSOADMINRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SsoAdmin {

class SsoAdminResponse;

class SsoAdminResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsoAdminResponsePrivate(SsoAdminResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsoAdminResponse)
    Q_DISABLE_COPY(SsoAdminResponsePrivate)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
