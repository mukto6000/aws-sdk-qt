// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATURETRANSFORMATIONRESPONSE_P_H
#define QTAWS_DESCRIBEFEATURETRANSFORMATIONRESPONSE_P_H

#include "personalizeresponse_p.h"

namespace QtAws {
namespace Personalize {

class DescribeFeatureTransformationResponse;

class DescribeFeatureTransformationResponsePrivate : public PersonalizeResponsePrivate {

public:

    explicit DescribeFeatureTransformationResponsePrivate(DescribeFeatureTransformationResponse * const q);

    void parseDescribeFeatureTransformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureTransformationResponse)
    Q_DISABLE_COPY(DescribeFeatureTransformationResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
