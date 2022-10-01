// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHTYPEDLINKRESPONSE_P_H
#define QTAWS_DETACHTYPEDLINKRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DetachTypedLinkResponse;

class DetachTypedLinkResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DetachTypedLinkResponsePrivate(DetachTypedLinkResponse * const q);

    void parseDetachTypedLinkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachTypedLinkResponse)
    Q_DISABLE_COPY(DetachTypedLinkResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
