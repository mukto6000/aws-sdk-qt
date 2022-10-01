// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERESPONSE_P_H
#define QTAWS_DELETEIMAGERESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class DeleteImageResponse;

class DeleteImageResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit DeleteImageResponsePrivate(DeleteImageResponse * const q);

    void parseDeleteImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImageResponse)
    Q_DISABLE_COPY(DeleteImageResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
