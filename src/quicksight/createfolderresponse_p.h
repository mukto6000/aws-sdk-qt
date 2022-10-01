// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFOLDERRESPONSE_P_H
#define QTAWS_CREATEFOLDERRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateFolderResponse;

class CreateFolderResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateFolderResponsePrivate(CreateFolderResponse * const q);

    void parseCreateFolderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFolderResponse)
    Q_DISABLE_COPY(CreateFolderResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
