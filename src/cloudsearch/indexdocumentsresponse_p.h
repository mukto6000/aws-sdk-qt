// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INDEXDOCUMENTSRESPONSE_P_H
#define QTAWS_INDEXDOCUMENTSRESPONSE_P_H

#include "cloudsearchresponse_p.h"

namespace QtAws {
namespace CloudSearch {

class IndexDocumentsResponse;

class IndexDocumentsResponsePrivate : public CloudSearchResponsePrivate {

public:

    explicit IndexDocumentsResponsePrivate(IndexDocumentsResponse * const q);

    void parseIndexDocumentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IndexDocumentsResponse)
    Q_DISABLE_COPY(IndexDocumentsResponsePrivate)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
