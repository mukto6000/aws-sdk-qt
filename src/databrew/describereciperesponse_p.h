// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECIPERESPONSE_P_H
#define QTAWS_DESCRIBERECIPERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DescribeRecipeResponse;

class DescribeRecipeResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DescribeRecipeResponsePrivate(DescribeRecipeResponse * const q);

    void parseDescribeRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRecipeResponse)
    Q_DISABLE_COPY(DescribeRecipeResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
