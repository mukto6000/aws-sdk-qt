// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERCONTENTSRESPONSE_P_H
#define QTAWS_DESCRIBEFOLDERCONTENTSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeFolderContentsResponse;

class DescribeFolderContentsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeFolderContentsResponsePrivate(DescribeFolderContentsResponse * const q);

    void parseDescribeFolderContentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFolderContentsResponse)
    Q_DISABLE_COPY(DescribeFolderContentsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
