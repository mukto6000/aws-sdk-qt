// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASOURCERESPONSE_P_H
#define QTAWS_CREATEDATASOURCERESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateDataSourceResponse;

class CreateDataSourceResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateDataSourceResponsePrivate(CreateDataSourceResponse * const q);

    void parseCreateDataSourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDataSourceResponse)
    Q_DISABLE_COPY(CreateDataSourceResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
