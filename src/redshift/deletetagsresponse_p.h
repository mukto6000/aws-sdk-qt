// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETAGSRESPONSE_P_H
#define QTAWS_DELETETAGSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeleteTagsResponse;

class DeleteTagsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeleteTagsResponsePrivate(DeleteTagsResponse * const q);

    void parseDeleteTagsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTagsResponse)
    Q_DISABLE_COPY(DeleteTagsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
