// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDOMAINNAMESRESPONSE_P_H
#define QTAWS_LISTDOMAINNAMESRESPONSE_P_H

#include "elasticsearchresponse_p.h"

namespace QtAws {
namespace Elasticsearch {

class ListDomainNamesResponse;

class ListDomainNamesResponsePrivate : public ElasticsearchResponsePrivate {

public:

    explicit ListDomainNamesResponsePrivate(ListDomainNamesResponse * const q);

    void parseListDomainNamesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDomainNamesResponse)
    Q_DISABLE_COPY(ListDomainNamesResponsePrivate)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
