// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERRDSDBINSTANCERESPONSE_P_H
#define QTAWS_DEREGISTERRDSDBINSTANCERESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DeregisterRdsDbInstanceResponse;

class DeregisterRdsDbInstanceResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DeregisterRdsDbInstanceResponsePrivate(DeregisterRdsDbInstanceResponse * const q);

    void parseDeregisterRdsDbInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterRdsDbInstanceResponse)
    Q_DISABLE_COPY(DeregisterRdsDbInstanceResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
