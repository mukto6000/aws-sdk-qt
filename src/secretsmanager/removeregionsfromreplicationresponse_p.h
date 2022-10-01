// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEREGIONSFROMREPLICATIONRESPONSE_P_H
#define QTAWS_REMOVEREGIONSFROMREPLICATIONRESPONSE_P_H

#include "secretsmanagerresponse_p.h"

namespace QtAws {
namespace SecretsManager {

class RemoveRegionsFromReplicationResponse;

class RemoveRegionsFromReplicationResponsePrivate : public SecretsManagerResponsePrivate {

public:

    explicit RemoveRegionsFromReplicationResponsePrivate(RemoveRegionsFromReplicationResponse * const q);

    void parseRemoveRegionsFromReplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveRegionsFromReplicationResponse)
    Q_DISABLE_COPY(RemoveRegionsFromReplicationResponsePrivate)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
