// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABASEMIGRATIONRESPONSE_P_H
#define QTAWS_DATABASEMIGRATIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DatabaseMigrationResponse;

class DatabaseMigrationResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DatabaseMigrationResponsePrivate(DatabaseMigrationResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DatabaseMigrationResponse)
    Q_DISABLE_COPY(DatabaseMigrationResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
