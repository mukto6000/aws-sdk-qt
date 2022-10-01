// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADARCHIVERESPONSE_P_H
#define QTAWS_UPLOADARCHIVERESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class UploadArchiveResponse;

class UploadArchiveResponsePrivate : public GlacierResponsePrivate {

public:

    explicit UploadArchiveResponsePrivate(UploadArchiveResponse * const q);

    void parseUploadArchiveResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadArchiveResponse)
    Q_DISABLE_COPY(UploadArchiveResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
