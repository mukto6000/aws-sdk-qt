// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSRESPONSE_P_H
#define QTAWS_ADDTAGSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class AddTagsResponse;

class AddTagsResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit AddTagsResponsePrivate(AddTagsResponse * const q);

    void parseAddTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddTagsResponse)
    Q_DISABLE_COPY(AddTagsResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
