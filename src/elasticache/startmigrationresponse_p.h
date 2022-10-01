// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMIGRATIONRESPONSE_P_H
#define QTAWS_STARTMIGRATIONRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class StartMigrationResponse;

class StartMigrationResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit StartMigrationResponsePrivate(StartMigrationResponse * const q);

    void parseStartMigrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMigrationResponse)
    Q_DISABLE_COPY(StartMigrationResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
