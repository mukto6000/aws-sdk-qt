// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUDITMANAGERRESPONSE_P_H
#define QTAWS_AUDITMANAGERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AuditManager {

class AuditManagerResponse;

class AuditManagerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AuditManagerResponsePrivate(AuditManagerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuditManagerResponse)
    Q_DISABLE_COPY(AuditManagerResponsePrivate)

};

} // namespace AuditManager
} // namespace QtAws

#endif
