// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeEventCategoriesResponse;

class DescribeEventCategoriesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeEventCategoriesResponsePrivate(DescribeEventCategoriesResponse * const q);

    void parseDescribeEventCategoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventCategoriesResponse)
    Q_DISABLE_COPY(DescribeEventCategoriesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
