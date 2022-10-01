// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHAPPLYUPDATEACTIONRESPONSE_P_H
#define QTAWS_BATCHAPPLYUPDATEACTIONRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class BatchApplyUpdateActionResponse;

class BatchApplyUpdateActionResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit BatchApplyUpdateActionResponsePrivate(BatchApplyUpdateActionResponse * const q);

    void parseBatchApplyUpdateActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchApplyUpdateActionResponse)
    Q_DISABLE_COPY(BatchApplyUpdateActionResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
