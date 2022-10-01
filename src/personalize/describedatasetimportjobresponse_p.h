// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETIMPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETIMPORTJOBRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeDatasetImportJobResponse;

class DescribeDatasetImportJobResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeDatasetImportJobResponsePrivate(DescribeDatasetImportJobResponse * const q);

    void parseDescribeDatasetImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetImportJobResponse)
    Q_DISABLE_COPY(DescribeDatasetImportJobResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
