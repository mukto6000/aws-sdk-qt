// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPICACHERESPONSE_P_H
#define QTAWS_DELETEAPICACHERESPONSE_P_H

#include "appsyncresponse_p.h"

namespace QtAws {
namespace AppSync {

class DeleteApiCacheResponse;

class DeleteApiCacheResponsePrivate : public AppSyncResponsePrivate {

public:

    explicit DeleteApiCacheResponsePrivate(DeleteApiCacheResponse * const q);

    void parseDeleteApiCacheResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteApiCacheResponse)
    Q_DISABLE_COPY(DeleteApiCacheResponsePrivate)

};

} // namespace AppSync
} // namespace QtAws

#endif
