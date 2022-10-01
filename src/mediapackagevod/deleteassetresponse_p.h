// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSETRESPONSE_P_H
#define QTAWS_DELETEASSETRESPONSE_P_H

#include "mediapackagevodresponse_p.h"

namespace QtAws {
namespace MediaPackageVod {

class DeleteAssetResponse;

class DeleteAssetResponsePrivate : public MediaPackageVodResponsePrivate {

public:

    explicit DeleteAssetResponsePrivate(DeleteAssetResponse * const q);

    void parseDeleteAssetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAssetResponse)
    Q_DISABLE_COPY(DeleteAssetResponsePrivate)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
